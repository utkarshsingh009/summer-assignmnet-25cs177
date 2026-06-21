#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;
    int v = 0, c = 0;

    cout << "enter the string = ";
    cin >> str;

    for (char ch : str)
    {
        ch = tolower(ch);
        cout << ch << endl;

        if (isalpha(ch))
        {

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                v++;

            else
                c++;
        }
    }

    cout << "number of vowel = " << v << endl;
    cout << "number of consonent = " << c << endl;
}