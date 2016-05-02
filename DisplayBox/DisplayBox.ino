
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
#include "powerbutton.c"	// Blue power button. Matches existing physical switch. Make a breathing effect while it's waiting.

#define COLOR_DEPTH 24                  // known working: 24, 48 - If the sketch uses type `rgb24` directly, COLOR_DEPTH must be 24
// Current DisplayBox dimensions is 64x32
const uint8_t kMatrixWidth = 64;        // known working: 32, 64, 96, 128
const uint8_t kMatrixHeight = 32;       // known working: 16, 32, 48, 64
const uint8_t kRefreshDepth = 36;       // known working: 24, 36, 48
const uint8_t kDmaBufferRows = 4;       // known working: 2-4, use 2 to save memory, more to keep from dropping frames and automatically lowering refresh rate
const uint8_t kPanelType = SMARTMATRIX_HUB75_32ROW_MOD16SCAN;   // use SMARTMATRIX_HUB75_16ROW_MOD8SCAN for common 16x32 panels

// Need to investigate options. Docs not up to date yet. May have to dig around source code
const uint8_t kMatrixOptions = (SMARTMATRIX_OPTIONS_NONE);      // see http://docs.pixelmatix.com/SmartMatrix for options
const uint8_t kBackgroundLayerOptions = (SM_BACKGROUND_OPTIONS_NONE);
const uint8_t kIndexedLayerOptions = (SM_INDEXED_OPTIONS_NONE);

// There is a draw buffer and display buffer. The next section allocates memory to those buffers

// Default display buffer named: displayBox
SMARTMATRIX_ALLOCATE_BUFFERS(displayBox, kMatrixWidth, kMatrixHeight, kRefreshDepth, kDmaBufferRows, kPanelType, kMatrixOptions);

// Default background layer
SMARTMATRIX_ALLOCATE_BACKGROUND_LAYER(defaultBackgroundLayer, kMatrixWidth, kMatrixHeight, COLOR_DEPTH, kBackgroundLayerOptions);

// Initial indexed layer. 
SMARTMATRIX_ALLOCATE_INDEXED_LAYER(indexedLayer, kMatrixWidth, kMatrixHeight, COLOR_DEPTH, kIndexedLayerOptions);

// variable to keep track of current layer
// Would like to pass the class name as a variable to the drawBitmap() function
byte selectedLayer = 0; // 0 is default background



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



// Default background layer color
const rgb24 defaultBackgroundColor = black;

// Default background layer brightness
const int defaultBrightness = 70 * (255 / 100); //Currently 70%. Would like to change brightness via hardware.


void setup() {

	// Add the layers that were allocated above
	displayBox.addLayer(&defaultBackgroundLayer);	// Default background
	displayBox.addLayer(&indexedLayer);	// Indexed layer

	displayBox.begin();

	// Set initial brightness to default
	displayBox.setBrightness(defaultBrightness);

	defaultBackgroundLayer.setBrightness(defaultBrightness);

	// Enable color correction. Works!
	defaultBackgroundLayer.enableColorCorrection(true);
	indexedLayer.enableColorCorrection(true);

	// Draw the powerbutton background as the default for now
	drawDefaultBackground();

}

void loop() {

}

void drawDefaultBackground() {
	// Draws default background using the gimp bitmaps. Would like to find a way
	// to load a bitmap from an SD card into memory. This way we can change backgrounds
	// without having to recompile, maybe. It may need to be compiled first.

	// Clear background layer
	// defaultBackgroundLayer.fillScreen(black);

	// Draw the blue powerbutton graphic (need to add option to choose displaybuffer)
	drawBitmap(0, 0, 0, (const gimp64x32bitmap*)&powerbutton);


}

// This function draws GIMP converted c bitmaps to the display buffer. Pretty awesome!
// This function was taken from the SmartMatrix FeatureDemo.ino.
// It reads the RGB bitmap data stored in gimp64x32bitmap and draws a pixel of the same color
// to the given displaybuffer.
void drawBitmap(int16_t x, int16_t y, char selectedLayer, const gimp64x32bitmap* bitmap) {
	for (unsigned int i = 0; i < bitmap->height; i++) {
		for (unsigned int j = 0; j < bitmap->width; j++) {
			rgb24 pixel = { bitmap->pixel_data[(i*bitmap->width + j) * 3 + 0],
				bitmap->pixel_data[(i*bitmap->width + j) * 3 + 1],
				bitmap->pixel_data[(i*bitmap->width + j) * 3 + 2] };

			if (selectedLayer == 1) {
				//2nd, 3rd, 4th...etc background buffer

			}
			else {
				// Pick the default buffer
				defaultBackgroundLayer.drawPixel(x + j, y + i, pixel);
			}

		}
	}
}
