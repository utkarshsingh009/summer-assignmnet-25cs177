// Write a program to Create salary management system.

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
        cout << "\n===== Salary Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> emp[n].id;

            cout << "Enter Employee Name: ";
            cin >> emp[n].name;

            cout << "Enter Salary: ";
            cin >> emp[n].salary;

            n++;
            cout << "Employee Added Successfully!\n";
            break;

        case 2:
            if (n == 0)
            {
                cout << "No Employee Records Found!\n";
            }
            else
            {
                cout << "\nEmployee Records:\n";
                for (i = 0; i < n; i++)
                {
                    cout << "\nEmployee \n"
                         << i + 1;
                    cout << "ID: \n"
                         << emp[i].id;
                    cout << "Name: \n"
                         << emp[i].name;
                    cout << "Salary: \n"
                         << emp[i].salary;
                }
            }
            break;

        case 3:
            found = 0;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    cout << "\nEmployee Found!\n";
                    cout << "ID: \n"
                         << emp[i].id;
                    cout << "Name: \n"
                         << emp[i].name;
                    cout << "Salary: \n"
                         << emp[i].salary;

                    found = 1;
                    break;
                }
            }

            if (found == 0)
                cout << "Employee Not Found!\n";

            break;

        case 4:
            cout << "Exiting Program...\n";
            break;

        default:
            cout << "Invalid Choice!\n";
        }

    } while (choice != 4);
}