#include <iostream>
#include <cstring>
#include "Password.h"

using namespace std;

int main()
{
    cout << "The Great Password Checker" << endl;
    cout << "--------------------------\n" << endl;
    cout << "Password Requirements:" << endl;
    cout << "The password should be between 6 and 20 characters long." << endl;
    cout << "The password should contain at least one uppercase and at least one lowercase letter." << endl;
    cout << "The password should have at least one digit." << endl;
    cout << "The password should have at least one punctuation character." << endl;

    cout << "Enter your password: ";
    Password p;

    if (p.checkLowerCase(p.getPassword()))
        cout << "passed";
    else
        cout << "failed";

}
