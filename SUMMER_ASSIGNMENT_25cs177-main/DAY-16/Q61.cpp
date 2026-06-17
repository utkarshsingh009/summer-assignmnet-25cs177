#include <iostream>

using namespace std;

int main()
{
    int ul, ll, i, j, max, n, min, x;
    cout << "enter the limit = ";
    cin >> n;

    int a[n];
    cout << "enter the value of array = " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    min = a[1];
    for (j = 0; j < n; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
        }
        if (min > a[j])
            min = a[j];
    }

    while (min <= max)
    {
        int m = 0;
        int z = 0;

        for (i = 0; i < n; i++)
        {

            if (min == a[i])
            {
                m++;
                // cout << " " << min;
            }
            // continue;
            if (m == 0)
                z++;
            // cout << " " << min;

            if (z == n)
            {
                cout << "missing number is = " << min << endl;
                break;
            }
        }
        min++;
    }
}