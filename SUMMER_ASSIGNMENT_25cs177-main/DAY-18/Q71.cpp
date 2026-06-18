#include <iostream>

using namespace std;

int main()
{
    int n, i, p, s;
    cout << "enter the limit = ";
    cin >> n;

    int a[n];
    cout << "enter the value of array = " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "enter the value to search = ";
    cin >> s;

    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == s)
            cout << "position of searching element is = " << mid;

        if (a[mid] < s)
            low = mid + 1;

        else
            high = mid - 1;
    }
}