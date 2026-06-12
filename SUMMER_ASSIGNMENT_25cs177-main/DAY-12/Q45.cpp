#include <iostream>

using namespace std;

pallindrome(int n)
{
    int m = n;
    int s = 0;
    while (n > 0)
    {
        int r = n % 10;
        s = 10 * s + r;
        n = n / 10;
    }
    if (m == s)
        cout << "pallindrome";
    else
        cout << "not a pallindrome";
}

int main()
{

    int n;
    cout << "enter the number= ";
    cin >> n;
    pallindrome(n);
}