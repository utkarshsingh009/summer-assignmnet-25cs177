#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int i, j, s;
    cout << "enter the string = ";
    getline(cin, str);

    for (i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                char c = str[j];
                str[j] = str[i];
                str[i] = c;
            }
        }
    }

    for (int i = 0; i < str.length(); i++)
    {
        int x = 0;
        int count = 0;

        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                x = 1;
                break;
            }
        }

        if (x == 1)
            continue;

        for (int j = 0; j <= i; j++)
        {
            if (str[i] == str[j])
                count++;
        }

        cout << str[i] << count;
    }
}