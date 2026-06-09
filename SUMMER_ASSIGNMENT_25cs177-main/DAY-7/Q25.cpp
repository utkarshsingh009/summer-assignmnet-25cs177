#include <iostream>

using namespace std;
int fact(int n)
{
    int s;
    if (n == 0)
        return 1;
    if (n > 0)
    {
        s = n * fact(n - 1);
    }

    return s;
}

int main()
{
    int n, m, factorial;
    int s = 1;
    cout << "enter the number=";
    cin >> n;
    m = n;
    factorial = fact(n);
    cout << "factorial of number " << m << "=" << factorial;
}