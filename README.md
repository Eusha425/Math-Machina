# Robotic Calculator Project

## Overview
The Robotic Calculator project controls a robotic arm to simulate a calculator by physically pressing buttons to perform mathematical operations. Users input numbers and operators through the Serial Monitor, and the Braccio Robot executes the calculations by pressing the corresponding buttons on a calculator interface.

## Key Features
- User input via Serial Monitor for two 1- or 2-digit integers and basic math operations
- Automated robotic arm control for precise button pressing
- Support for addition, subtraction, multiplication, and integer division
- Safe movement patterns to prevent system damage
- Real-time calculation and result display

## Requirements

### Hardware
- Braccio Robot with servo motors
- Arduino Uno or compatible microcontroller
- USB cable for Arduino connection

### Software
- Arduino IDE
- Required Libraries:
  - BraccioRobot
  - Servo

## Installation

### Library Setup
1. Locate your Arduino libraries folder:
   - Windows: `Documents/Arduino/libraries/`
   - macOS: `Documents/Arduino/libraries/`
   - Linux: `~/Arduino/libraries/`
2. Create the `libraries` folder if it doesn't exist
3. Download and extract the `BraccioRobot` and `Servo` libraries to this folder

### Hardware Setup
1. Connect the Braccio Robot to Arduino Uno following the pin configuration
2. Mount the robot on a stable surface with adequate movement space
3. Verify all servo connections

### Software Setup
1. Open Arduino IDE
2. Load the project code
3. Configure settings:
   - Set baud rate to 9600
   - Select correct board and port
4. Upload code to Arduino

## Usage

1. Open Serial Monitor (baud rate: 9600)
2. Follow the prompts:
   - Enter first number (1-2 digits)
   - Choose operation (+, -, *, /)
   - Enter second number (1-2 digits)
3. Watch as the robot executes the calculation

### Example
```
Input: 23 + 85
Robot Actions:
1. Press "2", "3"
2. Press "+"
3. Press "8", "5"
4. Press "="
Result: Robot presses "1", "0", "8"
```

## Troubleshooting

### Common Issues
- **Robot Not Moving:**
  - Check servo connections
  - Verify power supply
  - Confirm servo calibration

- **Input Rejected:**
  - Ensure numbers are 1-2 digits
  - Verify valid operator (+, -, *, /)
  - Check Serial Monitor baud rate

- **Incorrect Button Presses:**
  - Review position coordinates in `operation()` function
  - Calibrate servo positions
  - Check for mechanical obstructions

## Project Structure

### Core Functions
- `getValidInput()`: Validates numeric input
- `getOperationInput()`: Handles operator selection
- `performCalculation()`: Executes arithmetic operations
- `operation()`: Controls robot movement and button pressing

### Error Handling
- Input validation for numbers and operations
- Safe movement protocols
- Division by zero protection

## Documentation
For detailed system design, implementation details, and analysis, refer to the project report (PDF) in the repository.

## License
This project is licensed under the MIT License - see [LICENSE.md](LICENSE.md) for details.
