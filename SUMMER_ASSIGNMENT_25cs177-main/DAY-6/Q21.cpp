#include <iostream>

using namespace std;

int main()
{
    int n, r, s = 0, z = 0, m;
    cout << "enter the number=";
    cin >> n;

    while (n > 0)
    {

        r = n % 2;
        s = 10 * s + r;
        n = n / 2;
    }
    m = s;

    while (s > 0)
    {
        m = s % 10;
        z = 10 * z + m;
        s = s / 10;
        if (s == 0)
            z = 10 * z + s;
    }
    cout << z;
}