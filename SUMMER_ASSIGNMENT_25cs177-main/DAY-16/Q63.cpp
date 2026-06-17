#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    cout << "enter the value = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "enter the sum for pairs = ";
    cin >> sum;
    for (int j = 0; j < n; j++)
    {
        for (int m = 0; m < n; m++)
        {
            if (a[j] + a[m] == sum)
                cout << "sum of " << a[j] << " and " << a[m] << " is = " << sum << endl;
        }
    }
}