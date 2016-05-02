/* GIMP RGB C-Source image dump (powerbutton.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[64 * 32 * 3 + 1];
} powerbutton = {
  64, 32, 3,
  "\2\2\2\1\2\1\1\2\1\0\2\1\0\3\2\0\2\1\0\2\1\1\3\2\0\3\2\1\2\2\1\1\1\1\2\2"
  "\0\2\1\0\2\1\0\3\2\2\3\3\2\3\6\2\3\11\3\4\10\2\3\4\2\3\5\2\3\10\3\4\11\2"
  "\3\10\4\4\13\4\5\15\3\5\20\4\5\23\4\6\25\4\7\30\4\10\34\5\11\37\5\11\40\5"
  "\10\40\5\10\37\5\7\36\6\10\33\6\6\31\4\7\30\3\6\25\4\5\23\4\6\21\4\6\16\4"
  "\4\15\5\5\21\4\6\22\3\5\17\4\5\13\2\3\6\2\4\3\1\3\2\2\2\2\1\1\1\1\1\1\1\3"
  "\2\1\3\2\1\1\1\1\1\1\1\1\1\1\1\1\2\2\2\0\0\0\0\0\0\0\0\0\0\2\1\0\2\1\0\2"
  "\1\0\3\2\0\3\2\0\3\2\0\3\2\1\3\2\1\3\2\1\2\1\1\2\1\0\2\1\0\2\1\0\3\2\1\3"
  "\3\2\3\5\2\3\10\3\4\11\2\3\10\3\4\10\4\4\11\3\3\11\3\4\13\2\5\15\4\6\20\4"
  "\7\30\4\11\36\5\12\"\6\14'\7\14+\6\15.\6\15/\7\15""1\7\15""2\6\15""3\7\15"
  """0\6\14-\7\13)\6\12%\5\12\"\5\11\36\4\10\33\3\7\25\3\6\21\4\5\16\5\5\23"
  "\6\7\25\4\5\17\4\5\13\3\4\5\1\3\3\1\3\2\1\2\2\1\2\1\1\2\1\1\2\1\2\3\2\1\1"
  "\1\2\2\2\2\2\2\1\1\1\1\1\1\1\1\1\1\1\1\0\2\1\0\2\1\0\2\1\0\2\1\0\3\2\0\3"
  "\2\1\3\2\2\4\3\2\3\2\0\2\0\1\2\1\0\2\1\0\3\2\1\3\2\2\3\5\3\4\11\3\4\11\2"
  "\3\5\3\3\11\4\3\12\4\4\14\4\5\14\4\6\16\3\7\27\5\11!\6\13+\7\15""0\10\16"
  """3\10\16""7\10\17=\10\17?\7\17?\10\20@\10\20B\10\20C\10\20A\7\20?\7\17<"
  "\7\17""9\7\16""4\10\14/\6\13'\6\12!\5\7\32\4\7\24\4\4\22\6\7\24\3\10\26\4"
  "\6\20\3\4\12\2\3\5\1\3\3\1\3\2\0\2\1\0\3\1\1\3\2\1\2\2\2\2\2\1\1\1\2\2\2"
  "\2\2\2\2\1\2\1\1\1\1\1\1\1\2\1\1\2\1\0\2\1\0\3\2\0\3\2\1\3\2\1\2\4\2\3\3"
  "\1\2\1\1\2\1\1\2\1\0\3\2\0\3\2\2\3\4\2\4\7\3\4\12\2\3\7\3\4\11\3\4\12\4\3"
  "\12\4\4\15\4\6\23\5\10\32\5\12&\10\15""2\7\16""9\10\17>\10\17B\10\20G\11"
  "\22N\11\22Q\11\23W\11\25\\\11\24]\11\25Z\11\24V\12\22S\11\22S\10\22N\11\21"
  "K\11\20E\7\16""9\6\15""0\6\12'\6\11\35\5\6\31\4\5\22\3\10\30\4\7\27\4\4\16"
  "\3\3\10\1\3\5\0\3\1\0\2\1\0\2\1\1\2\2\1\2\2\1\2\1\2\2\2\2\2\2\1\1\1\1\1\1"
  "\0\0\0\2\2\2\1\2\1\0\2\1\0\3\2\0\3\2\0\3\2\1\2\3\1\2\6\2\3\4\1\1\1\1\1\1"
  "\1\2\2\1\3\2\1\3\3\3\3\7\3\4\12\3\3\10\4\4\11\3\4\13\4\5\13\4\5\16\4\6\22"
  "\4\11\37\6\13-\6\15""6\7\20A\7\21H\11\22N\10\23U\10\26`\10\27g\7\31o\6\32"
  "|\4\34\210\5\35\206\6\34z\10\30q\11\30n\10\31n\7\30i\10\27f\7\26a\10\23W"
  "\10\21I\11\16""9\7\14,\5\11\"\4\10\31\3\6\27\5\10\34\3\7\25\2\5\13\2\3\7"
  "\1\3\3\0\2\1\0\2\1\2\2\2\1\3\2\1\2\1\2\1\1\1\1\1\2\2\2\0\1\1\0\1\1\0\0\0"
  "\0\2\1\0\2\1\0\2\1\0\3\2\1\3\2\1\2\3\2\3\5\0\2\2\1\1\1\1\2\2\1\3\2\0\3\2"
  "\1\3\5\3\3\12\3\4\13\3\4\12\3\4\13\3\4\15\3\5\16\3\6\26\5\10!\6\14""1\6\17"
  "<\7\21G\10\23T\10\26^\6\30g\6\32p\4\34|\4\36\206\3\"\230\14H\275\21c\326"
  "\3""3\266\4$\235\4\40\222\4\40\215\4\37\216\4\37\213\5\40\212\5\35\206\5"
  "\33{\10\27i\11\22S\7\16@\6\14""0\5\11$\4\10\33\4\10\31\5\10\33\2\5\21\3\3"
  "\12\2\3\6\0\2\2\0\2\1\0\1\0\0\3\2\1\2\1\1\2\1\1\1\1\1\1\1\0\1\1\0\1\1\1\1"
  "\1\0\2\1\0\2\1\1\3\2\1\2\3\1\3\4\2\3\5\2\3\6\0\2\1\0\2\1\1\2\1\1\3\4\1\3"
  "\3\2\4\11\4\4\14\2\4\12\2\4\14\4\5\15\3\5\21\4\5\23\4\10\37\7\14""2\7\17"
  "A\10\22K\11\24Z\11\30i\10\32v\5\35\200\4\"\221\4#\230\3&\241\20K\276\225"
  "\345\373\322\377\377*x\336\5-\267\3+\254\3)\254\5)\256\4*\256\6*\256\3(\251"
  "\3%\234\4\36\212\7\32q\7\24V\10\17=\6\13.\5\11\40\5\6\30\6\10\35\5\6\27\4"
  "\4\16\2\3\11\1\3\4\0\3\2\0\2\1\0\3\1\1\3\2\0\3\2\1\2\1\1\2\1\1\1\1\1\1\1"
  "\0\0\0\0\2\1\1\3\2\1\3\2\2\3\4\2\2\4\2\3\5\2\2\4\0\2\1\1\2\1\0\2\1\1\2\7"
  "\2\3\10\3\4\12\3\5\15\2\4\13\2\6\20\2\5\21\3\7\26\4\11\35\5\14/\10\20C\10"
  "\22R\12\25]\7\30p\4\36\204\2\"\230\1'\252\1,\263\3,\262\2.\271\36f\327\276"
  "\377\377\344\377\377G\242\357\6""8\311\3""3\301\3""6\306\2""8\317\2>\326"
  "\3>\324\4""7\310\4""0\273\5(\250\5\"\221\7\32t\12\23T\7\17<\5\13,\5\10\40"
  "\5\11\40\5\10\35\3\6\21\3\4\12\2\3\6\1\2\4\0\3\1\0\2\1\1\3\2\0\2\1\0\2\1"
  "\1\2\1\1\2\2\0\0\0\0\0\0\0\3\2\0\3\2\1\3\2\2\3\3\2\3\7\2\3\7\1\2\3\1\2\1"
  "\2\2\2\1\3\2\2\3\7\3\4\11\3\4\14\2\5\14\4\4\15\3\5\20\3\7\24\4\10\32\5\13"
  ",\10\20D\11\23S\7\25^\6\31o\5\37\210\3'\246\4<\302$k\335\17R\332\2""7\310"
  "\2""6\307\31f\334\224\372\376\256\377\3775\232\357\3B\333\3@\331\5O\345\37"
  "x\360\16s\366\0\\\366\2O\354\2A\330\4""5\304\5*\255\6!\221\7\27n\10\22M\7"
  "\15""5\6\12'\5\10\37\5\11\40\3\7\26\4\4\15\3\4\10\2\3\4\1\3\2\1\2\1\1\3\2"
  "\0\2\1\0\2\1\1\2\1\1\1\1\1\1\1\1\1\1\0\2\2\0\3\2\0\3\3\2\3\5\2\3\7\2\3\7"
  "\1\3\2\1\3\2\2\2\2\2\3\3\2\3\7\3\4\13\3\5\16\2\4\14\3\5\20\4\5\22\4\7\31"
  "\5\11%\6\17=\10\23S\11\25a\7\30l\3\36\203\3'\243\5>\312\\\241\355\321\361"
  "\377e\256\364\6E\332\2>\323\16e\343B\354\374A\371\376\31\225\363\2K\351\1"
  "O\354/\206\366\275\361\376\230\337\375\23\222\374\2k\374\2W\364\2D\337\4"
  """4\304\4(\251\6\36\207\10\26b\10\20B\7\14""1\5\11$\6\12'\4\7\34\4\5\21\3"
  "\4\12\2\3\4\1\3\3\2\2\2\1\2\2\1\3\3\1\2\1\1\2\1\1\1\1\1\1\1\1\1\1\0\3\2\0"
  "\3\2\1\3\4\2\3\5\2\3\10\2\3\6\1\3\1\0\2\1\2\3\3\2\3\5\2\3\10\3\5\14\3\5\20"
  "\3\3\17\3\6\22\4\7\26\5\10\37\5\14.\11\23O\11\25`\6\30k\5\33}\6\"\230\3""5"
  "\3027\210\354\347\375\377\350\377\375U\256\363\5I\341\1D\334\16h\347/\327"
  "\372\35\322\373\22\220\364\2V\367\0Y\373)\214\371\330\376\375\371\377\375"
  "\213\342\375\4\214\373\2m\376\2T\364\3?\330\5""0\272\5$\233\6\31t\11\23P"
  "\7\16""9\6\12*\6\13*\5\11#\5\6\24\4\5\13\2\4\7\1\3\3\1\2\2\1\2\1\1\2\4\1"
  "\2\1\1\1\1\1\1\1\1\1\1\1\1\1\0\2\1\0\2\2\1\2\4\2\3\7\2\3\11\2\3\7\2\2\2\0"
  "\3\2\1\2\3\2\3\6\3\3\11\4\5\17\2\5\20\4\4\21\4\6\25\4\10\33\5\13%\5\15""8"
  "\10\26^\10\30k\5\32t\4\40\216\3*\262\6V\341\277\355\374\362\377\375\230\351"
  "\373\27q\357\0J\346\2J\347\15n\3575\327\371\"\323\373\23\227\372\1]\375\3"
  "`\376\3w\373a\311\372\346\377\375\367\377\377>\303\373\0}\377\1a\374\1I\350"
  "\4""7\310\3)\247\3\36\203\11\25_\10\17A\6\14/\5\13)\6\12)\4\7\30\4\5\15\3"
  "\3\10\1\3\4\1\2\2\0\2\1\1\3\4\1\3\2\1\2\1\1\1\1\1\1\1\1\1\1\0\3\2\1\3\4\2"
  "\3\5\2\3\7\3\4\11\3\3\7\2\2\2\1\3\2\1\3\4\2\3\7\4\3\12\4\5\17\2\6\21\3\6"
  "\21\5\6\27\4\10\36\5\13*\6\20E\11\30h\6\32q\5\35\203\3%\237\0""6\311H\237"
  "\362\375\377\377\314\367\3757\222\363\0O\356\2O\356\0T\366\20t\367N\337\367"
  "Q\346\370\"\246\367\2e\377\4d\377\0n\377\13\220\371\232\346\374\357\377\375"
  "\265\365\376\0\221\372\1l\375\1Q\361\3<\323\4,\260\4\37\215\7\26e\10\21H"
  "\6\16""5\6\13)\6\13.\4\7\33\4\5\16\4\3\12\3\3\7\0\3\3\1\2\1\1\2\4\1\3\2\0"
  "\2\1\1\3\1\1\1\1\2\2\2\1\3\3\2\3\5\2\3\5\2\3\7\3\4\11\3\3\7\2\2\2\1\3\2\1"
  "\3\4\3\3\10\4\4\12\4\5\17\2\6\21\5\6\23\4\7\31\5\11!\6\13.\10\22S\6\32p\6"
  "\34{\5\"\223\5+\262\0F\334\247\341\373\372\377\375\217\321\371\3_\361\0P"
  "\360\1T\366\2\\\376\30\205\372\246\370\374\333\377\377E\267\371\2o\375\1"
  "g\377\0m\377\0w\375G\277\373\324\372\375\353\377\375&\266\372\0u\377\1X\366"
  "\3B\330\5.\267\6!\225\10\30l\10\21L\6\16""7\5\13*\10\15""0\4\10\35\5\6\20"
  "\4\4\12\3\3\7\1\4\3\2\2\2\3\3\3\2\2\2\1\3\2\2\2\2\2\2\2\2\2\2\1\2\3\1\2\4"
  "\2\3\5\2\3\7\3\4\12\2\2\6\1\2\1\2\4\3\2\3\5\3\2\10\3\4\12\3\5\20\3\5\21\5"
  "\5\23\5\7\30\5\11!\5\14""1\7\25^\6\35|\5\36\206\4$\235\2.\275\4^\350\334"
  "\374\376\356\374\375[\254\366\0I\354\2N\355\1T\370\1b\377\36\224\372\306"
  "\372\373\345\377\373U\303\370\3t\375\3j\376\1k\376\0u\377\21\236\371\272"
  "\363\375\353\377\374\\\320\374\0|\376\1\\\371\2C\335\3""1\274\4#\232\7\31"
  "q\10\21N\6\16""8\5\12)\7\14.\5\10\35\5\5\20\4\5\13\3\3\7\1\3\3\1\2\2\1\3"
  "\2\0\2\2\0\3\2\1\2\2\1\1\1\1\1\1\0\3\2\1\3\3\2\3\6\2\3\10\3\5\12\2\3\6\1"
  "\2\1\1\3\3\2\2\6\2\3\11\4\5\12\3\5\21\3\6\21\5\6\24\4\7\31\5\12\"\5\14""4"
  "\7\27c\4\36\201\4\40\214\4%\244\0""1\305\24v\354\351\377\376\347\367\375"
  "A\226\364\0E\347\2I\347\1Q\363\1`\376!\225\372\332\375\375\355\377\375U\305"
  "\371\2u\376\2j\377\1j\376\1t\377\1\214\371\245\355\376\337\375\374|\334\374"
  "\0{\376\1\\\370\2B\334\4""0\272\4\"\227\7\31n\7\21N\7\15""8\5\12(\6\14+\4"
  "\10\34\5\5\17\4\4\12\2\3\7\2\3\3\1\2\1\1\3\2\1\3\2\0\2\1\0\1\1\2\2\2\1\1"
  "\1\1\3\2\1\3\3\2\3\6\3\4\11\2\3\11\2\3\7\1\3\2\1\2\2\2\3\5\2\4\10\4\5\12"
  "\3\5\21\3\6\22\5\6\26\3\7\32\5\11\"\7\14""4\7\27e\5\36\204\4\37\217\3%\246"
  "\1""0\305\24x\356\347\377\374\346\367\376>\225\364\0@\344\2D\340\0M\353\1"
  "Y\372\23\211\372p\363\372h\375\373$\267\371\3n\376\2e\377\1g\376\2p\377\2"
  "\207\372\242\354\376\327\375\374}\331\373\0u\375\1X\366\2?\330\4-\264\5!"
  "\221\7\27g\7\20J\6\15""6\5\12(\7\15-\4\7\34\5\5\20\3\4\13\2\3\7\2\2\3\0\3"
  "\1\1\3\3\1\3\2\1\2\2\2\2\2\1\1\1\2\2\2\1\3\2\2\3\4\2\3\6\2\3\7\2\4\12\1\4"
  "\7\0\2\1\2\3\2\2\3\5\2\3\10\3\4\13\3\5\17\3\6\23\5\5\25\3\7\31\5\10\"\6\14"
  """1\6\25\\\5\35\200\4\37\215\3&\243\3""0\301\10c\352\327\375\376\352\374"
  "\375V\250\363\0@\340\2B\336\1F\343\0Q\362\16{\372,\317\366\33\310\371\26"
  "\241\371\2c\376\2a\377\2g\377\0l\376\16\220\367\260\360\373\340\377\375g"
  "\306\373\0k\374\1P\356\3""9\315\4*\254\5\37\207\7\26^\7\20A\7\15""2\5\12"
  "&\6\13)\5\10\32\4\5\16\3\4\12\2\3\10\0\2\3\0\3\0\1\4\5\0\3\2\1\2\1\2\2\2"
  "\1\2\2\1\1\1\0\3\2\1\3\3\2\3\5\3\4\7\3\4\12\2\4\7\0\3\1\0\3\2\1\3\4\3\2\7"
  "\4\5\13\4\5\17\4\5\22\4\5\22\3\7\30\4\10\37\7\13-\6\23P\6\34z\5\36\212\3"
  "%\237\3/\273\0L\340\256\350\373\353\377\375\214\307\370\0K\337\1=\326\2@"
  "\332\1J\350\12g\365'\270\366\34\303\367\25\226\367\2Z\373\2[\376\1d\377\0"
  "i\376?\253\372\300\367\372\350\377\376/\246\370\0_\373\2G\343\4""4\301\3"
  "%\242\11\33}\7\23V\7\17;\5\14/\5\12%\5\13'\4\7\31\4\4\15\3\4\12\2\3\7\0\3"
  "\3\0\2\1\0\3\4\0\3\2\0\3\2\1\1\1\1\2\1\1\2\1\0\3\2\1\2\4\2\3\6\3\3\7\3\3"
  "\12\3\4\11\1\2\1\0\3\2\0\2\3\2\2\6\3\3\11\4\5\16\4\4\24\4\5\21\4\7\27\4\7"
  "\36\6\12*\7\17E\6\31s\5\36\206\2\"\232\2+\261\0;\322W\257\366\347\377\375"
  "\304\354\374'v\345\0""9\317\3:\320\1D\334\4R\361\37\210\366=\254\364\14c"
  "\360\1Q\363\1V\371\1_\376\6t\371\213\326\372\324\377\375\301\361\375\0x\370"
  "\0T\363\2=\322\4,\263\3!\223\12\27k\7\21J\6\15""5\5\13)\5\13%\5\12$\4\7\27"
  "\4\4\17\3\4\11\2\3\6\0\3\2\0\3\2\2\3\5\2\3\2\1\2\2\1\2\2\1\1\1\1\2\1\1\4"
  "\3\1\3\5\2\3\7\3\3\10\3\3\11\4\5\13\1\2\2\0\2\1\0\2\2\2\3\5\3\2\10\3\4\16"
  "\5\5\22\5\5\21\5\6\26\5\7\34\5\12&\5\15""8\7\27h\5\35\201\3!\222\4&\247\2"
  """3\302\15d\346\271\360\374\346\377\377\214\313\365\11P\326\2""4\312\3:\320"
  "\2D\343\0H\352\0C\343\0G\343\1K\352\0R\365\0`\373V\256\367\304\371\374\350"
  "\377\376P\256\367\0\\\371\1F\343\3""4\300\4&\242\6\34~\10\23X\7\16=\7\14"
  """0\6\12%\5\12%\5\10\40\3\6\24\3\5\15\3\3\7\2\3\6\1\4\3\0\3\2\2\3\6\1\3\2"
  "\2\2\2\2\2\1\2\2\2\2\2\2\0\3\2\1\3\4\2\3\7\3\4\11\3\4\11\3\5\14\2\2\5\0\2"
  "\1\1\3\2\1\3\4\3\3\7\3\4\13\5\5\21\4\5\22\4\6\24\4\7\32\5\10\"\6\14.\7\23"
  "T\6\33{\3\37\210\5\"\227\2*\255\2;\310@\224\360\325\377\376\331\377\375\205"
  "\302\363\4N\331\0""1\315\0""9\317\3=\326\3?\331\1B\336\0F\351\0W\362Z\253"
  "\366\301\364\373\341\377\376\224\326\371\7j\370\1I\347\3""7\310\4*\253\6"
  "\40\214\10\26f\10\21H\10\15""6\6\14+\5\10$\7\12%\5\7\35\3\6\20\3\5\14\3\3"
  "\10\1\3\5\0\3\3\1\3\2\1\2\5\1\3\3\0\3\2\1\2\1\2\2\2\1\1\1\0\3\2\1\3\2\2\3"
  "\5\3\4\10\3\4\7\3\4\13\4\5\12\0\2\1\1\3\2\2\3\3\2\3\5\3\4\10\4\4\20\3\6\22"
  "\4\5\22\4\7\30\5\11\35\5\13(\7\16>\7\27e\7\34z\6\36\207\3\"\232\3+\255\6"
  "@\312`\251\361\322\377\375\325\375\375\275\350\372R\231\352\10T\335\0@\332"
  "\0A\333\1T\3457\213\356\245\332\371\316\372\374\333\377\375\254\341\372\33"
  "s\363\2I\344\4""7\313\5+\255\4\"\224\10\31r\11\22Q\6\16;\6\13""0\5\12'\4"
  "\11\"\5\10\"\4\7\30\3\6\15\2\4\13\3\3\10\1\3\3\0\2\1\2\3\4\1\3\3\0\3\2\0"
  "\2\1\0\3\2\1\2\1\2\2\2\1\3\2\1\3\2\1\3\5\2\3\7\3\4\10\3\4\13\4\5\14\0\2\1"
  "\1\2\1\1\3\2\2\3\4\3\4\7\3\4\15\3\5\22\3\5\21\4\6\24\5\7\31\5\12!\6\12-\6"
  "\22I\11\30m\5\33t\5\35\202\4\"\227\2'\250\1""9\301_\235\350\307\364\373\323"
  "\375\373\335\377\376\334\375\376\277\355\372\270\353\371\321\371\376\323"
  "\377\375\307\375\372\324\375\376\246\324\367\33f\347\0?\326\2""7\302\5+\260"
  "\3\"\225\6\33w\10\24W\7\16>\6\15""2\6\13(\5\11#\5\12!\5\10\34\5\5\23\3\6"
  "\15\3\4\12\2\3\7\1\4\3\1\3\2\1\3\4\1\3\2\0\3\2\2\2\1\2\2\2\1\1\1\1\1\1\1"
  "\3\2\1\3\3\2\3\5\2\3\5\3\4\10\3\4\12\3\4\13\2\3\5\0\2\2\0\3\2\1\2\3\2\3\6"
  "\3\4\12\4\6\21\3\6\21\5\5\22\4\6\30\4\10\34\5\11$\5\14""1\10\23Q\11\30k\6"
  "\31r\6\34\200\4\37\214\3\"\231\0&\257,d\320\230\304\356\276\353\367\312\364"
  "\374\316\372\374\314\373\374\310\367\372\303\357\370\262\335\365a\231\346"
  "\2F\321\1""1\300\5-\262\4%\236\4\40\213\6\33u\11\24Z\10\17B\7\15""4\6\13"
  "+\6\11$\4\10\36\5\11\40\3\7\30\4\6\17\4\4\14\3\4\11\2\3\5\1\3\2\2\3\2\1\4"
  "\4\1\3\2\0\3\2\1\3\2\2\2\2\2\2\2\1\1\1\1\3\3\1\3\3\2\4\3\2\3\6\3\3\11\3\4"
  "\11\3\4\12\3\4\11\0\2\1\0\3\1\0\2\2\2\3\5\2\3\10\3\4\14\3\6\21\4\5\23\5\6"
  "\24\4\7\25\4\10\34\5\11$\6\14""3\10\22P\7\27i\5\32s\6\32t\6\33~\5\36\210"
  "\0\35\226\0$\253!S\303R\177\327i\225\334l\231\334^\214\334<k\316\3""9\276"
  "\0&\261\2&\246\3$\235\3!\220\5\35|\10\30g\10\22Q\10\16=\7\14""0\5\12&\5\11"
  "\"\4\10\35\4\10\34\4\10\31\3\6\23\3\5\14\3\4\11\3\4\6\1\3\4\1\3\3\2\3\5\2"
  "\3\2\1\3\2\1\3\2\0\3\2\1\2\2\2\2\2\2\2\2\2\3\3\2\3\2\2\2\4\2\3\5\2\3\11\3"
  "\3\10\3\4\12\3\4\12\1\3\3\0\2\2\0\2\1\0\3\4\2\3\10\3\4\11\4\5\17\4\6\24\4"
  "\4\17\5\6\25\3\6\26\5\10\33\5\11#\5\14""0\6\22L\10\26a\10\30i\6\30i\7\31"
  "m\7\32v\5\35\202\1\34\216\0\36\231\0\36\236\0\37\236\0\36\234\0\35\225\4"
  "\36\216\5\37\206\6\35\200\6\32w\10\27k\10\25Z\10\20E\10\15""5\6\13+\5\11"
  "$\5\10\36\5\10\33\4\7\31\5\11\33\4\7\24\4\5\15\3\4\12\3\3\11\2\3\4\1\3\3"
  "\0\3\4\2\3\6\2\3\4\2\2\2\3\2\2\1\2\2\0\2\1\1\2\1\1\1\1\1\2\1\1\2\1\1\3\2"
  "\2\3\3\2\3\6\2\3\7\3\3\11\4\4\12\2\3\7\0\2\1\0\2\1\0\2\2\1\3\5\3\3\7\3\4"
  "\13\4\5\23\4\5\21\3\4\20\4\5\22\4\7\24\4\7\32\5\11\"\4\13+\5\17?\7\23R\11"
  "\25Z\11\25^\7\25d\7\31m\6\31v\5\33z\6\33{\6\34z\6\33y\6\32v\7\30p\7\27h\10"
  "\24]\10\23V\10\21I\7\16<\5\14-\6\12%\5\10\36\4\7\33\3\7\27\3\6\27\4\10\32"
  "\4\7\25\4\5\16\4\3\13\2\3\11\2\3\6\2\3\5\0\3\2\1\3\4\1\3\5\1\3\3\0\3\2\2"
  "\2\2\1\2\1\1\2\1\1\2\1\1\2\1\0\3\1\0\2\1\0\2\1\1\3\2\1\2\4\2\3\10\2\3\10"
  "\3\4\11\3\3\13\1\3\3\1\2\0\1\3\2\1\2\1\1\3\5\3\3\7\4\4\16\3\6\21\5\5\21\4"
  "\4\20\3\7\22\3\6\22\3\7\26\4\10\33\4\11%\5\14.\7\16>\10\21I\10\23R\7\24Z"
  "\7\24b\11\27g\10\27h\11\26d\10\25c\7\25^\10\22X\11\21M\10\20B\6\15""6\5\14"
  "+\5\11&\5\10\36\4\7\32\4\10\27\3\7\23\2\7\24\4\7\32\3\7\26\4\4\17\4\5\13"
  "\3\3\12\2\3\6\1\2\4\1\3\3\1\3\3\1\2\5\1\3\3\1\3\2\1\3\2\1\3\2\0\2\1\1\2\2"
  "\1\2\1\1\2\1\0\2\1\0\3\2\0\2\1\0\4\2\1\3\3\2\3\5\2\3\6\3\4\11\2\5\12\2\4"
  "\10\1\2\2\1\2\2\1\3\2\0\3\3\3\3\5\3\4\10\2\5\15\4\4\21\3\6\22\2\5\20\2\7"
  "\21\4\5\22\5\6\30\5\7\32\5\10\37\5\12#\5\13+\6\14""5\10\16?\10\20I\11\22"
  "N\10\22P\12\22N\7\22I\7\21@\7\16:\6\14""1\5\13(\5\11#\4\10\35\4\7\33\4\7"
  "\27\4\7\24\5\5\22\4\5\22\5\10\26\4\6\24\3\6\16\4\4\14\3\4\10\2\3\5\2\3\4"
  "\1\4\4\1\3\2\2\3\3\2\3\4\0\3\2\1\2\3\2\3\2\1\3\2\0\2\1\0\2\1\0\2\1\1\2\1"
  "\1\2\1\0\3\2\0\3\2\1\4\2\1\2\3\1\2\5\2\3\5\2\3\11\2\3\10\4\5\14\2\2\6\2\2"
  "\2\1\2\1\0\3\2\1\4\4\3\3\7\2\4\12\4\5\16\2\6\22\3\6\21\2\4\17\4\4\21\4\5"
  "\22\5\6\22\3\7\23\4\7\31\4\7\32\4\10\35\5\10!\5\12'\4\13(\6\13+\6\12*\5\11"
  "'\5\12$\5\11!\5\10\35\5\7\31\5\10\27\3\7\25\3\7\23\3\5\21\4\4\20\4\5\16\4"
  "\6\22\3\5\22\3\4\16\3\4\12\3\3\10\2\3\5\2\3\5\1\3\2\0\3\2\1\3\3\2\4\4\2\3"
  "\3\1\3\2\1\2\3\1\3\2\0\2\1\1\2\1\1\1\1\1\2\1\1\2\1\1\2\1\0\2\1\0\2\1\0\3"
  "\2\1\4\4\1\2\4\2\3\5\2\3\6\2\3\10\3\4\12\3\6\15\1\2\4\1\2\1\0\3\2\0\3\3\1"
  "\3\5\3\4\10\3\3\10\4\4\14\4\6\21\4\6\20\4\4\14\4\4\15\4\6\16\4\5\22\4\5\23"
  "\4\5\23\3\7\24\3\7\26\4\7\31\4\6\31\5\10\33\4\10\31\4\7\27\4\7\26\4\7\26"
  "\4\7\26\4\6\24\3\6\22\2\6\21\2\5\17\2\5\20\4\5\20\5\6\21\3\5\17\2\5\14\3"
  "\4\12\3\3\7\2\3\7\2\3\4\1\3\2\0\3\2\0\3\3\2\3\5\2\3\4\2\4\3\1\3\2\0\3\2\0"
  "\3\2\0\3\2\1\2\1\2\2\2\1\1\1\1\2\1",
};

