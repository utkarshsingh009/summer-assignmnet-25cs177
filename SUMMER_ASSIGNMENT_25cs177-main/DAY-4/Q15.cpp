#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, x = 0, m, r, z;
    double s = 0;

    cout << "enter the number=";
    cin >> n;
    m = n;
    while (n > 0)
    {
        n = n / 10;
        x++;
    }

    z = m;
    while (m > 0)
    {
        r = m % 10;
        s = s + pow(r, x);
        m = m / 10;
    }

    if (z == s)
        cout << "armstrong number";

    else
        cout << "not a armstrong number";
}