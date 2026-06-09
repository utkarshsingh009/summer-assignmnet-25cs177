#include <iostream>

using namespace std;

int main()

{

    int n, i, j;

    cout << "enter the number of rows= ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 65; j <= i + 64; j++)
        {
            cout << char(j);
        }
        cout << endl;
    }
}