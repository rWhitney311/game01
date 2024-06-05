#include <Adafruit_CircuitPlayground.h>
#include <AsyncDelay.h>

void setup()
{
Serial.begin(9600)
CircuitPlayground.begin();
attachInterrupt(digitalPinToInterrupt(7), blink, CHANGE);
CircuitPlayground.slideSwitch();
gameTimer.start(3000, AsyncDelay::MILLIS);
// include jumpTimer
lightString = (1,2,3,4)
lightSpeed = slow=, med=, fast= in ms)
  slow =
  med =
  fast = 
}

void loop()
{
  if (switchFlag=TRUE)
  {
    lightString = 1
    lightSpeed = slow
  }
  else
  {

  }

// primary game element
  if digitalRead(LED8) // if LED8 is on
  {
    jumpTimer.start(400, AsyncDelay::MILLIS);
  }
}
