#include <iostream>
#include <cmath>

using namespace std;

armstrong(int n)
{
    int x = 0;
    int m = n;
    while (n > 0)
    {
        n = n / 10;
        x++;
    }
    int z = m;
    float s = 0;

    while (m > 0)
    {
        int r = m % 10;
        s = s + pow(r, x);
        m = m / 10;
    }

    if (z == s)
        cout << "armstrong number";

    else
        cout << "not a armstrong number";
}

int main()
{
    int n;
    cout << "enter the number= ";
    cin >> n;
    armstrong(n);
}