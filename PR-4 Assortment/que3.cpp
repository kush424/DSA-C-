#include <iostream>
using namespace std;

int main()
{
    int i, j, a[10][10], t[10][10], row, column;

    cout << "Enter the row: ";
    cin >> row;

    cout << "Enter the column: ";
    cin >> column;

    cout << "Enter the array's elements:";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }


    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            t[j][i] = a[i][j];
        }
    }

    cout << "The transpose matrix of the array:";

    for (i = 0; i < column; i++)
    {
        for (j = 0; j < row; j++)
        {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
