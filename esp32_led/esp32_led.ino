#include <Adafruit_NeoPixel.h>
#include <RTClib.h>
#include <Wire.h>

#define PIN 1
#define I2C_SDA 6
#define I2C_SCL 7
// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(20, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 300 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

/*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 *
 * For more detail (instruction and wiring diagram), visit https://esp32io.com/tutorials/esp32-rtc
 */


TwoWire I2CRTC = TwoWire(0);
RTC_DS3231 rtc;


char daysOfWeek[7][12] = {
  "Sunday",
  "Monday",
  "Tuesday",
  "Wednesday",
  "Thursday",
  "Friday",
  "Saturday"
};

// void setup () {
//   Serial.begin(9600);
//   Serial.println(F("RTC test"));
//   Serial.println(F("RTC test"));
//   Serial.println(F("RTC test"));
//   Serial.println(F("RTC test"));
//   Serial.println(F("RTC test"));
//   Serial.println(F("RTC test"));
//   I2CRTC.begin(I2C_SDA, I2C_SCL, 100000);

//   Serial.print("ESP32 RTC Date Time: ");

//   // bool status;
//   // default settings
//   // (you can also pass in a Wire library object like &Wire2)
//   // status = rtc.begin(0x37, &I2CRTC);  
//   // Wire.begin(I2C_SDA, I2C_SCL);  
//   // SETUP RTC MODULE
//   if (! rtc.begin(&I2CRTC)) {
//     Serial.println("RTC module is NOT found");
//     Serial.flush();
//     while (1);
//   }

//   // automatically sets the RTC to the date & time on PC this sketch was compiled
//   rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

//   // manually sets the RTC with an explicit date & time, for example to set
//   // January 21, 2021 at 3am you would call:
//   // rtc.adjust(DateTime(2021, 1, 21, 3, 0, 0));
// }

// void loop () {
//   DateTime now = rtc.now();
//   Serial.print("ESP32 RTC Date Time: ");
//   Serial.print(now.year(), DEC);
//   Serial.print('/');
//   Serial.print(now.month(), DEC);
//   Serial.print('/');
//   Serial.print(now.day(), DEC);
//   Serial.print(" (");
//   Serial.print(daysOfWeek[now.dayOfTheWeek()]);
//   Serial.print(") ");
//   Serial.print(now.hour(), DEC);
//   Serial.print(':');
//   Serial.print(now.minute(), DEC);
//   Serial.print(':');
//   Serial.println(now.second(), DEC);

//   delay(1000); // delay 1 seconds
// }


void setup() {
  Serial.begin(115200);
  while(!Serial);
  Serial.println("Test");
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  strip.setBrightness(64);

  I2CRTC.begin(I2C_SDA, I2C_SCL);

  Serial.println("ESP32 RTC Date Time: ");
  if (! rtc.begin(&I2CRTC)) {
    Serial.println("RTC module is NOT found");
    Serial.flush();
    // while (1);
  }

  // automatically sets the RTC to the date & time on PC this sketch was compiled
  // rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));

  // manually sets the RTC with an explicit date & time, for example to set
  // January 21, 2021 at 3am you would call:
  // rtc.adjust(DateTime(2021, 1, 21, 3, 0, 0));
}

