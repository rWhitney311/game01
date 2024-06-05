# jumpLight game

## about the game

Game objective:

  A single red or string of red LEDs circles around the CPX.  You are LED 0 and the only LED      not lit up.  The 'empy space' between you and the red string are LEDs that are lit up white.
  As the LED string approaches, you must 'long jump' or 'duck' to avoid it until it has passed.

Strategy:

  Time your jump or duck so that you avoid the LED string before it reaches you
  and so that you 'land' after the LED string has passed you.
  Later levels will have the LED string pass over/under you at close to the same speed as your    jump duration.
  It is beneficial to use duck instead of jump when you can because your 'hang-time' from         jumping may be too long to react to the next levels LED string if it happens to be too fast.

Level difficulty:

  Difficulty is increased each level by a varying number of LEDs in the string and by speed.
  
  - number of LEDs in string ranges from 1 to 4 LEDs in a row
  - speed of LED string moving around the CPX has 3 settings: Slow, Med, and Fast
        
User inputs:

  - left button = long jump (400ms)
  - right button = duck (200ms)
  - switch = reset game to level 1
