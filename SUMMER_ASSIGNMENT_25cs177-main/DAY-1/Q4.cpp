#include <iostream>

using namespace std;
int main()
{
    int n, i = 0;
    cout << "enter a number=";
    cin >> n;
    int m = n;
    while (n > 0)
    {
        n = n / 10;
        i++;
    }
    cout << "number " << m << " has " << i << " digits.";
}