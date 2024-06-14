#include <Adafruit_CircuitPlayground.h>
#include <AsyncDelay.h>
#include <Wire.h>
#include <SPI.h>

const uint8_t spREADY[] PROGMEM = {0x6A,0xB4,0xD9,0x25,0x4A,0xE5,0xDB,0xD9,0x8D,0xB1,0xB2,0x45,0x9A,0xF6,0xD8,0x9F,0xAE,0x26,0xD7,0x30,0xED,0x72,0xDA,0x9E,0xCD,0x9C,0x6D,0xC9,0x6D,0x76,0xED,0xFA,0xE1,0x93,0x8D,0xAD,0x51,0x1F,0xC7,0xD8,0x13,0x8B,0x5A,0x3F,0x99,0x4B,0x39,0x7A,0x13,0xE2,0xE8,0x3B,0xF5,0xCA,0x77,0x7E,0xC2,0xDB,0x2B,0x8A,0xC7,0xD6,0xFA,0x7F,};

int buttA = 4;
int buttB = 5;

const int ledPin = 13;
int buttonPushCounter = 0;
int buttonAState = 0; // current state of A button
int buttonBState = 0; // current state of B button
int lastButtonAState = 0;
int lastButtonBState = 0;

void setup()
{
Serial.begin(9600);
CircuitPlayground.begin();
//startMillis = millis();
  pinMode(buttA, INPUT_PULLDOWN);
  pinMode(buttB, INPUT_PULLDOWN);
  pinMode(ledPin, OUTPUT);

  attachInterrupt(
    digitalPinToInterrupt(buttA),[]()
    {
      Serial.println("Start");
    },
    RISING);
  attachInterrupt(digitalPinToInterrupt(buttB),[]()
    {
      Serial.println("JUMP!");
      delay(10);
      CircuitPlayground.setPixelColor(9, 255, 255, 255);//white
    },
    RISING);
}

void loop()
{
  buttonAState = digitalRead(buttA);
    // compare current to previous button state
  if (buttonAState != lastButtonAState)
    {
    // if the state has changed, add one to counter
    if (buttonAState == HIGH)
    {
      buttonPushCounter++;
      Serial.println("Get ready to jump...");
      Serial.print("Advance to Level: ");
      Serial.println(buttonPushCounter);
      CircuitPlayground.speaker.say(spREADY);
      
    }
    else
    {
      Serial.println("off");
    }
    // bounce delay
    delay(10);

    if (buttonPushCounter >= 3)
      { 
        //fast speed
        CircuitPlayground.setPixelColor(0, 255, 0, 0); // set LEDs to red
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        delay (600);
      }
      
      else
      //slow speed
      {
        CircuitPlayground.setPixelColor(0, 255, 0, 0); // set LEDs to red
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(1, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(2, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        delay(600);
        CircuitPlayground.clearPixels();
      }
    } 
}
