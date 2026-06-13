#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "value of " << i + 1 << " = ";
        cin >> a[i];
    }

    int max = a[0];
    for (int j = 0; j < n; j++)
    {
        if (a[j] > max)
            max = a[j];
    }
    cout << "maximum value of array is = " << max;
}