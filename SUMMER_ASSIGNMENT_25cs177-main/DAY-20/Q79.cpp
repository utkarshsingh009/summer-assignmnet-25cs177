#include <iostream>

using namespace std;

int main()
{
    int r, c, a[100][100];

    cout << "number of row for matrice = ";
    cin >> r;
    cout << "number of collumn for matrice = ";
    cin >> c;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "value of row " << i + 1 << " and collumn " << j + 1 << " is = ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        int x = 0;
        for (int j = 0; j < c; j++)
        {
            x = x + a[i][j];
        }
        cout << "sum of row " << i + 1 << " values are = " << x << endl;
    }
}