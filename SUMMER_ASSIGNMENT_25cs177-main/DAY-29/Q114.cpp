#include <iostream>

using namespace std;

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, i, found;

    while (1)
    {
        cout << "\n--- Array Operations System ---\n";
        cout << "1. Insert Element\n2. Delete Element\n3. Display Array\n4. Exit\n";
        cout << "Enter choice (1-4): ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Exiting system.\n";
            break;
        }

        switch (choice)
        {
        case 1:
            if (size >= MAX_SIZE)
            {
                cout << "Array is full!\n";
            }
            else
            {
                cout << "Enter integer to insert: ";
                cin >> element;
                arr[size] = element;
                size++;
                cout << "added successfully.\n"
                     << element;
            }
            break;

        case 2:
            if (size == 0)
            {
                cout << "Array is empty!\n";
            }
            else
            {
                cout << "Enter integer to delete: ";
                cin >> element;
                found = -1;
                for (i = 0; i < size; i++)
                {
                    if (arr[i] == element)
                    {
                        found = i;
                        break;
                    }
                }
                if (found != -1)
                {
                    for (i = found; i < size - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    size--;
                    cout << " removed successfully.\n"
                         << element;
                }
                else
                {
                    cout << "Element not found in array.\n";
                }
            }
            break;

        case 3:
            cout << "Current Array: [";
            for (i = 0; i < size; i++)
            {
                cout << arr[i];
                if (i < size - 1)
                    cout << ", ";
            }
            cout << "]\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}