#include <BraccioRobot.h>
#include <Servo.h>

Position pos;

void setup() {
  // Initialise the Braccio robot
  BraccioRobot.init();

  // Initialise serial communication
  Serial.begin(9600);

  // User input prompt
  Serial.println("Enter First num: ");
}

void loop() {
  // Check if there's input available
  if (Serial.available() > 0) {
    String firstNum = Serial.readStringUntil('\n');
    firstNum.trim(); // Remove any whitespace
    
    Serial.println("Select the operation (+, -, *, /):"); // Step 2: Wait for the operation 
    while (Serial.available() == 0) {} // Wait for user input 

    char operation = Serial.readStringUntil('\n')[0];

    Serial.println("Enter the second number:");  
    while (Serial.available() == 0) {} // Wait for user input 

    String secondNum = Serial.readStringUntil('\n');
    secondNum.trim(); 
    
    // Print the captured values
    Serial.println(firstNum);
    Serial.println(operation);
    Serial.println(secondNum);
    Serial.println("Enter First num: ");
  }
}
