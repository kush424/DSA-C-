# Project-5 Simple Console Calculator (C++) — README

Ek simple, menu-driven calculator jo basic integer operations karta hai: addition, subtraction, multiplication, division aur modulus. Program C++ mein likha gaya hai aur console par chalta hai.

## Features
- +, -, *, /, % operations
- Menu-driven interface
- Division/Modulus by zero check
- Continuous operations until you choose exit (0)

## Requirements
- C++ compiler (g++/clang++)
- C++11 ya usse upar recommend

## Build & Run

Linux/macOS:
```bash
g++ -std=c++17 -O2 -Wall main.cpp -o calculator
./calculator
```

Windows (MinGW):
```powershell
g++ -std=c++17 -O2 -Wall main.cpp -o calculator.exe
.\calculator.exe
```

Note: File ka naam aapke hisaab se ho sakta hai (yahan main.cpp assume kiya hai).

## How to Use
Program run karne ke baad menu mein option choose karein:
- 1: Addition
- 2: Subtraction
- 3: Multiplication
- 4: Division (integer division)
- 5: Modulus (remainder)
- 0: Exit

Phir do integers enter karein (num1 aur num2).

### Example Session
```
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit
Enter your choice: 3
Enter the first number: 7
Enter the second number: 5
Multiplication of 7 and 5 is 35
```

## Notes and Edge Cases
- Ye program integer arithmetic use karta hai:
  - Division: integer division (7 / 2 -> 3)
  - Modulus: remainder (7 % 2 -> 1)
- Divide/mod by zero par message print hoga aur 0 return karega.
- Non-numeric input par cin fail ho sakta hai; abhi basic input validation hai (sirf choice range check). Advanced validation niche Improvements mein di gayi hai.

## Code Structure
- add(a, b), sub(a, b), multi(a, b), divide(a, b), mod(a, b)
- do-while loop + switch-case for menu handling

## Possible Improvements
- Floating-point support (double) for division
- Strong input validation (non-integer input handle karna)
- Clear screen / better UI
- Repeat last result feature
- Unit tests

