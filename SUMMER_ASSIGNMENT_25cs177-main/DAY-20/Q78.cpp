#include <iostream>

using namespace std;

int main()
{
    int r, c, a[100][100], x = 0;

    cout << "number of row for matrice = ";
    cin >> r;
    cout << "number of collumn for matrice = ";
    cin >> c;

    if (r != c)
        cout << " Can't check symmetry";

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
                if (i != j)
                {
                    if (a[i][j] != a[j][i])
                        x++;
                }
            }
        }

        if (x == 0)
        {
            cout << "the matrice is symmetric";
        }

        else
            cout << "matrice is not symmetric";
    }
}
