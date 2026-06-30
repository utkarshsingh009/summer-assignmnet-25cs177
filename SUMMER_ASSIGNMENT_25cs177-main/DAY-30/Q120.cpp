#include <iostream>
#include <string>

using namespace std;

void inputData(char items[][50], int ids[], int *count)
{
    if (*count < 3)
    {
        cout << "Enter Item ID and Name: ";
        cin >> ids[*count] >> items[*count];
        (*count)++;
    }
    else
    {
        cout << "Inventory Full!\n";
    }
}

void displayData(char items[][50], int ids[], int count)
{
    cout << "\n--- Inventory Items ---\n";
    for (int i = 0; i < count; i++)
    {
        cout << "ID: " << ids[i] << " Name: \n"
             << items[i];
    }
}

int main()
{
    char items[3][50];
    int ids[3];
    int count = 0;
    int choice;

    while (1)
    {
        cout << "\n1. Add Item\n2. View Items\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            inputData(items, ids, &count);
        }
        else if (choice == 2)
        {
            displayData(items, ids, count);
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid Choice!\n";
        }
    }
}