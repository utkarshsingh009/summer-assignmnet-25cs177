#include <iostream>

using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100];

    cout << "number of row for matrice = ";
    cin >> r;
    cout << "number of collumn for matrice = ";
    cin >> c;

    if (r != c)
        cout << "Can't transpose this matrice";

    else
    {
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
            for (int j = 0; j < c; j++)
            {
                b[j][i] = a[i][j];
            }
        }

        for (int j = 0; j < r; j++)
        {
            cout << " | ";
            for (int i = 0; i < c; i++)
            {
                cout << b[j][i] << " ";
            }
            cout << " | ";
            cout << endl;
        }
    }
}