#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int number = rand() % 100;
    int guess = -1;
    int tryCount = 0;

    while( guess != number && tryCount < 8 )
    {
        cout << "Please enter a guess: ";
        cin >> guess;

        if( guess < number )
        {
            cout << "Too Low!" << endl;
        }
        
        if( guess > number )
        {
            cout << "Too High!" << endl;
        }

        tryCount++;
    }

    if( guess == number )
    {
        cout << "Correct!" << endl;
    }

    else
    {
        cout << "Sorry The Number Was: " << number << endl;
    }

    return 0;   
}