#include <iostream>

using namespace std;

int main()
{
    int n1, n2, sum;
    cout << "enter the limit for array 1= ";
    cin >> n1;

    cout << "enter the limit for array 2= ";
    cin >> n2;
    int a[n1];
    int b[n2];
    int merge[n1 + n2];
    cout << "enter the value for array 1 = " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "enter the value for array 2 = " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    // cout << "enter the value fo = " << endl;
    for (int i = 0; i < n2; i++)
    {
        merge[i] = a[i];
    }

    for (int i = 0; i < n2; i++)
    {
        merge[i + n1] = b[i];
    }
    cout << "merge array values are = " << endl;
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << " " << merge[i];
    }
}
