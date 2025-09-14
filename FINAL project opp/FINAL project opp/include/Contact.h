#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>
#include "PhoneNumber.h"
using namespace std;

class Contact
{
private:
    string firstName;
    string lastName;
    string email;
    vector<PhoneNumber> phoneNumbers;
public:
    Contact(string f="", string l="", string e="")
        : firstName(f), lastName(l), email(e) {}

    void setFirstName(const string& f)
    {
        firstName = f;
    }
    void setLastName(const string& l)
    {
        lastName = l;
    }
    void setEmail(const string& e)
    {
        email = e;
    }

    string getFirstName() const
    {
        return firstName;
    }
    string getLastName() const
    {
        return lastName;
    }
    string getEmail() const
    {
        return email;
    }

    void addPhoneNumber(const PhoneNumber& p)
    {
        phoneNumbers.push_back(p);
    }

    void deletePhoneNumber(int index)
    {
        if(index >= 0 && index < (int)phoneNumbers.size())
            phoneNumbers.erase(phoneNumbers.begin() + index);
    }

    vector<PhoneNumber> getPhoneNumbers() const
    {
        return phoneNumbers;
    }

    void display() const;
};

#endif
