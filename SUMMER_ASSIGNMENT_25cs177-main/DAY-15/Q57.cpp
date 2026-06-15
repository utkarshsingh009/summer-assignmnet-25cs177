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

    int b[n];

    cout << "reversed array =" << endl;
    for (int j = 0; j < n; j++)
    {

        b[j] = a[n - 1 - j];
        cout << " value of " << j + 1 << " = " << b[j] << endl;
    }
}