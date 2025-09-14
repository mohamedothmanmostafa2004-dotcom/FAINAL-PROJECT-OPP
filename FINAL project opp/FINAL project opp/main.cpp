#include <iostream>
#include "ContactBook.h"
using namespace std;

int main()
{
    ContactBook book;
    int choice;

    do
    {
        cout << "\n--- Contact Book Menu ---\n";
        cout << "1. Add a new contact\n";
        cout << "2. Delete a contact\n";
        cout << "3. Search for a contact\n";
        cout << "4. Display all contacts\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1)
        {
            string f, l, e;
            cout << "Enter first name: ";
            cin >> f;
            cout << "Enter last name: ";
            cin >> l;
            cout << "Enter email: ";
            cin >> e;

            Contact c(f, l, e);
            int n;
            cout << "How many phone numbers to add? ";
            cin >> n;
            for(int i=0; i<n; i++)
            {
                string num, type;
                cout << "Enter number: ";
                cin >> num;
                cout << "Enter type (home/work/mobile): ";
                cin >> type;
                c.addPhoneNumber(PhoneNumber(num, type));
            }
            book.addContact(c);
        }
        else if(choice == 2)
        {
            string f, l;
            cout << "Enter first name: ";
            cin >> f;
            cout << "Enter last name: ";
            cin >> l;
            book.deleteContact(f, l);
        }
        else if(choice == 3)
        {
            string f, l;
            cout << "Enter first name: ";
            cin >> f;
            cout << "Enter last name: ";
            cin >> l;
            Contact* c = book.searchContact(f, l);
            if(c) c->display();
            else cout << "Contact not found." << endl;
        }
        else if(choice == 4)
        {
            book.displayAll();
        }

    }
    while(choice != 5);

    return 0;
}
