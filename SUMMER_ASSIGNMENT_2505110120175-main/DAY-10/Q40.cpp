#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cout << "enter the number= ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < n + 1 - i; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        for (int x = 1; x <= i; x++)
        {
            cout << ch;
            ch++;
        }
        ch -= 2; // Step back to the previous character
        for (int j = 1; j < i; j++)
        {
            cout << ch;
            ch--;
        }
        cout << endl;
    }
}