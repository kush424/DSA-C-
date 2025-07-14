#include <iostream>
using namespace std;

int main ()

// step 1 :  start 
// step 2 : Initialize variables: n, LastDigit, FirstDigit, and sum = 0.
// step 3 : Input a number n from the user.
// step 4 : Find the last digit using LastDigit = n % 10.
// step 5 : Extract the first digit using a while loop
// step 6 :Calculate sum = FirstDigit + LastDigit.
// step 7: End


{
    int n , LastDigit , FirstDigit , sum=0;

    cout << "Enter num :" ;
    cin >> n;

      LastDigit = n % 10;

    while (n >= 10)
    {
        n = n / 10;
    }
    
    FirstDigit = n;

    sum = FirstDigit + LastDigit;

    cout << "sum of LastDigit and FirstDigit number is :" << sum << endl;
    return 0;
}

