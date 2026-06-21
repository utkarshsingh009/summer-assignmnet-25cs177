#include <iostream>
#include <string>

using namespace std;

int main()
{
    string rs = "";
    string str;

    cout << "enter the string = ";
    cin >> str;

    int num = str.length();
    for (int i = num - 1; i >= 0; i--)
    {

        rs = rs + str[i];
    }

    cout << "reverse string = " << rs << endl;
}