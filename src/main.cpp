#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>
#include "Characters.h"

using namespace std;

int OVERALL_ENEMY_DAMAGE = 50;
int EXP_PERCENTAGE = 25;
int MONEY_PERCENTAGE = 25;

/*
The difficutly function will have an interger parameter that takes what difficulty
the game will be. 1 being the easiest and 5 being the hardest.

each increment will increase the stats by the percentage down below

-----------------------------------------------------------------------

Things that the difficutly will negativly affect:
damage will increase by 5%/10%/15%/20%/25%

Things that the difficulty will positivitly affect
1. The amount of experince you will get will increase by 25%/50%/75%/100%/125%
2. Money you will get will increase by 25%/50%/75%/100%/125%
*/

int gameDifficulty(int difficulty)
{
  if (difficulty == 1)
  {
    OVERALL_ENEMY_DAMAGE += 3;
    EXP_PERCENTAGE += 6;
    MONEY_PERCENTAGE += 6;
  }
  if (difficulty == 2)
  {
    OVERALL_ENEMY_DAMAGE += 6;
    EXP_PERCENTAGE += 12;
    MONEY_PERCENTAGE += 12;
  }
  if (difficulty == 3)
  {
    OVERALL_ENEMY_DAMAGE += 9;
    EXP_PERCENTAGE += 18;
    MONEY_PERCENTAGE += 18;
  }
  if (difficulty == 4)
  {
    OVERALL_ENEMY_DAMAGE += 12;
    EXP_PERCENTAGE += 24;
    MONEY_PERCENTAGE += 24;
  }
  if (difficulty == 5)
  {
    OVERALL_ENEMY_DAMAGE += 15;
    EXP_PERCENTAGE += 30;
    MONEY_PERCENTAGE += 30;
  }
  
  
  
}

/*
The menu function have an interger paramerter and if that number is a specific number,
will take them to a specific part of the menu

1. Start
will start the game

2. Level up
will level up the character according to how much exp they have
leveling: 
1 = 100/ 2 = 200 / 3 = 400 / 4 = 500 / ...

3. Exit
leave the game

*/




void levelup()
{
  cout << "Level up";
}



 




void menu () 
{

int menuSelection = 0;
  cout << "1. Play"
       << endl
       << "2. Level up"
       << endl
       << "3. Exit"
       << endl;
  cin >> menuSelection;




if (menuSelection == 1)
{
  cout << "Starting preGameLoop"
       << endl;
}

if (menuSelection == 2)
{
  levelup();
  cout << endl;
  menu();
  cout << endl;

}

if (menuSelection == 3)
{
  cout << "thanks for playing";
}

}







int main ()
{
  int difficultyInput = 0;
  cout << "welcome to Attack! A game that takes wits and skill!"
       << endl
       << "Select a difficulty between 1 and 5"
       << endl;
  cin >> difficultyInput;
  cout << endl;

  gameDifficulty(difficultyInput);
  cout << OVERALL_ENEMY_DAMAGE << endl;
  
menu();






// Pre game loop




string characterSelect; 

cout << "Pick a character:"               
     << endl
     << "Warrior (1)"
     << endl
     << "Mage (2)"
     << endl;

cin >> characterSelect;
cout << endl;

if (characterSelect == "1")
{
  Warrior warrior;
}

if (characterSelect == "2")
{
  Mage mage;
}



// Gameloop









}



