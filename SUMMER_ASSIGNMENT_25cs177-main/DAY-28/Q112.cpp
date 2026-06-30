#include <iostream>
#include <string>

using namespace std;
struct contact
{
    string name;
    int pnum;
};

int main()
{
    contact c[100];
    int n, num;
    string cname;

    do
    {
        cout << endl
             << "--------welcome to call management--------" << endl;
        cout << "1. Add to contact" << endl;
        cout << "2. search a contact" << endl;
        cout << "3. exit contact" << endl;
        cout << "choose one = ";
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "how many contact to add = ";
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cout << "enter the name = ";
                cin >> c[i].name;
                cout << "enter the number = ";
                cin >> c[i].pnum;
            }
            break;

        case 2:

            cout << "enter the name to search = ";
            cin >> cname;
            for (int i = 0; i < num; i++)
            {
                if (cname == c[i].name)
                {
                    cout << c[i].name << endl
                         << c[i].pnum;
                    break;
                }
            }
            break;

        case 3:
            cout << "exiting............";
        }
    } while (n != 3);
}