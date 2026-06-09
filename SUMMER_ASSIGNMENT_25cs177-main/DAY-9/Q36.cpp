#include <iostream>

using namespace std;

int main()

{

    int n, i, j;

    cout << "enter the number of rows= ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}