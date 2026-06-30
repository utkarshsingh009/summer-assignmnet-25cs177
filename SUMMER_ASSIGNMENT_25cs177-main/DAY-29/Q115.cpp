#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    char str[100];
    int choice, i, len;

    cout << "Enter an initial string: ";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    while (1)
    {
        cout << "\n--- String Operations System ---\n";
        cout << "1. Reverse String\n2. Convert to Uppercase\n3. Check Length\n4. Exit\n";
        cout << "Enter choice (1-4): ";
        cin >> choice;

        if (choice == 4)
        {
            cout << "Exiting system.\n";
            break;
        }

        len = strlen(str);

        switch (choice)
        {
        case 1:
            cout << "Reversed String: ";
            for (i = len - 1; i >= 0; i--)
            {
                putchar(str[i]);
            }
            cout << "\n";
            break;

        case 2:
            cout << "Uppercase: ";
            for (i = 0; i < len; i++)
            {
                putchar(toupper(str[i]));
            }
            cout << "\n";
            break;

        case 3:
            cout << "Length of string: \n"
                 << len;
            break;

        default:
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}