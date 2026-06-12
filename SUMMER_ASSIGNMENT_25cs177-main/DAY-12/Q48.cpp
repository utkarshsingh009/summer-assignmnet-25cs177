#include <iostream>

using namespace std;

perfectn(int n)
{
    int s = 0;
    int m = n;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {

            s = s + i;
        }
    }
    if (m == s)
        cout << "perfect number";
    else
        cout << "not a perfect number";
}

int main()
{

    int n;
    cout << "enter the number=";
    cin >> n;

    perfectn(n);
}