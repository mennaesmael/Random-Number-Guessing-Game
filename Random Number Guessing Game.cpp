#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main ()
{
    int const min_num=1;
    int const max_num=100;
    int g_number;
    int number;
    unsigned seed = time(0);
    srand(seed);
    g_number = (rand() % (max_num - min_num + 1)) + min_num;
 cout << " The guessing  number is " << g_number <<endl;
    cout << " This is  a Random Number Guessing Game\n you should figured out The number\n please inter a Number !\n";
    cin >> number;
    while (number != g_number)
    {
        if (number > g_number)

        {
            cout << " Too high. Try again." << endl;
        cin >> number;
        }

        else if (number < g_number )
        {
            cout << "Too low. Try again." << endl;
            cin >> number;

        }

    }

    if (number == g_number)
    {
        cout << "Congratulations. You figured out my number.\n Thank you for playing:)" << endl;
    }
    return 0;
}
