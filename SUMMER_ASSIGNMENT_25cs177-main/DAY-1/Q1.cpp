#include <iostream>

using namespace std;
int main()
{
    int n, i, s = 0;
    cout << "enter a number:-";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
    cout << "sum of all numbers are=" << s;
}