#include <iostream>

using namespace std;
int main()
{
    int n, s = 1, r, m;

    cout << "enter a number=";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        s = s * r;
        n = n / 10;
    }
    cout << "sum of digit of " << m << " = " << s;
}