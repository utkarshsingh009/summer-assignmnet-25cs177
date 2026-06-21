#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "enter the string = ";
    cin >> str;

    for (auto x : str)
    {
        cout << char(toupper(x));
    }
}