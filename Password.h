#ifndef PASSWORD_H
#define PASSWORD_H

class Password
{
    public:
        Password();
        virtual ~Password();
        char* getPassword(){return password;} //function returns the password to be used in main
        bool checkLength(char pass[]);
        bool checkLowerCase(char pass[]);
        bool checkUpperCase(char pass[]);
        bool checkDigit(char pass[]);
        bool checkPunct(char pass[]);
    private:
        char password[21];
};

#endif // PASSWORD_H
