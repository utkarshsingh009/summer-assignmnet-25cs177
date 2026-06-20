#include <iostream>

using namespace std;

int main()
{
    int r, c, a[100][100], b[100][100], s = 0, z = 0;

    cout << "number of row for matrice = ";
    cin >> r;
    cout << "number of collumn for matrice = ";
    cin >> c;

    if (r != c)
        cout << "Can't add diagonal";

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
                if (i == j)
                    s = s + a[i][j];
            }
        }

        cout << "sum of left diagonal = " << s << endl;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i + j == r - 1)
                    z = z + a[i][j];
            }
        }
        cout << "sum of right diagonal = " << z;
    }
}
