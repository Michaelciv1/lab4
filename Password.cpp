#include "Password.h"
#include <cstring>
#include <iostream>
#include <cctype>

using namespace std;

Password::Password()
{
    //ctor
}

Password::~Password()
{
    //dtor
}

bool Password::checkLength(char pass[]){
    if (strlen(pass) < 6 || strlen(pass) > 20){
        cout << "Does not meet length requirement." << endl;
        return false;
    }
    else
        return true;
}

bool Password::checkLowerCase(char pass[]){
    bool lower = false;
    for (int x = 0; x < 21; x++){
        if (islower(pass[x]))
            lower = true;
    }
}

bool Password::checkUpperCase(char pass[]){
    bool upper = false;
    for (int x = 0; x < 21; x++){
        if (isupper(pass[x]))
            upper = true;
    }
}

bool Password::checkDigit(char pass[]){
    bool digit = false;
    for (int x = 0; x < 21; x++){
        if (isdigit(pass[x]))
            digit = true;
    }
}

bool Password::checkPunct(char pass[]){
    bool punct = false;
    for (int x = 0; x < 21; x++){
        if (ispunct(pass[x]))
            punct = true;
    }
}
