#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H

#include <vector>
#include "Contact.h"
using namespace std;

class ContactBook
{
private:
    vector<Contact> contacts;
public:
    void addContact(const Contact& c)
    {
        contacts.push_back(c);
    }

    void deleteContact(const string& fname, const string& lname);

    Contact* searchContact(const string& fname, const string& lname);

    void displayAll() const;
};

#endif
