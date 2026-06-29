#include <iostream>

using namespace std;

int main()
{
    bool n;
    int chance, num, secnum, v = 0;

    cout << "\t\t\t WELCOME TO THE NUMBER GUESSING GAME \t\t\t" << endl;
    cout << "\t\t\t" << "   " << " CHOOSE YOUR DIFFICULTY LEVEL \t\t\t" << endl
         << " # FOR EASY ENTER- 1" << " # FOR MEDIUM ENTER- 2" << " # FOR DIFFICULT ENTER- 3" << " # FOR ENDING GAME ENTER- 0" << endl
         << "=";
    cin >> n;

    secnum = (rand() % (100 - 1) + 1);

    if (n == true)
    {

        if (n == 1)
        {

            chance = 10;
            cout << "YOU GOT " << chance << " CHANCES FOR THIS LEVEL" << endl;
            for (chance = 9; chance > 0; chance--)
            {
                cout << "GUESS THE NUMBER = ";
                cin >> num;
                if (secnum == num)
                {
                    cout << num << " is the secret number";
                    v++;
                    break;
                }

                else if (secnum > num)
                {
                    cout << "secret number is greater than " << num << endl;
                    cout << chance << " is left" << endl;
                }

                else if (secnum < num)
                {
                    cout << "secret number is smaller than " << num << endl;
                    cout << chance << " is left" << endl;
                }
            }
        }

        if (n == 2)
        {

            chance = 8;
            cout << "YOU GOT " << chance << " CHANCES FOR THIS LEVEL" << endl;
            for (chance = 7; chance > 0; chance--)
            {
                cout << "GUESS THE NUMBER = ";
                cin >> num;
                if (secnum == num)
                {
                    cout << num << " is the secret number" << endl;
                    v++;
                    break;
                }

                else if (secnum > num)
                {
                    cout << "secret number is greater than " << num << endl;
                    cout << chance << " is left";
                }

                else if (secnum < num)
                {
                    cout << "secret number is smaller than " << num << endl;
                    cout << chance << " is left" << endl;
                }
            }
        }

        if (n == 3)
        {

            chance = 5;
            cout << "YOU GOT " << chance << " CHANCES FOR THIS LEVEL" << endl;
            for (chance = 4; chance > 0; chance--)
            {
                cout << "GUESS THE NUMBER = ";
                cin >> num;
                if (secnum == num)
                {
                    cout << num << " is the secret number";
                    v++;
                    break;
                }

                else if (secnum > num)
                {
                    cout << "secret number is greater than " << num << endl;
                    cout << chance << " is left" << endl;
                }

                else if (secnum < num)
                {
                    cout << "secret number is smaller than " << num << endl;
                    cout << chance << " is left" << endl;
                }
            }
        }

        if (v == 0)
        {
            cout << "SORRY , YOU LOST THE GAME!" << endl;
        }
    }

    else
        cout << "end of game";
}