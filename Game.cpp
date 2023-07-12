#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

class Character
{
protected:
   int health = 100;
   string name;

public:
   void Display()
   {
      cout << "Name: " << name << endl;
      if (health <= 0)
      {
         cout << "Health: 0" << endl;
         return;
      }
      cout << "Health: " << health << endl;
   }
};

class Enemy;

class Player : public Character
{
public:
   Player() {}
   Player(string name)
   {
      this->name = name;
   }
   void Attack()
   {
      health = health - 12;
   }
   void Defence(int k)
   {
      if (k == 1)
      {
         health = health + 1;
         cout << "SUPER EFFECTIVE!!!\n";
      }
      else if (k == 3)
         health = health + 2;
      else if (k == 5)
         health = health + 3;
      else
      {
         cout << "SUPER EFFECTIVE!!!\n";
         return;
      }
      return;
   }
   int getHealth()
   {
      if (health > 0)
         return health;
      return 0;
   }
   string getName()
   {
      return name;
   }
};
class Enemy : public Character
{
public:
   Enemy() {}
   Enemy(string name)
   {
      this->name = name;
   }
   void Attack()
   {
      health = health - 12;
   }
   void Defence(int k)
   {
      if (k == 1)
      {
         health = health + 1;
         cout << "SUPER EFFECTIVE!!!\n";
      }
      else if (k == 3)
         health = health + 2;
      else if (k == 5)
         health = health + 3;
      else
      {
         cout << "SUPER EFFECTIVE!!!\n";
         return;
      }
      return;
   }
   int getHealth()
   {
      if (health > 0)
         return health;
      return 0;
   }
   string getName()
   {
      return name;
   }
};

int main()
{
   Player play("Kratos");
   Enemy enemy("Odin");

   int input, key;
   cout << "Battle Begins!!!!!";

   for (int i = 0; i < 50; i++)
   {
      srand((unsigned) time(0));
      int random = 0 + (rand() % 6);

      cout << "\n\nInput:";
      cin >> input;
      cout << endl;

      enemy.Attack();
      enemy.Defence(random);

      play.Display();
      enemy.Display();

      if (play.getHealth() <= 0)
      {
         key = 1;
         break;
      }
      else if (enemy.getHealth() <= 0)
      {
         key = 2;
         break;
      }
      else
      {
      }

      srand((unsigned) time(0));
      random = 0 + (rand() % 6);

      cout << "\nEnemy Input:";
      cin >> input;
      cout << endl;

      play.Attack();
      play.Defence(random);

      play.Display();
      enemy.Display();

      if (play.getHealth() <= 0)
      {
         key = 1;
         break;
      }
      else if (enemy.getHealth() <= 0)
      {
         key = 2;
         break;
      }
      else
         continue;
   }
   if (key == 1)
   {
      cout << "\n"
           << enemy.getName() << " WINS!!!!!\n";
   }
   else if (key == 2)
   {
      cout << "\n"
           << play.getName() << " WINS!!!!!\n";
   }
   else
   {
   }

   return 0;
}