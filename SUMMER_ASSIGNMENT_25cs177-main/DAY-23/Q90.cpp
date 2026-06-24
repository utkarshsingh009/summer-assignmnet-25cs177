#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;

    cout << "enter the string = ";
    getline(cin, str);

    for (char ch : str)
    {
        int v = 0;
        for (char gh : str)
        {
            if (ch == gh)
                v++;
        }
        if (v > 1)
        {
            cout << ch << " is first repeating character = " << v << " times";
            break;
        }
    }
}