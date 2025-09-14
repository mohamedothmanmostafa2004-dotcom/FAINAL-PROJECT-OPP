#include <iostream>
#include "Contact.h"
using namespace std;

void Contact::display() const
{
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone Numbers: " << endl;
    for (size_t i = 0; i < phoneNumbers.size(); i++)
    {
        cout << "  [" << i+1 << "] "
             << phoneNumbers[i].getType() << ": "
             << phoneNumbers[i].getNumber() << endl;
    }
}
