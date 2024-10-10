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
    inputParse(firstNum);
    // Print the captured values
    Serial.println(firstNum);
    Serial.println(operation);
    Serial.println(secondNum);
    Serial.println("Enter First num: ");
  }
}

void inputParse(String input){
  for(int i = 0; i <input.length(); i++){
    char ch = input.charAt(i);
    operation(ch);
  }
}

void operation(char ch){
  if (ch == '1'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 1
  BraccioRobot.moveToPosition(pos.set(50,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(47,  33, 80, 30, 180,  70), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch = '2'){

  }
  else if (ch = '3'){

  }
  else if (ch = '4'){

  }
  else if (ch = '5'){

  }
  else if (ch = '6'){

  }
  else if (ch = '7'){

  }
  else if (ch = '8'){

  }
  else if (ch = '9'){

  }
  else if (ch = '0'){

  }
  else if (ch = '+'){

  }
  else if (ch = '-'){

  }
  else if (ch = '*'){

  }
  else if (ch = '/'){

  }
  else if (ch = '='){

  }

}
