#include <iostream>

using namespace std;
int main()
{
    int n, r, s = 0, m;
    cout << "enter a number=";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        s = 10 * s + r;
        n = n / 10;
    }
    if (s == m)
        cout << "palindrome";
    else
        cout << "not a palindrome";
}