void loop() {
  strip.setPixelColor(0, 255, 0, 0);
  strip.setPixelColor(1, 255, 0, 0);
  strip.setPixelColor(2, 255, 0, 0);
  strip.setPixelColor(3, 255, 0, 0);
  strip.setPixelColor(4, 255, 0, 0);
  strip.setPixelColor(5, 255, 0, 0);
  strip.setPixelColor(6, 255, 0, 0);
  strip.setPixelColor(7, 255, 0, 0);
  strip.setPixelColor(8, 255, 0, 0);
  strip.setPixelColor(9, 255, 0, 0);
  strip.setPixelColor(10, 255, 0, 0);
  strip.setPixelColor(11, 255, 0, 0);
  strip.setPixelColor(12, 255, 0, 0);
  strip.setPixelColor(13, 255, 0, 0);
  strip.setPixelColor(14, 255, 0, 0);
  strip.setPixelColor(15, 255, 0, 0);
  strip.setPixelColor(16, 255, 0, 0);
  strip.setPixelColor(17, 255, 0, 0);
  strip.setPixelColor(18, 255, 0, 0);
  strip.setPixelColor(19, 255, 0, 0);
  strip.show();

  delay(2000); // delay 1 seconds
  
  strip.setPixelColor(0, 0, 255, 0);
  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 0, 255, 0);
  strip.setPixelColor(3, 0, 255, 0);
  strip.setPixelColor(4, 0, 255, 0);
  strip.setPixelColor(5, 0, 255, 0);
  strip.setPixelColor(6, 0, 255, 0);
  strip.setPixelColor(7, 0, 255, 0);
  strip.setPixelColor(8, 0, 255, 0);
  strip.setPixelColor(9, 0, 255, 0);
  strip.setPixelColor(10, 0, 255, 0);
  strip.setPixelColor(11, 0, 255, 0);
  strip.setPixelColor(12, 0, 255, 0);
  strip.setPixelColor(13, 0, 255, 0);
  strip.setPixelColor(14, 0, 255, 0);
  strip.setPixelColor(15, 0, 255, 0);
  strip.setPixelColor(16, 0, 255, 0);
  strip.setPixelColor(17, 0, 255, 0);
  strip.setPixelColor(18, 0, 255, 0);
  strip.setPixelColor(19, 0, 255, 0);
  strip.show();

  delay(2000); // delay 1 seconds

  strip.setPixelColor(0, 0, 0, 255);
  strip.setPixelColor(1, 0, 0, 255);
  strip.setPixelColor(2, 0, 0, 255);
  strip.setPixelColor(3, 0, 0, 255);
  strip.setPixelColor(4, 0, 0, 255);
  strip.setPixelColor(5, 0, 0, 255);
  strip.setPixelColor(6, 0, 0, 255);
  strip.setPixelColor(7, 0, 0, 255);
  strip.setPixelColor(8, 0, 0, 255);
  strip.setPixelColor(9, 0, 0, 255);
  strip.setPixelColor(10, 0, 0, 255);
  strip.setPixelColor(11, 0, 0, 255);
  strip.setPixelColor(12, 0, 0, 255);
  strip.setPixelColor(13, 0, 0, 255);
  strip.setPixelColor(14, 0, 0, 255);
  strip.setPixelColor(15, 0, 0, 255);
  strip.setPixelColor(16, 0, 0, 255);
  strip.setPixelColor(17, 0, 0, 255);
  strip.setPixelColor(18, 0, 0, 255);
  strip.setPixelColor(19, 0, 0, 255);
  strip.show();  
  
  delay(2000); // delay 1 seconds

  DateTime now = rtc.now();
  Serial.print("ESP32 RTC Date Time: ");
  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" (");
  Serial.print(daysOfWeek[now.dayOfTheWeek()]);
  Serial.print(") ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.println(now.second(), DEC);
}



// #include <FastLED.h>

// #define LED_PIN     0
// #define NUM_LEDS    10

// CRGB leds[NUM_LEDS];

// void setup() {

//   FastLED.addLeds<SK6812, LED_PIN, GRB>(leds, NUM_LEDS);
  
// }

// void loop() {
  
//   leds[0] = CRGB(255, 0, 0);
//   FastLED.show();
//   delay(500);  
//   leds[1] = CRGB(0, 255, 0);
//   FastLED.show();
//   delay(500);
//   leds[2] = CRGB(0, 0, 255);
//   FastLED.show();
//   delay(500);  
//   leds[3] = CRGB(255, 0, 0);
//   FastLED.show();
//   delay(500);
//   leds[4] = CRGB(0, 255, 0);
//   FastLED.show();
//   delay(500);  
//   leds[5] = CRGB(0, 0, 255);
//   FastLED.show();
//   delay(500);
//   leds[6] = CRGB(255, 0, 0);
//   FastLED.show();
//   delay(500);
//   leds[7] = CRGB(0, 255, 0);
//   FastLED.show();
//   delay(500);  
//   leds[8] = CRGB(0, 0, 255);
//   FastLED.show();
//   delay(500);
//   leds[9] = CRGB(255, 0, 0);
//   FastLED.show();
//   delay(500);  
// }

// #define LED_BUILTIN 8
// char myData[20];

// void setup() 
// {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() 
// {
//   digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
//   delay(1000);                       // wait for a second
//   digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
//   delay(1000);    
//   byte n = Serial.available();
//   if (n != 0)
//   {
//     byte m = Serial.readBytesUntil('\n', myData, sizeof (myData)-1);
//     myData[m] = '\0';
//     Serial.println(myData);
//   }
//   Serial.println("Hello");
// }
