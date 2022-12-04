#include <vector>
#include <iostream>
#include <stdlib.h>
#include "globalVar.h"

class Warrior
{
  public:
  int energy = 10;
  int health = 75;


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