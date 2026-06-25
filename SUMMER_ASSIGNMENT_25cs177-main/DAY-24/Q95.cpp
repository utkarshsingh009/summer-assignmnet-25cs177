#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int i, j;
    cout << "enter the limit = ";
    getline(cin, str);

    int c = 1;
    int v = 0;
    cout << str.length() << endl;

    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) == 32 || i == str.length())
        {
            if (c < v)
            {
                c = v;
            }
            v = 0;
        }

        if (i == str.length() - 1)
        {
            if (c < v)
            {
                c = v;
            }
            v = 0;
        }

        else
            v++;

        // cout << v << endl;
    }

    cout << "longest word has " << c << " characters" << endl;
}