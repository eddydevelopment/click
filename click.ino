#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(45);  // initially set the servo to 45 degrees
}

void loop() {
  for (int i = 0; i < 100; i++) { // Loop to perform click 100 times
    click();
    delay(100);  // Delay between each click, adjust as needed for observation
  }
  while(true) { // Infinite loop to stop further actions after 100 clicks
    delay(1000); // Just a delay to keep the loop active
  }
}

// Define the click function
void click() {
  // Move from 45 degrees to 30 degrees
  for (int pos = 45; pos >= 30; pos -= 1) {
    myservo.write(pos);
    delay(5);  // Adjust delay to control speed of movement
  }
  // Return to 45 degrees
  for (int pos = 30; pos <= 45; pos += 1) {
    myservo.write(pos);
    delay(5);  // Adjust delay to control speed of movement
  }
}
