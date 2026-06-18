#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cout << "enter the limit = ";
    cin >> n;

    int a[n];
    cout << "enter the value of array = " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int c = a[j];
                a[j] = a[i];
                a[i] = c;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
}