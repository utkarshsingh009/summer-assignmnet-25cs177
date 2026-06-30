#include <iostream>
#include <string>

using namespace std;
int main()
{
    char names[3][50];
    int empIds[3];
    float salaries[3];
    int count = 0;
    int choice;

    while (1)
    {
        cout << "\n1. Add Employee\n2. Display Employees\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (count < 3)
            {
                cout << "Enter ID, Name, Salary: ";
                cin >> empIds[count] >> names[count] >> salaries[count];
                count++;
            }
            else
            {
                cout << "Database Full!\n";
            }
        }
        else if (choice == 2)
        {
            cout << "\n--- Employee Records ---\n";
            for (int i = 0; i < count; i++)
            {
                cout << "ID: " << empIds[i] << " Name : " << names[i] << " Salary: " << salaries[i];
            }
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