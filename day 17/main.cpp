#include <iostream>
#include<ctime>

int ranNum()
{
    int max;
    max = 100;
    srand(time(0));
    for(int i = -1; i<100; i++) {
       return rand() % max + 1;
    }
}
using namespace std;

int main()
{
    double secretNum = ranNum();
    double guess;
    int cnt = 0;
    int limit = 3;
    bool outofguess = false;

    cout << "Please guess a number between 1 to 100!: " << endl;

    while(guess != secretNum && !outofguess)
    {   cin >> guess;
        cnt++;


        if(cnt != limit)
        {

            if(guess < secretNum)
            {
                cout << "Please guess a higher!: " << endl;

            }
            else if(guess > secretNum)
            {
                cout << "Please guess a lower!: " << endl;

            }
            else if(guess == secretNum)
            {
                cout << "You guessed right, congratulations!: " << endl;
            }


        }
        else
        {
            cout << "Sorry! you have reach your guess limit, Game Over: " << endl;
            outofguess = true;
        }

    }

    return 0;
}
