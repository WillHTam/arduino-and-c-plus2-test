// WillHTam

#include <Arduboy.h>
//Initialize the arduboy object
Arduboy arduboy;
//Initialize counter variable
int counter;
//The setup() function runs once when you turn your Arduboy on
void setup() {
  //Start the Arduboy properly and display the Arduboy logo
  arduboy.begin();
  //Get rid of the Arduboy logo and clear the screen
  arduboy.clear();
  //Assign our counter variable to be equal to 0
  counter = 0;
}
//The loop() function repeats forever after setup() is done
void loop() {
  //Clear whatever is printed on the screen
  arduboy.clear();
  // Increment if Up_button is pressed
  if( arduboy.pressed(UP_BUTTON) == true) {
    counter = counter + 1;  
  }
  // Decrease if Down_button pressed
   if( arduboy.pressed(DOWN_BUTTON) == true) {
    counter = counter - 1;  
  }
  // Check if counter equals 69
  if ( counter == 69 ) {
      arduboy.setCursor(64, 32);
      arduboy.print("Aww Yeahh");
    }
  //Move the cursor back to the top-left of the screen
  arduboy.setCursor(0, 0);
  //Print out the value of counter
  arduboy.print(counter);
  //Refresh the screen to show whatever's printed to it
  arduboy.display();
}

