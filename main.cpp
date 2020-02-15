#include <iostream>
#include <cstring>
#include "Password.h"

using namespace std;

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
    Password p;

    //while (valid = 1){
        int a, b, c;
        a = p.checkDigit(p.getPassword());
        b = p.checkLength(p.getPassword());
        c = p.checkPunct(p.getPassword());



        if (a + b + c == 3){
            cout << "success" << endl;
            valid = 0;
        }
        else {
            cout << "false" << endl;
            valid = 0;
        }

}
