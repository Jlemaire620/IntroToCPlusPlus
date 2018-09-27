#include <iostream>
#include "Hero.h"
#include <cstdlib>
#include <ctime>
///ToDo:still needs to make the stacks
///two stacks of 5
///each of them fight each other until only one remain


//Hero a and b are assigned a set amount of health and a random amount of power.
int main()
{
	srand((unsigned)time(0));
	 Hero *a = new Hero(100, (rand() % 100 + 1));
	 Hero *b = new Hero(100, (rand() % 100 + 1));
	//While the statement is true, hero a fights hero b and hero b fights hero a. 
	 while (true)
	 {
		 a->Fight(*b);
		 b->Fight(*a);
		 //If the bool condition for both hero a and hero b are true, the fight continues. The fight ends when one of the hero bool conditions becomes false.
		 //if a is alive or b is alive == false
		 //break the loop
		 bool bothAlive = a->IsAlive() && b->IsAlive();
		 if (!bothAlive)
			 break;
	 }

}