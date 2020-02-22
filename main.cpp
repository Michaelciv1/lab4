/*
  CIS 22B

    Lab4: This program uses the functions from the class Password to evaluate the validity
    of the user input password. If the password is invalid, it will print what is missing
    and continue to ask for a new input till the password is valid.
  Author: Michael Wallerius

  Date:2/13/2020

*/

#include <iostream>
#include <cstring>
#include "Password.h"

using namespace std;

// The main runs all the appropriate checks for the password and loops the program if invalid password.
int main()
{
    int valid = 0;
    cout << "The Great Password Checker" << endl;
    cout << "--------------------------\n" << endl;
    cout << "Password Requirements:" << endl;
    cout << "The password should be between 6 and 20 characters long." << endl;
    cout << "The password should contain at least one uppercase and at least one lowercase letter." << endl;
    cout << "The password should have at least one digit." << endl;
    cout << "The password should have at least one punctuation character." << endl;
    cout << "Enter your password: ";

    while (valid == 0){
        Password p;
        p.setPassword();

        int a, b, c, d, e; //stores the 1 or 0 returned by character tests
        a = p.checkDigit();
        if (a == 0){cout << "Missing a digit character" << endl;}
        b = p.checkLength();
        if (b == 0){cout << "Password was not between 6 and 20 characters" << endl;}
        c = p.checkPunct();
        if (c == 0){cout << "Missing punctuation character" << endl;}
        d = p.checkLowerCase();
        if (d == 0){cout << "Missing lowercase character" << endl;}
        e = p.checkUpperCase();
        if (e == 0){cout << "Missing uppercase character" << endl;}

        if (a + b + c + d + e == 5){ //if all five ints returned by the tests add to five, the password is valid
            cout << "Valid Password!" << endl;
            valid = 1;
        }
        else {
            cout << "Please try again\n" << endl;
            cout << "Enter new password: ";
            valid = 0;
        }
    }
}

/* OUTPUT
The Great Password Checker
--------------------------

Password Requirements:
The password should be between 6 and 20 characters long.
The password should contain at least one uppercase and at least one lowercase letter.
The password should have at least one digit.
The password should have at least one punctuation character.
Enter your password: Password123

Missing punctuation character
Please try again

Enter new password: password!

Missing a digit character
Missing uppercase character
Please try again

Enter new password: p

Missing a digit character
Password was not between 6 and 20 characters
Missing punctuation character
Missing uppercase character
Please try again

Enter new password: Password1!

Valid Password!

Process returned 0 (0x0)   execution time : 22.261 s
Press any key to continue.
*/
