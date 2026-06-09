#include <iostream>

using namespace std;

ron(int n, int rev = 0)
{
    int r;
    if (n == 0)
        return rev;

    r = n % 10;
    rev = 10 * rev + r;
    return ron(n / 10, rev);
}

int main()

{
    int n;
    cout << "enter a number= ";
    cin >> n;

    cout << "reverse number= " << ron(n);
}