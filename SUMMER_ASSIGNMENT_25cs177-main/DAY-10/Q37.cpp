#include <iostream>

using namespace std;

int main()

{

    int n, i, j, x;

    cout << "enter the number of rows= ";
    cin >> n;

    int nst = 1;
    int nsp = n - 1;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nsp; j++)
        {
            cout << " ";
        }
        nsp--;
        for (x = 1; x <= nst; x++)
        {
            cout << "*";
        }
        nst += 2;
        cout << endl;
    }
}