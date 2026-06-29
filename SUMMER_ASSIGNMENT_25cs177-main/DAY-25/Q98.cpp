#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, gtr, mtr;
    int i, j, s, v = 0;
    cout << "enter the string = ";
    getline(cin, str);

    cout << "enter the string = ";
    getline(cin, gtr);

    for (i = 0; i < str.length(); i++)
    {
        for (j = 0; j < gtr.length(); j++)
        {
            if (str[i] == gtr[j])
            {
                mtr[v] = gtr[j];
                // cout << gtr[j] << endl;
                v++;
            }
        }
    }

    for (i = 0; i < v; i++)
    {
        for (int j = i + 1; j < v; j++)
        {
            if (mtr[i] > mtr[j])
            {
                char c = mtr[j];
                mtr[j] = mtr[i];
                mtr[i] = c;
            }
        }
    }

    cout << "common character in these 2 strings = " << endl;
    for (int i = 0; i < v; i++)
    {
        int x = 0;
        int count = 0;

        for (int j = i + 1; j < v; j++)
        {
            if (mtr[i] == mtr[j])
            {
                x = 1;
                break;
            }
        }

        if (x == 1)
            continue;

        for (int j = 0; j <= i; j++)
        {
            if (mtr[i] == mtr[j])
                count++;
        }

        cout << mtr[i] << endl;
    }
}