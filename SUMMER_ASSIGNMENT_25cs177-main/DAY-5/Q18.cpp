#include <iostream>

using namespace std;
int main()
{

    int n, r, s = 1, z = 0, m;
    cout << "enter the number=";
    cin >> n;
    m = n;
    while (n > 0)
    {
        s = 1;
        r = n % 10;
        while (r > 0)
        {
            s = s * r;
            r--;
        }
        z = z + s;

        n = n / 10;
    }
    if (z == m)
        cout << "this is strong number";
    else
        cout << "this is not a strong number";
}