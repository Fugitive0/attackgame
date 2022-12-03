#include <stdlib.h>
#include <iostream>
#include <vector>
#include <globalVar.h>

using namespace std;



/*
The difficutly function will have an interger parameter that takes what difficulty
the game will be. 1 being the easiest and 5 being the hardest.

each increment will increase the stats by the percentage down below

-----------------------------------------------------------------------

Things that the difficutly will negativly affect:
1. Health of the enemy will increase by 5%
2. Damage of the enemy will increase by 5%

Things that the difficulty will positivitly affect
1. The amount of experince you will get will increase by 25%
2. Money you will get will increase by 5%
*/

int gameDifficulty(int difficulty)
{

}




int main ()
{
  int difficultyInput = 0;
  cout << "welcome to Attack! A game that takes wits and skill!"
       << endl
       << "Select a difficulty between 1 and 5"
       << endl;
  cin >> difficultyInput;

  gameDifficulty(difficultyInput);












  // Game loop

}
