#include <iostream>
#include <string>

using namespace std;

int main()
{
    int reg[100];
    string name[100];
    int cla[100];
    int n;
    char choice;
    cout << "ENTER THE NUMBER OF STUDENT RECORD TO ENTER = ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "ENTER THE REGISTRATION NUMBER OF STUDENT = ";
        cin >> reg[i];
        // cout << endl;
        cout << "ENTER THE NAME OF STUDENT = ";
        cin >> name[i];
        // cout << endl;
        cout << "ENTER THE CLASS OF STUDENT = ";
        cin >> cla[i];
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
            cout << " | " << reg[j] << "     | " << name[j] << "  | " << cla[j] << "    | " << endl;
        }
    }

    else
        cout << "OK";
}