#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int n, a, i;

    cout << "Enter the string: ";
    getline(cin, str);

    cout << "Enter number of rotations: ";
    cin >> a;

    // a = a % n;

    while (a--)
    {
        int left = str[0];

        for (i = 0; i < str.length(); i++)
        {
            str[i] = str[i + 1];
        }

        str[str.length() - 1] = left;
    }

    cout << "Array after rotation: ";
    for (i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }
}