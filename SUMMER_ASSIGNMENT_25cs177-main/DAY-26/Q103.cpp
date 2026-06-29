#include <iostream>

using namespace std;

int main()
{
    int n, money, lang;
    bool choice;
    cout << "\t\t\t#SELECT YOUR LANGUAGE#\t\t\t";
    cout << "1 ENGLISH" << endl
         << "2 HINDI" << endl
         << "3 OTHER LANGUAGE" << endl;
    cin >> lang;

    cout << "SELECT WHAT YOU HAVE TO DO" << endl;
    cout << "1. transaction " << endl
         << "2. deposite";
    cin >> n;

    if (n == 1)
    {
        cout << "enter the amount of money to transact = ";
        cin >> money;
        cout << "are u sure u want transaction this amount of money = ";
        cin >> choice;
        if (choice == true)
            cout << "money has been transacted";

        else
            cout << "transaction is declined";
    }

    else if (n == 2)
    {
        cout << "enter the amount of money to deposite = ";
        cin >> money;
        cout << "are u sure u want deposite this amount of money = ";
        cin >> choice;
        if (choice == true)
            cout << "money has been deposite";

        else
            cout << "deposite is declined";
    }

    else
        cout << "wrong selection";
}