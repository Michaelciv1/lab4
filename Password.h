#ifndef PASSWORD_H
#define PASSWORD_H


class Password
{
    public:
        Password();
        virtual ~Password();
        void setPassword(char pass[]);
        void getPassword();
        bool checkLength(char pass[]);
        bool checkLowerCase(char pass[]);
        bool checkUpperCase(char pass[]);
        bool checkDigit(char pass[]);
        bool checkPunct(char pass[]);
    private:
        char password[25];
};

#endif // PASSWORD_H
