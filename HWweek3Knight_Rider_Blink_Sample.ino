/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// HOMEWORK: 
// Have each light turn on and off in sequence from left to right then back (For example: https://thumbs.gfycat.com/CarefreeCluelessJoey-size_restricted.gif)
// there is an error in the code! After you set it up, compile the code and try to figure out where to adjust your code for your sequence to be complete
// Add code to Github
// Record a video of your light sequence

int pinArray[] = {2, 3, 4, 5, 6, 7};
int count = 0;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
for (count=0;count<8;count++) {
    pinMode(pinArray[count], OUTPUT);
  }
  
}

// the loop function runs over and over again forever
void loop() {
  
  for(count=0;count<8;count++){
  digitalWrite(count, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for half a second
  digitalWrite(count, LOW);    // turn the LED off by making the voltage LOW
                   // wait for half a second
}
}
