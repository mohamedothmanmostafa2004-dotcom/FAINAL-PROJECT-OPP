#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <string>
using namespace std;

class PhoneNumber
{
private:
    string number;
    string type; // home, work, mobile
public:
    PhoneNumber(string num = "", string t = "") : number(num), type(t) {}

    void setNumber(const string& num)
    {
        number = num;
    }
    void setType(const string& t)
    {
        type = t;
    }

    string getNumber() const
    {
        return number;
    }
    string getType() const
    {
        return type;
    }
};

#endif
