#include <iostream>
#include <stdlib.h>
using namespace std;

bool checkSuccess(int CodeSum, int CodeProd, int GuessSum, int GuessProd, int Difficulty);
bool playGame(int Difficulty);

bool playGame(int Difficulty)
{
    cout << "# Entering Level " << Difficulty << "\n";

    int Code_A = rand() % Difficulty + Difficulty;
    int Code_C = rand() % Difficulty + Difficulty;
    int Code_B = rand() % Difficulty + Difficulty;

    int Guess_A = 0;
    int Guess_C = 0;
    int Guess_B = 0;

    int CodeSum = Code_A + Code_B + Code_C;
    int CodeProd = Code_A * Code_B * Code_C;

    cout << "# The codes add up to: " << CodeSum << endl;
    cout << "# The product of the codes are: " << CodeProd << endl
         << endl;

    cin >> Guess_A;
    cin >> Guess_B;
    cin >> Guess_C;

    int GuessSum = Guess_A + Guess_B + Guess_C;
    int GuessProd = Guess_A * Guess_B * Guess_C;

    return checkSuccess(CodeSum, CodeProd, GuessSum, GuessProd, Difficulty);
}

bool checkSuccess(int CodeSum, int CodeProd, int GuessSum, int GuessProd, int Difficulty)
{
    if (CodeSum == GuessSum && CodeProd == GuessProd && Difficulty != 10)
    {
        cout << "\nGreat job!\nOnto the next level!\n\n";
        return true;
    }
    else if (CodeSum == GuessSum && CodeProd == GuessProd && Difficulty == 10)
    {
        cout << "\nGreat job!\nYou are in the vault!\nCongratulations\n";
        return true;
    }
    else
    {
        cout << "\n you lose ! :(\n\n";
        return false;
    }
}
