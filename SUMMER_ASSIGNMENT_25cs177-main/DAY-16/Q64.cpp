#include <iostream>

using namespace std;

int main()
{
    int n, sum;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    cout << "enter the value = " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "new array are = " << endl;
    int dupli = 0;
    for (int j = 0; j < n; j++)
    {
        int x = 0;
        for (int m = j; m < n; m++)
        {
            if (a[j] == a[m] && a[j] != dupli)
            {
                x++;
                dupli = a[j];
            }
        }
        if (x > 0)
        {
            cout << " " << a[j];
        }
        continue;
    }
}