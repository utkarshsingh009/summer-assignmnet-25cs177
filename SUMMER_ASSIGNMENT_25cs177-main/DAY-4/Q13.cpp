#include <iostream>

using namespace std;
int main()
{
    int a = 0, b = 1, c, i, n;
    cout << "enter the lenght of fibonccci series=";
    cin >> n;

    if (n == 1)
        cout << a;

    if (n == 2)
        cout << a << " " << b;

    if (n >= 3)
    {
        cout << a << " " << b;
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
            cout << " " << c;
        }
    }
}