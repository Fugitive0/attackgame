#include <vector>
#include <iostream>
#include <stdlib.h>

class Warrior
{
  
  
  public:
  int energy = 10;
  int health = 75;
  bool isChosen = false;

  Warrior()
  {
    bool isChosen = true;
    std::cout << "Hello I am the warrior!" << std::endl;
  }

  



  int slash(int enemyHealth)
  {
    int damage;

    if (energy != 0)
    {
      damage = 25;
      energy++;
      return damage;
    }
    else
    {
      damage = 0;
      return damage;
    }
  }

};







class Mage
{
  public:
  int energy = 10;
  int health = 50;
  bool isChosen = false;



  Mage ()
  {
    bool isChosen = true;
    std::cout << "Hello i am the mage!" << std::endl;
  }


  int fireball(int enemyHealth)
  {
    int damage;

    if (energy != 0)
    {
      damage = 35;
      energy++;
      return damage;
    }
    else
    {
      damage = 0;
      return damage;
    }
  }
};