#include <iostream>

using namespace std;

int main()
{
    int r1, r2, c1, c2, a[100][100], b[100][100], c[100][100];

    cout << "number of row for matrice 1 = ";
    cin >> r1;
    cout << "number of collumn for matrice 1 = ";
    cin >> c1;
    cout << "number of row for matrice 2 = ";
    cin >> r2;
    cout << "number of collumn for matrice 2 = ";
    cin >> c2;

    if (r1 != r2 || c1 != c2)
        cout << "Can't add these 2 matrices";

    else
    {
        cout << "\t\t\t for array 1" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "value of row " << i + 1 << " and collumn " << j + 1 << " is = ";
                cin >> a[i][j];
            }
        }

        cout << "\t\t\t for array 2" << endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                cout << "value of row " << i + 1 << " and collumn " << j + 1 << " is = ";
                cin >> b[i][j];
            }
        }

        cout << "\t\t\t sum of these 2 matrices are " << endl;
        for (int i = 0; i < r1; i++)
        {
            cout << " | ";
            for (int j = 0; j < c1; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << " ";
            }
            cout << " | ";
            cout << endl;
        }
    }
}