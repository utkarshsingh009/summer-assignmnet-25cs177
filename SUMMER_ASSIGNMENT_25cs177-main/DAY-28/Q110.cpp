#include <iostream>

using namespace std;

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, id, found, i;

    do
    {
        cout << "\n===== Bank Management System =====\n";
        cout << "1. Create a Account\n";
        cout << "2. deposite money\n";
        cout << "3. withdraw money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter account number: ";
            cin >> emp[n].id;

            cout << "Enter account holder Name: ";
            cin >> emp[n].name;

            cout << "Enter balance to put : ";
            cin >> emp[n].salary;

            n++;
            cout << "Account Created Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Employee Records Found!\n";
            }
            else
            {
                cout << "\nAccount Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "\nnumber \n"
                         << i + 1;
                    cout << "account number: \n"
                         << emp[i].id;
                    cout << "account holder Name: \n"
                         << emp[i].name;
                    cout << "balance: \n"
                         << emp[i].salary;
                }
            }
            break;

        case 3:
            found = 0;

            cout << "Enter account number to Search: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "\naccount  Found!\n";
                    cout << "account number: \n"
                         << emp[i].id;
                    cout << "account holder Name: \n"
                         << emp[i].name;
                    cout << "balance : \n"
                         << emp[i].salary;

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "account Not Found!\n";

            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);
}