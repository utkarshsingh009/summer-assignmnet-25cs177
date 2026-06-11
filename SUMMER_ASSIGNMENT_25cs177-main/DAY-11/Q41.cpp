#include <iostream>

using namespace std;

son(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    int n1, n2;
    cout << "enter number 1= ";
    cin >> n1;
    cout << "enter number 2= ";
    cin >> n2;

    int sum = son(n1, n2);

    cout << "sum of number " << n1 << " and " << n2 << " is = " << sum;
}