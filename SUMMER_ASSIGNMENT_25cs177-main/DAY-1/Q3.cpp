#include <iostream>

using namespace std;
int main()
{

    int n, s = 1;
    cout << "enter a number=";
    cin >> n;
    int m = n;
    while (n > 0)
    {
        s = s * n;
        n--;
    }
    cout << "factorial of " << m << " is=" << s;
}