#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, r;
    cout << "enter the number= ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        if (r == 1)
            i++;
        n = n / 10;
    }
    cout << "set bit are= " << i;
}