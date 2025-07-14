// Alphabet skipper 

#include <iostream>
using namespace std;

// step 1 :  start 
// step 2 : Initialize a character variable ch with 'a' 
// step 3 : do while loop
// step 4 : print space 
// step 5 : Increment ch by 4 
// step 6 : End

int main(){
    
    char ch = 'a' ;

    do {
        cout << ch << " ";
        ch += 4;
        
    }  
    while (ch <= 'z');

    return 0;
}

