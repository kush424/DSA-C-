#include <iostream>
using namespace std;

int main ()

// step 1 :  start 
// step 2 : Initialize variables: n, i, and count = 0.
// step 3 : Input a number n from the user.
// step 4 :Use a for loop to count the number of digits
// step 5 : Repeat the loop while n > 0
// step 6 : Print the total number of digits
// step 7: End


{
    int n , i , count=0;

    cout << "Enter num :" ;
    cin >> n;

      for (i=1 ; n > 0;i++)
      {
        n = n/10;
        count++;
      }

    cout << "Total Number :- " << count;

    // cout << "sum of LastDigit and FirstDigit number is :" << sum << endl;
    return 0;
}

