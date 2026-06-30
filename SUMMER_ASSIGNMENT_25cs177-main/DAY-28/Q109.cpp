#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, du;
    string book;
    string name;
    cout << "\t--------WELCOME TO THE LIBRARY--------\t" << endl;
    cout << "1. WANT TO READ A BOOK IN LIBRARY" << endl;
    cout << "2. WANT TO ISSUE A BOOK FROM LIBRARY" << endl;
    cout << "3. WANT TO BUY A BOOK" << endl;
    cout << "4. EXIT THE SYSTEM" << endl;
    cout << "CHOOSE YOUR OPTION = ";
    cin >> n;
    cout << "\n\n\n---------------------------------------" << endl;
    if (n == 1)
    {
        cout << "BOOK TO READ = ";
        getline(cin, book);
        cout << "NAME OF THE READER = ";
        getline(cin, name);
        cout << "FOR HOW MUCH DURATION (in hrs) = ";
        cin >> du;
    }

    if (n == 2)
    {
        cout << "BOOK TO ISSUE = ";
        getline(cin, book);
        cout << "NAME OF THE READER = ";
        getline(cin, name);
        cout << "FOR HOW MUCH DURATION (in DAYS) = ";
        cin >> du;
    }

    if (n == 3)
    {
        cout << "BOOK TO BUY = ";
        getline(cin, book);
        cout << "NAME OF THE READER = ";
        getline(cin, name);
    }

    if (n == 4)
        cout << "THANK YOU FOR VISITING";
    if (n > 4)
        cout << "WRONG SELECTION";
}