#include <iostream>
using namespace std;

int main()
{
    int i, j, a[10][10], row, column;

    cout << "Enter the row: ";
    cin >> row;

    cout << "Enter the column: ";
    cin >> column;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int largest = a[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    cout << "The largest element is: " << largest;

    return 0;
}
