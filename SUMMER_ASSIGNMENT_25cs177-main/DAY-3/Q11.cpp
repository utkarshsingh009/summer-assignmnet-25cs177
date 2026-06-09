#include <iostream>
#include <numeric>
using namespace std;

int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}
int main()
{
    int a, b;

    cout << "enter the first number=";
    cin >> a;

    cout << "enter the second number=";
    cin >> b;

    cout << findGCD(b, a % b);
}