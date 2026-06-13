#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the limit for the array= ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "enter the value of " << i + 1 << " = ";
        cin >> a[i];
    }

    cout << "values of array are:-";
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << endl;
    }
}