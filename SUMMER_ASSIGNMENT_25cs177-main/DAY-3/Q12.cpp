#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int n1, n2;

    cout << "enter the first number=";
    cin >> n1;
    cout << "enter the second number=";
    cin >> n2;
    int max_val = n1 > n2 ? n1 : n2;
    while (true)
    {
        if (max_val % n1 == 0 && max_val % n2 == 0)
        {
            cout << "lcm=" << max_val;
            break;
        }
        max_val++;
    }
}