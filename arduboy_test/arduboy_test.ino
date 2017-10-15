// William Tam (WillHTam)
// October 16, 2017
// Basic Test

// Load in Arduboy Library
#include <Arduboy.h>
Arduboy arduboy;
void setup() {
  // put your setup code here, to run once when Arduboy turns on
  // semicolons required for C++
  // Tells Arduboy to turn on
  arduboy.begin();
  // Erases everything on screen
  arduboy.clear();
  // Write this text
  arduboy.print("Hello");
  // Refresh the screen and display
  arduboy.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
