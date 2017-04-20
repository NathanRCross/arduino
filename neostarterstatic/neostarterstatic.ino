// RGBW (Red Green Blue White Neo-Pixel starter code
// 16 LEDS with no loop inside of void loop()


#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 6

#define NUM_LEDS 16

#define BRIGHTNESS 50

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRBW + NEO_KHZ800);


void setup() {
  Serial.begin(115200);
  strip.setBrightness(BRIGHTNESS);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

// Initialize some variables for the void loop()
int led, red, green, blue, white;
int wait = 100;

void loop() {

  led = 0; red = 255; green = 0; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  
  led = 1; red = 0; green = 255; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
     
  led = 2; red = 0; green = 0; blue = 255; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  
  led = 3; red = 0; green = 0; blue = 0; white = 250; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
  
  led = 4; red = 40; green = 40; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

  led = 5; red = 40; green = 40; blue = 40; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
 
  led = 6; red = 255; green = 255; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 7; red = 255; green = 0; blue = 255; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 8; red = 0; green = 255; blue = 230; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 9; red = 255; green = 128; blue = 0; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 10; red = 0; green = 255; blue = 50; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();

    led = 11; red = 0; green = 0; blue = 255; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
    led = 12; red = 100; green = 0; blue = 255; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
    led = 13; red = 0; green = 16; blue = 8; white = 10; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
   strip.show();
   
   led = 14; red = 10; green = 128; blue = 25; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);  
   strip.show();
  
  led = 15; red = 25; green = 10; blue = 50; white = 0; 
  strip.setPixelColor(led, red, green , blue, white);
  delay(wait);
  strip.show();
   
   
}


