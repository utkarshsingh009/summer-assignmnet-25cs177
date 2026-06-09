#include <iostream>

using namespace std;
int main()
{
    int n, i, j, m = 0;

    cout << "enter the number=";
    cin >> n;
    int a = 0;
    for (i = 2; i < n; i++)
    {
        // if (i == 2)
        // cout << i << endl;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                m++;
        }
        if (m == 0)
        {
            if (n % i == 0)
            {
                a = i;
            }
        }

        m = 0;
    }
    cout << "gretest prime factor=" << a;
}
