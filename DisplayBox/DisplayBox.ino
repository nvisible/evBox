
/*
 Name:		DisplayBox.ino
 Created:	5/1/2016 19:27:08
 Author:	neald
*/

/*The DisplayBox is a 3mm pitch 64x32 RGB LED Matrix display.
Its uses a Teensy 3.2 microcontroller from PJRC and a SmartMatrix SD Shield from PixelMatix
Initial plan is to implement inputs for Voltage, Amperage, and Speed display*/

// SPI library needed for SD card and for intercommunication between boxes.
#include <SPI.h>

// SmartMatrix 3 library to run the shield.
#include "SmartMatrix3.h"

// Structure that displays bitmaps converted from GIMP
#include "gimpbitmap.h"

// Includes for all bitmaps. May move to separate file for optional builds
#include "powerbuttongfx.c"	// Blue power button. Matches existing physical switch. Make a breathing effect while it's waiting.

#define COLOR_DEPTH 24                  // known working: 24, 48 - If the sketch uses type `rgb24` directly, COLOR_DEPTH must be 24
const uint8_t kMatrixWidth = 64;        // known working: 32, 64, 96, 128
const uint8_t kMatrixHeight = 32;       // known working: 16, 32, 48, 64
										// Current DisplayBox dimensions is 64x32
const uint8_t kRefreshDepth = 24;       // known working: 24, 36, 48
const uint8_t kDmaBufferRows = 2;       // known working: 2-4, use 2 to save memory, more to keep from dropping frames and automatically lowering refresh rate
										// Starting with the lowest setting for buffers and refresh depth. Currently saves about 4k of memory.
										// Will change these values as needed
const uint8_t kPanelType = SMARTMATRIX_HUB75_32ROW_MOD16SCAN;   // use SMARTMATRIX_HUB75_16ROW_MOD8SCAN for common 16x32 panels

// Need to investigate options. Docs not up to date yet. May have to dig around source code
const uint8_t kMatrixOptions = (SMARTMATRIX_OPTIONS_NONE);      // see http://docs.pixelmatix.com/SmartMatrix for options
const uint8_t kBackgroundLayerOptions = (SM_BACKGROUND_OPTIONS_NONE);
const uint8_t kIndexedLayerOptions = (SM_INDEXED_OPTIONS_NONE);

// There is a draw buffer and display buffer. The next section allocates memory to those buffers
SMARTMATRIX_ALLOCATE_BUFFERS(displayBox, kMatrixWidth, kMatrixHeight, kRefreshDepth, kDmaBufferRows, kPanelType, kMatrixOptions);	// Default display buffer named: displayBox
SMARTMATRIX_ALLOCATE_BACKGROUND_LAYER(defaultBackgroundLayer, kMatrixWidth, kMatrixHeight, COLOR_DEPTH, kBackgroundLayerOptions);	// Default background layer
SMARTMATRIX_ALLOCATE_INDEXED_LAYER(indexedLayer, kMatrixWidth, kMatrixHeight, COLOR_DEPTH, kIndexedLayerOptions);					// Initial indexed layer. 

byte selectedLayer = 0; // 0 is default background
						// variable to keep track of current layer
						// Would like to pass the class name as a variable to the drawBitmap() function

// Current color depth is 24bit so next let's setup color shortcuts. Makes changes a lot easier
const rgb24 black = { 0,0,0 };
const rgb24 white = { 255,255,255 };
const rgb24 red = { 255,0,0 };
const rgb24 orange = { 255,165,0 };
const rgb24 yellow = { 255,255,0 };
const rgb24 green = { 0,255,0 };
const rgb24 blue = { 0,0,255 };
const rgb24 indigo = { 75,0,130 };
const rgb24 violet = { 238,130,238 };

const rgb24 defaultBackgroundColor = black;		// Default background layer color

const int defaultBrightness = 70 * (255 / 100); // Default background layer brightness
												//Currently 70%. Would like to change brightness via hardware.
const int powerButtonPin = 32;	// Add digital pin for power button
								// Find available digital pin on Teensy 3.2
bool powerButtonState;			// Is power button on or off?

void setup() {

	// Add the layers that were allocated above
	displayBox.addLayer(&defaultBackgroundLayer);	// Default background
	displayBox.addLayer(&indexedLayer);				// Indexed layer
	displayBox.begin();

	displayBox.setBrightness(defaultBrightness);				// Set initial brightness to default
	defaultBackgroundLayer.setBrightness(defaultBrightness);	// Set default brightness
	defaultBackgroundLayer.enableColorCorrection(true);			// Enable color correction. Works!
	indexedLayer.enableColorCorrection(true);					// This correction may not be needed

	
	if (powerButtonState == LOW) {				// If the main power button is off...
		selectedLayer = 0;						// Select the default background layer
		drawPowerStandbyBackground();			// ... draw the power standby background
		defaultBackgroundLayer.swapBuffers();	// Push draw buffer to display
	}	
	else
	{
		// Draw the initial default background template
	}
}

void loop() {
	/* After inital variables are gathered in Setup() Lock the electric vehicle until the applicable power 
	button is pressed. This will allow the DisplayBox/BrainBox assemblies to configure the vehicle but
	not issue any commands until power interlocks are disable.
	Because the DisplayBox is a generic EV display, look into ways to change the theme based on the
	type of vehicle selected. This is where user generated bitmaps pulled from the SD card are a huge plus.
	Possibly burn in a set of default themes (especially as a fallback to corrupt user files).
	*/

	while (digitalRead(powerButtonPin) == HIGH)
	{
		// Call display "breathing" function for "power standing by" effect on display
		
		// Later, add option to access config menus while in this state

	}
}

void clearBuffer(int x, int y) {	// x-y coordinates to clear if specific pixels
	// Clear a specific buffer

	// Would also like to pass parameters to clear a specific area of a buffer, too
}

void drawDefaultIndexed() {

}

void drawDefaultBackground() {
	// Draws default background using the gimp bitmaps. Would like to find a way
	// to load a bitmap from an SD card into memory. This way we can change backgrounds
	// without having to recompile, maybe. It may need to be compiled first.

	// Clear background layer
	// defaultBackgroundLayer.fillScreen(black);
}

void drawPowerStandbyBackground() {
	// Draw the blue powerbutton graphic (need to add option to choose displaybuffer)
	drawBitmap(0, 0, selectedLayer, (const gimp64x32bitmap*)&powerbuttongfx);	// to use drawBitmap, must cast the pointer to bitmap as (const gimp64x32bitmap*)

}

void drawBitmap(int16_t x, int16_t y, char selectedLayer, const gimp64x32bitmap* bitmap) {
	// This function draws GIMP converted c bitmaps to the display buffer. Pretty awesome!
	// This function was taken from the SmartMatrix FeatureDemo.ino.
	// It reads the RGB bitmap data stored in gimp64x32bitmap and draws a pixel of the same color
	// to the given displaybuffer.

	for (unsigned int i = 0; i < bitmap->height; i++) {
		for (unsigned int j = 0; j < bitmap->width; j++) {
			rgb24 pixel = { bitmap->pixel_data[(i*bitmap->width + j) * 3 + 0],
				bitmap->pixel_data[(i*bitmap->width + j) * 3 + 1],
				bitmap->pixel_data[(i*bitmap->width + j) * 3 + 2] };

			if (selectedLayer == 1) {
				//2nd, 3rd, 4th...etc background buffer
			}
			else {
				defaultBackgroundLayer.drawPixel(x + j, y + i, pixel);	// Pick the default buffer
			}
		}
	}
}