#include <iostream>

using namespace std;

fibo(int n, int a, int b)
{
    if (n == 1)
        cout << a;

    else if (n == 2)
        cout << a << " " << b;

    if (n >= 3)
    {
        cout << a << " " << b;

        for (int i = 3; i <= n; i++)
        {
            int c = a + b;
            a = b;
            b = c;
            cout << " " << c;
                }
    }
}

int main()
{

    int n, a = 0, b = 1;
    cout << "enter the nth term for fibonacci= ";
    cin >> n;

    fibo(n, a, b);
}