#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    cout << "enter the  searching element= ";
    cin >> s;
    for (int i = 0; i < n; i++)
    {

        cout << "value of " << i + 1 << " = ";
        cin >> a[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (s == a[j])
            cout << "searching element is = " << a[j] << " and position is = " << j + 1;
    }
}