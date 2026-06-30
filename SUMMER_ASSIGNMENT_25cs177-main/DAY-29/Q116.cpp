#include <iostream>
#include <cstring>

using namespace std;

#define MAX_ITEMS 50

struct Item
{
    char name[50];
    int qty;
};

int main()
{
    struct Item inventory[MAX_ITEMS];
    int itemCount = 0;
    int choice, i, found, qtyInput;
    char nameInput[50];

    while (1)
    {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add/Update Item\n2. View Inventory\n3. Check Item Stock\n4. Exit\n";
        cout << "Enter choice (1-4): ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Exiting inventory system.\n";
            break;
        }

        switch (choice)
        {
        case 1:
            cout << "Enter item name: ";
            cin >> nameInput;
            cout << "Enter quantity to add: ";
            cin >> qtyInput;

            found = -1;
            for (i = 0; i < itemCount; i++)
            {
                if (strcasecmp(inventory[i].name, nameInput) == 0)
                {
                    found = i;
                    break;
                }
            }

            if (found != -1)
            {
                inventory[found].qty += qtyInput;
                cout << "Updated %s. Total Stock: %d\n", inventory[found].name, inventory[found].qty;
            }
            else
            {
                if (itemCount < MAX_ITEMS)
                {
                    strcpy(inventory[itemCount].name, nameInput);
                    inventory[itemCount].qty = qtyInput;
                    cout << "Added " << inventory[itemCount].name << " Total Stock: \n"
                         << inventory[itemCount].qty;
                    itemCount++;
                }
                else
                {
                    cout << "Inventory database limit reached!\n";
                }
            }
            break;

        case 2:
            cout << "\n--- Current Inventory ---\n";
            if (itemCount == 0)
            {
                cout << "Inventory is currently empty.\n";
            }
            else
            {
                for (i = 0; i < itemCount; i++)
                {
                    cout << "- " << inventory[i].name << ": \n"
                         << inventory[i].qty;
                }
            }
            break;

        case 3:
            cout << "Enter item name to check: ";
            cin >> nameInput;
            found = -1;
            for (i = 0; i < itemCount; i++)
            {
                if (strcasecmp(inventory[i].name, nameInput) == 0)
                {
                    found = i;
                    break;
                }
            }
            if (found != -1)
            {
                cout << "Available stock for " << inventory[found].name << ": \n"
                     << inventory[found].qty;
            }
            else
            {
                cout << "Available stock for" << "'" << nameInput << "'" << ": 0\n ";
            }
            break;

        default:
            cout << "Invalid choice.\n";
        }
    }
}