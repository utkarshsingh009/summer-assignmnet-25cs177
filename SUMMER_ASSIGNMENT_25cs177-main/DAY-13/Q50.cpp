#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the limit of array= ";
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "value of " << i + 1 << " = ";
        cin >> a[i];
        s = s + a[i];
    }
    cout << "Average and sum of array are = " << s << " and " << s / n;
}