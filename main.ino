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
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '2'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 2
  BraccioRobot.moveToPosition(pos.set(57,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(57,  37, 80, 25, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '3'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 3
  BraccioRobot.moveToPosition(pos.set(70,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(70,  40, 80, 20, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '4'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 4
  BraccioRobot.moveToPosition(pos.set(50,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(45,  51, 55, 25, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '5'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 5
  BraccioRobot.moveToPosition(pos.set(57,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(60,  53, 53, 25, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '6'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 3
  BraccioRobot.moveToPosition(pos.set(70,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(70,  50, 58, 21, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '7'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 7
  BraccioRobot.moveToPosition(pos.set(50,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(43,  67, 36, 25, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '8'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 8
  BraccioRobot.moveToPosition(pos.set(57,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(60,  65, 37, 19, 180,  70), 50);
  delay(1000);
  // back to defualt
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '9'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 9
  BraccioRobot.moveToPosition(pos.set(72,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(72,  70, 31, 23, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '0'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards 0
  BraccioRobot.moveToPosition(pos.set(57,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(60,  81, 21, 15, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '+'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards +
  BraccioRobot.moveToPosition(pos.set(50,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(40,  74, 24, 19, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '-'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards -
  BraccioRobot.moveToPosition(pos.set(75,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(75,  79, 22, 17, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '*'){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards *
  BraccioRobot.moveToPosition(pos.set(37,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(37,  82, 20, 7, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else if (ch == '/'){

  }
  else if (ch == '='){

  }
  else{
    Serial.println("Invalid Input");
  }

}
