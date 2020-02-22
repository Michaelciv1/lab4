/*
  CIS 22B

    Lab4: This program uses the functions from the class Password to evaluate the validity
    of the user input password. If the password is invalid, it will print what is missing
    and continue to ask for a new input till the password is valid.
  Author: Michael Wallerius

  Date:2/13/2020

*/

#include "Password.h"
#include <cstring>
#include <iostream>
#include <cctype>

using namespace std;

const int SIZE = 21;

Password::Password()
{
    char *password = new char[SIZE];
}

Password::~Password()
{
    delete password;
}

// This function sets the password char array to what the user inputs
void Password::setPassword(){

    cin >> password;
}

// This function is passed the char array and checks if the length of the input is valid. It returns true or false.
bool Password::checkLength(char pass[]){
    if (strlen(pass) < 6 || strlen(pass) > 20){
        return false;
    }
    else
        return true;
}

// This function is passed the char array and checks if there is a digit in the password. It returns true or false.
bool Password::checkDigit(char pass[]){
    bool digit = false;
    for (int x = 0; x < strlen(pass); x++){
        if (isdigit(pass[x]))
            digit = true;
    }
    return digit;
}

// This function is passed the char array and checks if there is punctuation in the password. It returns true or false.
bool Password::checkPunct(char pass[]){
    bool punct = false;
    for (int x = 0; x < strlen(pass); x++){
        if (ispunct(pass[x]))
            punct = true;
    }
    return punct;
}

// This function is passed the char array and checks if there is a lowercase character in the password. It returns true or false.
bool Password::checkLowerCase(char pass[]){
    for (int x = 0; x < strlen(pass); x++){
        if (islower(pass[x]))
            return true;
    }
    return false;
}

// This function is passed the char array and checks if there is an uppercase character in the password. It returns true or false.
bool Password::checkUpperCase(char pass[]){
    for (int x = 0; x < strlen(pass); x++){
        if (isupper(pass[x]))
            return true;
    }
    return false;
}
