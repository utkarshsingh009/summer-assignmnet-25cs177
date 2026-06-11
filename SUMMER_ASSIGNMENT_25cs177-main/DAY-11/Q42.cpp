#include <iostream>

using namespace std;

maxi(int n1, int n2)
{

    if (n1 > n2)
        return n1;

    else
        return n2;
}

int main()
{
    int n1, n2;
    cout << "enter number 1= ";
    cin >> n1;
    cout << "enter number 2= ";
    cin >> n2;

    int maximum = maxi(n1, n2);
    cout << maximum << " is the maximum value among " << n1 << " and " << n2;
}