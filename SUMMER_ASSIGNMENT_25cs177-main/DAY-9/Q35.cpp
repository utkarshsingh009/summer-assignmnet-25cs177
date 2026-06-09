#include <iostream>

using namespace std;

int main()

{

    int n, i, j;

    cout << "enter the number of rows= ";
    cin >> n;
    int k = 65;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(i + 64);
        }
        cout << endl;
    }
}