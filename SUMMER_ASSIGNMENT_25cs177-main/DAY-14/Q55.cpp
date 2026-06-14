#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {

        cout << "value of " << i + 1 << " = ";
        cin >> a[i];
    }

    int max = a[0];
    int max2 = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
        {
            max = a[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (max2 < a[i])
        {
            if (a[i] != max)
                max2 = a[i];
        }
    }
    cout << "second maximum value is = " << max2;
}