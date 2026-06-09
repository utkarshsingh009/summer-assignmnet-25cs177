#include <iostream>

using namespace std;

int main()
{
    int n, p, s = 1;

    cout << "enter the number= ";
    cin >> n;
    cout << "enter the power=";
    cin >> p;

    while (p > 0)
    {
        s = s * n;
        p--;
    }
    cout << "value= " << s;
}