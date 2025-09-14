#include <iostream>
#include "ContactBook.h"
using namespace std;

void ContactBook::deleteContact(const string& fname, const string& lname)
{
    for (auto it = contacts.begin(); it != contacts.end(); ++it)
    {
        if (it->getFirstName() == fname && it->getLastName() == lname)
        {
            contacts.erase(it);
            cout << "Contact deleted successfully!" << endl;
            return;
        }
    }
    cout << "Contact not found." << endl;
}

Contact* ContactBook::searchContact(const string& fname, const string& lname)
{
    for (auto &c : contacts)
    {
        if (c.getFirstName() == fname && c.getLastName() == lname)
        {
            return &c;
        }
    }
    return nullptr;
}

void ContactBook::displayAll() const
{
    if (contacts.empty())
    {
        cout << "No contacts available." << endl;
        return;
    }
    for (const auto &c : contacts)
    {
        c.display();
        cout << "----------------------" << endl;
    }
}
