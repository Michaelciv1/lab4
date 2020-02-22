#include "Password.h"
#include <cstring>
#include <iostream>
#include <cctype>

using namespace std;

Password::Password()
{
    Password *password = new Password[21];
    cout << endl;
}

Password::~Password()
{
    delete password;
}

void Password::setPassword(){
    cout << "hi there";
    cin >> password;
}

// This function checks if the length of the input is valid and returns true or false
bool Password::checkLength(char pass[]){
    if (strlen(pass) < 6 || strlen(pass) > 20){
        return false;
    }
    else
        return true;
}

// This function checks if there is a digit in the password and returns true or false
bool Password::checkDigit(char pass[]){
    bool digit = false;
    for (int x = 0; x < strlen(pass); x++){
        if (isdigit(pass[x]))
            digit = true;
    }
    return digit;
}

//This function checks if there is punctuation in the password and returns true or false
bool Password::checkPunct(char pass[]){
    bool punct = false;
    for (int x = 0; x < strlen(pass); x++){
        if (ispunct(pass[x]))
            punct = true;
    }
    return punct;
}

// This function checks if there is a lowercase character in the password and returns true or false
bool Password::checkLowerCase(char pass[]){
    for (int x = 0; x < strlen(pass); x++){
        if (islower(pass[x]))
            return true;
    }
    return false;
}

// This function checks if there is an uppercase character in the password and returns true or false
bool Password::checkUpperCase(char pass[]){
    for (int x = 0; x < strlen(pass); x++){
        if (isupper(pass[x]))
            return true;
    }
    return false;
}
