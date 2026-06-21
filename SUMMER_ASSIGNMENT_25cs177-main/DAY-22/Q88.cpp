#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int v = 0;

    cout << "enter the string = ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) == 32)
        {
            v++;
        }
    }

    int n = str.length();

    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {

            for (int j = i; j < n - 1; j++)
            {
                str[j] = str[j + 1];
            }
            n--;
            i--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
}