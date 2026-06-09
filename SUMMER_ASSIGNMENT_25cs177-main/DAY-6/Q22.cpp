#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n, m, i = 0, r, s = 0, x = 0;
    cout << "enter the number =";
    cin >> n;
    m = n;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }

    while (x <= i)
    {
        r = m % 10;
        s = s + (pow(2, x) * r);
        m = m / 10;
        x++;
    }
    cout << s;
}