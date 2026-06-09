#include <iostream>

using namespace std;

sod(int n)
{
    int r;
    while (n > 0)
    {
        r = n % 10;
        return r + sod(n / 10);
    }
}
int main()
{
    int n;

    cout << "enter a number=";
    cin >> n;
    cout << "sum of digits= " << sod(n);
}