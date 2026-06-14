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

    for (int y = 0; y < n; y++)
    {
        int x = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[y] == a[j])
                x++;
        }
        cout << "frequency of " << a[y] << " = " << x << endl;
    }
}