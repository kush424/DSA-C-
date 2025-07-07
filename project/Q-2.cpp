#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

     cout << "Enter the marks :- ";
    cin >> marks ;

    if ( marks < 0 || marks > 100){
        cout << "invelid output pls Enter The number between ";
        return 1;
    }

    grade = ( marks >= 90)?'A' :
    (marks >= 80 )? 'B' :
    (marks >= 60 )? 'C' :
    (marks >= 50 )? 'D' :
    (marks >= 40 )? 'E' 
    :'F';

    switch(grade){
        case 'A':
            cout<<"Your grade is A, Excellent work";
        break;

         case 'B':
            cout<<"Your grade is B, gret work";
        break;

         case 'C':
            cout<<"Your grade is C, Good job";
        break;

         case 'D':
            cout<<"Your grade is D, You are pass";
        break;

         case 'E':
            cout<<"Your grade is E,  passed";
        break;

         case 'F':
            cout<<"Your grade is F,Sorry you are failed";
        break;
        }

        
        
}