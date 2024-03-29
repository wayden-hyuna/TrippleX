#include <iostream>
#include "tripplex-helper.cpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Welcome to TripleX - WJ\n";
    cout << "A series of ten (10) codes made up of three (3) numbers are required to break into the vault.\nAre you up for the challenge?\n"
         << endl;

    int Difficulty = 1;

    while (Difficulty <= 10)
    {
        if (playGame(Difficulty))
            Difficulty++;
        else
        {
            break;
        }
    }

    return 0;
}
