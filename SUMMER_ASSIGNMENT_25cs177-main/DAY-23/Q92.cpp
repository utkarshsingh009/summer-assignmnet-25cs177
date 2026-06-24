#include <iostream>
#include <string>

using namespace std;

int main()
{
    int v = 1;
    char alp;
    string str;

    cout << "enter the string = ";
    getline(cin, str);

    for (char ch : str)
    {
        int c = 0;
        for (char gh : str)
        {
            if (ch == gh)
                c++;
        }

        if (c > v)
        {
            int t = v;
            v = c;
            c = t;
            alp = ch;
        }
    }
    cout << alp << " has max frequency = " << v << " times";
}