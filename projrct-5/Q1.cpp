#include <iostream>
using namespace std;

int main()
{
    int i, a[10], size;

    cout << "Enter the size: ";
    cin >> size;

    for (i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";
        cin >> a[i];
    }

    cout << "Negative elements from the Array: ";
    for (i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << ", ";
        }
    }

    return 0;
}
