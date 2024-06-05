#include <Adafruit_CircuitPlayground.h>
#include <AsyncDelay.h>
float X, Y, Z, jumpLevel;

//bool leftButtonPressed;
//bool rightButtonPressed;
//AsyncDelay_jump;
//AsyncDelay_duck;


void setup()
{
Serial.begin(9600);
CircuitPlayground.begin();


//attachInterrupt(digitalPinToInterrupt(slidePin), switchISR, CHANGE);// pintointerrupt(interruptPin), blink, Rising);
//attachInterrupt(digitalPinToInterrupt(leftButtonPress), buttISR, CHANGE);
//attachInterrupt(digitalPinToInterrupt(rightButtonPress), buttISR, CHANGE);
//CircuitPlayground.slideSwitch();
//gameTimer.start(3000, AsyncDelay::MILLIS);
// include jumpTimer
//lightString = (1,2,3,4)
//lightSpeed = slow=, med=, fast= in ms)
//  slow =
//  med =
//  fast = 
}

void loop()
{
  X = 0;
  Y = 0;
  Z = 0;
  for (int i=0; i<10; i++) {
    X += CircuitPlayground.motionX();
    Y += CircuitPlayground.motionY();
    Z += CircuitPlayground.motionZ();
    delay(1);
  }
  X /= 10;
  Y /= 10;
  Z /= 10;

  jumpLevel = sqrt(X*X + Y*Y + Z*Z);

  Serial.println(jumpLevel);

  if (jumpLevel > 14)
    {
      CircuitPlayground.setPixelColor(9, 255, 255, 255);//white
      Serial.begin(9600);
    }

  //if delay_jump is expired, 
  //if (switchFlag=TRUE)
  //{
    //lightString = 1
    //lightSpeed = slow
  //}
  //else

// primary game element
  //if digitalRead(LED8) // if LED8 is on
  //{
    //jumpTimer.start(400, AsyncDelay::MILLIS);
  //}
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
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(3, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(4, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(5, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(6, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(7, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        CircuitPlayground.setPixelColor(8, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(8, 255, 0, 0);
        CircuitPlayground.setPixelColor(1, 255, 255, 0);
        CircuitPlayground.setPixelColor(2, 255, 255, 0);
        CircuitPlayground.setPixelColor(3, 255, 255, 0);
        CircuitPlayground.setPixelColor(4, 255, 255, 0);
        CircuitPlayground.setPixelColor(5, 255, 255, 0);
        CircuitPlayground.setPixelColor(6, 255, 255, 0);
        CircuitPlayground.setPixelColor(7, 255, 255, 0);
        CircuitPlayground.setPixelColor(0, 255, 255, 0);
        delay(300);
        CircuitPlayground.clearPixels();

        CircuitPlayground.setPixelColor(0, 255, 0, 0);
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



        //if jump pushed, read LED9,
          // nested if readLED9= High, restart game timer
      


}
