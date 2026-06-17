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

    cout << "intersection of array is = " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (a[i] == b[j])
                cout << " " << a[i] << ",";
        }
    }
}