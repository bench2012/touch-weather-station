# Touch Colour Weather Station  

This is based on the work of the excellence work of Daniel Eichhorn (squix78)'s esp8266-weather-station-color project and Adafruit's ESP8266 WiFi Weather Station with Color TFT Display project.

I change the code so that the touch is provided by TJCTM24024-SPI's touch controller, which is a XPT2046 based controller. I modified Adafruit's code to use the XPT2046 for touch and T_IRQ for touch detection. The XPT2046 library can be found in:

https://github.com/spapadim/XPT2046

More information on connecting the TJCTM24024-SPI to the ESP8266 can be found in:

http://nailbuster.com/?page_id=341

This is a WIP, so watch for updates.

Bench2012
