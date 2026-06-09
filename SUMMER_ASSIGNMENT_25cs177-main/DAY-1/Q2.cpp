#include <iostream>

using namespace std;
int main()
{
    int n, i;
    cout << "enter a number";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        /* code */ cout << n << "*" << i << "=" << n * i << "\n";
    }
}