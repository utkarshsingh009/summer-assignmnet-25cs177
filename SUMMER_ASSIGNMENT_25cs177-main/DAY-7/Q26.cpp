#include <iostream>

using namespace std;

fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int n, a = 0, b = 1, i;
    cout << "enter number for fibonacci series= ";
    cin >> n;
    cout << "fibonacci series are=";
    for (i = 0; i < n; i++)
    {

        cout << fibo(i) << "\t";
    }
}