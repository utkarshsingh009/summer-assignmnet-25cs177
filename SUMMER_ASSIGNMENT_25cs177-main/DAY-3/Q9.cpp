#include <iostream>

using namespace std;
int main()
{
    int n, i, m = 0;
    cout << "enter a number=";
    cin >> n;

    // let the number be prime
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            m++;
        }
    }
    if (m == 0)
    {
        cout << "the number is prime";
    }
    if (m > 0)
        cout << "the number is not prime";
}