#include "Password.h"
#include <cstring>
#include <iostream>
#include <cctype>

using namespace std;

Password::Password()
{
    cin >> password;
    cout << endl;
}

Password::~Password()
{
    delete password;
}

bool Password::checkLength(char pass[]){
    if (strlen(pass) < 6 || strlen(pass) > 20){
        return false;
    }
    else
        return true;
}

bool Password::checkDigit(char pass[]){
    bool digit = false;
    for (int x = 0; x < strlen(pass); x++){
        if (isdigit(pass[x]))
            digit = true;
    }
    return digit;
}

bool Password::checkPunct(char pass[]){
    bool punct = false;
    for (int x = 0; x < strlen(pass); x++){
        if (ispunct(pass[x]))
            punct = true;
    }
    return punct;
}

bool Password::checkLowerCase(char pass[]){
    for (int x = 0; x < strlen(pass); x++){
        if (islower(pass[x]))
            return true;
    }
    return false;
}

bool Password::checkUpperCase(char pass[]){
    for (int x = 0; x < strlen(pass); x++){
        if (isupper(pass[x]))
            return true;
    }
    return false;
}
