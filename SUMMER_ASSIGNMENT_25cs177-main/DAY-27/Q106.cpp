#include <iostream>
#include <string>

using namespace std;

struct employee
{
    int empid;
    string empname;
};

int main()
{
    int n;
    cout << "ENTER THE NUMBER OF STUDENT RECORD TO ENTER = ";
    cin >> n;
    employee rec[n];

    for (int i = 0; i < n; i++)
    {
        cout << "ENTER EMPLOYEE ID = ";
        cin >> rec[i].empid;
        cout << "ENTER EMPLOYEE NAME = ";
        cin >> rec[i].empname;
    }

    for (int j = 0; j < n; j++)
    {

        cout << " | " << rec[j].empid << " | " << rec[j].empname << " | ";
    }
}