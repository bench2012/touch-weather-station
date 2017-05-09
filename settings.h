/**The MIT License (MIT)
Copyright (c) 2015 by Daniel Eichhorn
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
See more at http://blog.squix.ch
*/

// Setup
const int UPDATE_INTERVAL_SECS = 10 * 60;  // Update every 10 minutes
boolean USE_TOUCHSCREEN_WAKE = true;       // use the touchscreen to wake up, ~90mA current draw
boolean DEEP_SLEEP = true;                 // use the touchscreen for deep sleep, ~10mA current draw but doesnt work
int     AWAKE_TIME = 10;                   // how many seconds to stay 'awake' before going back to zzz

// Pins for the ILI9341
#define TFT_DC 2
#define TFT_CS 15

// pins for the touchscreen
//#define STMPE_CS 4
#define STMPE_IRQ 5
#define LED_CTR D3

// For the Esp connection of touch
#define TFT_DC 2
#define TFT_CS 15
XPT2046 touch(/*cs=*/ 4, /*irq=*/ 5);

// TimeClient settings
const float UTC_OFFSET = 8;

// Wunderground Settings
const boolean IS_METRIC = true;
const String WUNDERGRROUND_API_KEY = "1e0e8ad07e605f06";
const String WUNDERGRROUND_LANGUAGE = "EN";
const String WUNDERGROUND_COUNTRY = "HongKong";
const String WUNDERGROUND_CITY = "HongKong";

//Thingspeak Settings
const String THINGSPEAK_CHANNEL_ID = "67284";
const String THINGSPEAK_API_READ_KEY = "L2VIW20QVNZJBLAK";

// List, so that the downloader knows what to fetch
String wundergroundIcons [] = {"chanceflurries","chancerain","chancesleet","chancesnow","clear","cloudy","flurries","fog","hazy","mostlycloudy","mostlysunny","partlycloudy","partlysunny","rain","sleet","snow","sunny","tstorms","unknown"};

/***************************
 * End Settings
 **************************/

