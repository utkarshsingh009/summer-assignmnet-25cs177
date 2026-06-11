#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "enter the number= ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        {
            for (j = 1; j < n + 1 - i; j++)
            {
                cout << " ";
            }
            int k = 1;
            for (int x = 1; x <= i; x++)
            {
                cout << k++;
            }
            for (int m = i - 1; m >= 1; m--)
            {
                cout << m;
            }
        }

        cout << endl;
    }
}