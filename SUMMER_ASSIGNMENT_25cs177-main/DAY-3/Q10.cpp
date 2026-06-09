#include <iostream>

using namespace std;
int main()
{
    int n1, n2;
    int m = 0, j, i;

    cout << "enter the lower range number=";
    cin >> n1;

    cout << "enter the higher range number=";
    cin >> n2;
    // let the numbers are prime
    for (i = n1; i <= n2; i++)
    {

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                m++;
            }
        }
        if (m == 0)
            cout << i << " is prime\n";
        m = 0;
    }
}