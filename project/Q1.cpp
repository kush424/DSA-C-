#include<iostream>
using namespace std;

int main ( ){
    int marks ;
    char grade ;

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

    cout << "grade is :- " << grade;
    
}