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
    int x = 0;
    int y = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] % 2 == 0)
            x++;

        else
            y++;
    }

    cout << "total even numbers are = " << x << " and total odd numbers in array are = " << y;
}