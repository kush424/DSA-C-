#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        cout << "Error: Modulus by zero!" << endl;
        return 0;
    }
    return a % b;
}

int main() {
    int choice, num1, num2;

    do {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 5) {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }

        switch (choice) {
            case 1:
                cout << "Addition of " << num1 << " and " << num2 << " is " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Subtraction of " << num1 << " and " << num2 << " is " << sub(num1, num2) << endl;
                break;
            case 3:
                cout << "Multiplication of " << num1 << " and " << num2 << " is " << multi(num1, num2) << endl;
                break;
            case 4:
                cout << "Division of " << num1 << " and " << num2 << " is " << divide(num1, num2) << endl;
                break;
            case 5:
                cout << "Modulus of " << num1 << " and " << num2 << " is " << mod(num1, num2) << endl;
                break;
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);

    return 0;
}