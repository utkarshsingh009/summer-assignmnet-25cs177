#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n1, n2, i, ul, ll, m, r, z, y, n;

    cout << "enter lower limit number=";
    cin >> n1;
    cout << "enter the upper limit number=";
    cin >> n2;
    if (n1 > n2)
    {
        ll = n2;
        ul = n1;
    }
    else
    {

        ll = n1;
        ul = n2;
    }
    i = ll;
    do
    {
        double s = 0;
        int
            x = 0;
        n = i;

        while (n > 0)
        {
            n = n / 10;
            x++;
        }
        m = i;
        while (m > 0)
        {
            r = m % 10;
            s = s + pow(r, x);
            m = m / 10;
        }

        if (i == s)
        {
            cout << i << endl;
        }
        i++;
    } while (i <= ul);
}
