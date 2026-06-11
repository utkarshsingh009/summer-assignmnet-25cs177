#include <iostream>

using namespace std;

p(int n, int x)
{
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            x++;
        }
    }
    if (x > 0)
        cout << "number is not prime ";

    else
        cout << "number is prime";
}

int main()
{

    int n;
    cout << "enter the number= ";
    cin >> n;
    int x = 0;
    int prime = p(n, x);
}