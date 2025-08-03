/*
develop a program to print and find the sum of all element given row & columns from a 2d array.
*/

#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of row: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter elements of the array: " << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    int sum = 0;
    cout << "2D Array: " << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << arr[i][j] << "  ";
            sum += arr[i][j];
        }
        cout << endl;
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}