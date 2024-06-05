#include <Adafruit_CircuitPlayground.h>

float X, Y, Z, forceLevel;
 
void setup()
{
  Serial.begin(9600);

  CircuitPlayground.begin();
  CircuitPlayground.setAccelRange(LIS3DH_RANGE_8_G);
}

void loop()
{
  // OrangeRed ref: https://www.webmonkey.com/color-codes/
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(0, 255, 69, 0); // OrangeRed
  CircuitPlayground.setPixelColor(1, 255, 69, 0);
  CircuitPlayground.setPixelColor(2, 255, 69, 0);
  CircuitPlayground.setPixelColor(3, 255, 69, 0);
  CircuitPlayground.setPixelColor(4, 255, 69, 0);
  CircuitPlayground.setPixelColor(5, 255, 69, 0);    
  CircuitPlayground.setPixelColor(6, 255, 69, 0);
  CircuitPlayground.setPixelColor(7, 255, 69, 0);
  CircuitPlayground.setPixelColor(8, 255, 69, 0);
  CircuitPlayground.setPixelColor(9, 255, 69, 0);


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

  forceLevel = sqrt(X*X + Y*Y + Z*Z);

  Serial.println(forceLevel);



  if (forceLevel > 10)
    CircuitPlayground.setBrightness(40);
  else if (forceLevel >20)
    CircuitPlayground.setBrightness(80);
  else
    CircuitPlayground.setBrightness(10);

delay(50);
}
