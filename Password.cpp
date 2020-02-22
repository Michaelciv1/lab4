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

const int SIZE = 30;

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
bool Password::checkLength(){
    if (strlen(password) < 6 || strlen(password) > 20){
        return false;
    }
    else
        return true;
}

// This function is passed the char array and checks if there is a digit in the password. It returns true or false.
bool Password::checkDigit(){
    bool digit = false;
    for (int x = 0; x < strlen(password); x++){
        if (isdigit(password[x]))
            digit = true;
    }
    return digit;
}

// This function is passed the char array and checks if there is punctuation in the password. It returns true or false.
bool Password::checkPunct(){
    bool punct = false;
    for (int x = 0; x < strlen(password); x++){
        if (ispunct(password[x]))
            punct = true;
    }
    return punct;
}

// This function is passed the char array and checks if there is a lowercase character in the password. It returns true or false.
bool Password::checkLowerCase(){
    for (int x = 0; x < strlen(password); x++){
        if (islower(password[x]))
            return true;
    }
    return false;
}

// This function is passed the char array and checks if there is an uppercase character in the password. It returns true or false.
bool Password::checkUpperCase(){
    for (int x = 0; x < strlen(password); x++){
        if (isupper(password[x]))
            return true;
    }
    return false;
}
