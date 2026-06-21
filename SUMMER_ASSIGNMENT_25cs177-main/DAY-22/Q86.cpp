#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    int v = 0, c = 0;

    cout << "enter the string = ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (int(str[i]) == 32)
            v++;
    }
    cout << "total number of words are = " << v + 1;
}