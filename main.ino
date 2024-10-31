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
    String firstNum = getValidInput("Enter First num");
    char op = getOperationInput();
    String secondNum = getValidInput("Enter the second number: ");

    // Print the captured values
    inputParse(firstNum);
    Serial.println(firstNum);
    operation(op);
    Serial.println(op);
    inputParse(secondNum);
    Serial.println(secondNum);
    int result = performCalculation(firstNum, op, secondNum);
    operation('=');
    inputParse(String(result));
    Serial.println(result);
    Serial.println("Enter First num: ");
  }
}

int performCalculation(String firstNum, char op, String secondNum){
  int num1 = firstNum.toInt();
  int num2 = secondNum.toInt();

  switch(op){
    case '+':
    return num1+num2;
    case '-':
    return num1-num2;
    case '*':
    return num1*num2;
    case '/':
    if(num2 == 0){
      Serial.println("cannot divide by zero");
      return 0;
    }
    else{
      return int(num1/num2);
    }
  }
}

String getValidInput(String prompt) {
  String input;
  while (true) {
    Serial.println(prompt);
    while (Serial.available() == 0) {} // Wait for user input 

    input = Serial.readStringUntil('\n');
    input.trim(); // Remove any whitespace
    
    if (checkInputSize(input)) {
      return input; // Return valid input
    } else {
      Serial.println("Number needs to be within 2 digits!!!");
    }
  }
}

char getOperationInput() {
  char operation;
  while (true) {
    Serial.println("Select the operation (+, -, *, /):");  
    while (Serial.available() == 0) {} // Wait for user input 

    operation = Serial.readStringUntil('\n')[0];

    // Check if the operation is valid
    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
      return operation; // Return valid operation
    } else {
      Serial.println("Invalid operation! Please enter (+, -, *, /):");
    }
  }
}

bool checkInputSize(String input){
  int value = input.toInt();
  if(value > 99 || value < -99)
  {
    return false;
  }
  else{
    return true;
  }
}

void inputParse(String input){
  for(int i = 0; i <input.length(); i++){
    char ch = input.charAt(i);
    if(isDigit(ch)){
      operation(ch);
    }
    else{
      Serial.println("Invalid Input!!!");
    }
    
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
    // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards /
  BraccioRobot.moveToPosition(pos.set(57,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(60,  87, 15, 7, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);

  }
  else if (ch == '='){
  // default position
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  // start movement towards -
  BraccioRobot.moveToPosition(pos.set(78,  165, 0, 0, 180,  50), 50);
  delay(1000);
  BraccioRobot.moveToPosition(pos.set(78,  87, 15, 10, 180,  70), 50);
  delay(1000);
  // back to default
  BraccioRobot.moveToPosition(pos.set(90,  165, 0, 0, 180,  50), 50);
  delay(1000);
  }
  else{
    Serial.println("Invalid Input");
  }

}
