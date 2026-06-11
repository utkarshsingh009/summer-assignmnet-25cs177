#include <iostream>

using namespace std;

factorial(int n)
{
    int s = 1;
    while (n > 0)
    {
        s = s * n;
        n--;
    }
    return s;
}
int main()
{
    int n;
    cout << "enter the number= ";
    cin >> n;
    int fact = factorial(n);

    cout << "factorial value of " << n << " = " << fact;
}