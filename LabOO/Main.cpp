#include <iostream>
#include "Hero.h"
#include <cstdlib>
#include <ctime>
///ToDo:still needs to make the stacks
///two stacks of 5
///each of them fight each other until only one remain

int main()
{
	srand((unsigned)time(0));
	 Hero *a = new Hero(100, (rand() % 100 + 1));
	 Hero *b = new Hero(100, (rand() % 100 + 1));
	
	while (true)
	{
       a->Fight(*b);
	   b->Fight(*a);
	   //implement some break condition to leave the loop
	   //if hero a's health or hero b's health is less than or equal to zero
	   //break the loop
	   bool bothAlive = a->IsAlive() && b->IsAlive();
	   if (!bothAlive)
		   break;
	   //if a is alive or b is alive == false
	   
	}

}