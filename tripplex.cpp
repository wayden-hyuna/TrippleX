#include <iostream>
using namespace std;

int main()
{
    int Code_A = 3;
    int Code_C = 3;
    int Code_B = 4;

    int Guess_A;
    int Guess_C;
    int Guess_B;

    int CodeSum = Code_A + Code_B + Code_C;
    int CodeProd = Code_A * Code_B * Code_C;
    cout << CodeProd << " " << CodeSum;
    cin >> Guess_A, Guess_B, Guess_C;

    int GuessSum = Guess_A + Guess_B + Guess_C;
    int GuessProd = Guess_A * Guess_B * Guess_C;

    if (CodeSum == GuessSum and CodeProd == GuessProd)
    {
        cout << "\n you win!";
    }

    return 0;
}
