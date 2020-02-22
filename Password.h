/*
  CIS 22B

    Lab4: This program uses the functions from the class Password to evaluate the validity
    of the user input password. If the password is invalid, it will print what is missing
    and continue to ask for a new input till the password is valid.
  Author: Michael Wallerius

  Date:2/13/2020

*/

#ifndef PASSWORD_H
#define PASSWORD_H

class Password
{
    public:
        Password();
        virtual ~Password();
        void setPassword();
        char* getPassword(){return password;} //function returns the password to be used in main
        bool checkLength(char pass[]);
        bool checkLowerCase(char pass[]);
        bool checkUpperCase(char pass[]);
        bool checkDigit(char pass[]);
        bool checkPunct(char pass[]);
    private:
        char *password;
};

#endif // PASSWORD_H
