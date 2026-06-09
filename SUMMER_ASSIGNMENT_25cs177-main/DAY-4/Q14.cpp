#include <iostream>

using namespace std;
int main()
{
    int a = 0, b = 1, n, i, c;

    cout << "enter the nth term=";
    cin >> n;

    if (n == 1)
        cout << a;

    if (n == 2)
        cout << b;

    if (n >= 3)
    {
        for (i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
            if (i == n)
                cout << c;
        }
    }
}