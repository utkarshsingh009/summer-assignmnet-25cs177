#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, num1, num2;

    do
    {
        cout << endl
             << "--------welcome to call management--------" << endl;
        cout << "1. Addition of number " << endl;
        cout << "2. Subract the number" << endl;
        cout << "3. Multiply the number" << endl;
        cout << "4. Devide the number" << endl;
        cout << "5. exit the program";
        cout << "choose one = ";
        cin >> n;

        switch (n)
        {
        case 1:
            cout << "enter num 1 = ";
            cin >> num1;
            cout << "enter num 2 =";
            cin >> num2;
            cout << "sum of 2 numbers = " << num1 + num2;
            break;

        case 2:
            cout << "enter num 1 = ";
            cin >> num1;
            cout << "enter num 2 =";
            cin >> num2;
            cout << "difference of 2 numbers = " << num1 - num2;

            break;
        case 3:
            cout << "enter num 1 = ";
            cin >> num1;
            cout << "enter num 2 =";
            cin >> num2;
            cout << "multiplicaion of 2 numbers = " << num1 * num2;

        case 4:
            cout << "enter num 1 = ";
            cin >> num1;
            cout << "enter num 2 =";
            cin >> num2;
            cout << "after devision of 2 numbers = " << num1 - num2;

        case 5:
            cout << "exiting............";
        }
    } while (n != 5);
}
