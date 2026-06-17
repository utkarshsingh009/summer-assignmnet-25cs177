#include <iostream>

using namespace std;

int main()
{
    int n, s, l;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    cout << "enter the value = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int c = 0;
    int z;
    for (int j = 0; j < n; j++)
    {
        int x = 0;
        for (int m = 0; m < n; m++)
        {

            if (a[j] == a[m])
            {
                x++;
            }
        }
        if (x > c)
        {
            c = x;
            z = a[j];
        }
    }
    cout << "maximum frequency is = " << c << " of value " << z;
}
