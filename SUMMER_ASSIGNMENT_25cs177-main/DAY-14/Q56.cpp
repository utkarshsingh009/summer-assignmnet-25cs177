#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cout << "enter the limit = ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {

        cout << "value of " << i + 1 << " = ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        int count = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                x = 1;
                break;
            }
        }

        if (x == 1)
            continue;

        for (int j = 0; j <= i; j++)
        {
            if (a[i] == a[j])
                count++;
        }

        cout << "frequency of " << a[i] << " is = " << count << endl;
    }
}