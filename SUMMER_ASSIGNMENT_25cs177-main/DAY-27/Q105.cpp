#include <iostream>
#include <string>

using namespace std;

struct student
{
    int reg_num;
    string name;
    int classes;
};

int main()
{
    int n;
    char choice;
    cout << "ENTER THE NUMBER OF STUDENT RECORD TO ENTER = ";
    cin >> n;
    student record[n];

    for (int i = 0; i < n; i++)
    {
        cout << "ENTER THE REGISTRATION NUMBER OF STUDENT = ";
        cin >> record[i].reg_num;
        // cout << endl;
        cout << "ENTER THE NAME OF STUDENT = ";
        cin >> record[i].name;
        // cout << endl;
        cout << "ENTER THE CLASS OF STUDENT = ";
        cin >> record[i].classes;
        // cout << endl;
    }

    cout << "WANT TO SEE THE ENTERED RECORD OF STUDENT? (y/n)";
    cin >> choice;

    if (choice == 'y')
    {
        cout << "  REG_NUM    NAME    CLASS ";
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << " | " << record[j].reg_num << "     | " << record[j].name << "  | " << record[j].classes << "    | " << endl;
        }
    }

    else
        cout << "OK";
}