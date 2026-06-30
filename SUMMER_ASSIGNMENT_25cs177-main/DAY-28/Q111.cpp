#include <iostream>
#include <string>

using namespace std;

struct travel
{
    string name;
    int age;
};

int main()
{
    int n, num, x = 0, food;
    string ST, END, na;

    travel candi[100];

    do
    {
        cout << "--------WELCOME TO TICKET BOOKING--------" << endl;
        cout << "1. BOOK A TICKET" << endl;
        cout << "2. CANCEL A TICKET" << endl;
        cout << "3. EXIT " << endl;
        cout << "CHOOSE ONE =";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "JOURNEY STARTS FROM = ";
            cin >> ST;
            cout << "JOURNEY ENDS = ";
            cin >> END;
            cout << "NUMBER OF TICKET TO BOOK";
            cin >> num;
            for (int i = 0; i < num; i++)
            {
                cout << "enter the name =";
                cin >> candi[i].name;
                cout << "enter the age = ";
                cin >> candi[i].age;

                cout << "want food for this ticket (1(for yes) / 0(for no)) = ";
                cin >> food;

                if (food == 1)
                {
                    cout << "food is added" << endl;
                }
            }
            break;

        case 2:
            cout << "want to see the all ticket (1(for yes) / 0(for no)) = ";
            cin >> food;

            if (food == 1)
            {
                for (int i = 0; i < num; i++)
                {
                    cout << candi[i].name << endl;
                    cout << candi[i].age << endl;

                    cout << "--------------------------" << endl;
                }
            }

            cout << "which ticket you want to cancel" << endl
                 << " enter the name = ";
            cin >> na;
            for (int i = 0; i < num; i++)
            {
                if (candi[i].name == na)
                {
                    cout << "this ticket has been cancelled";
                }
                candi[i].name = candi
                    x++;
            }

            break;

        case 3:
            cout << "exiting..............";
        }
    } while (n != 3);
}