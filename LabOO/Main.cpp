#include <iostream>
#include "Hero.h"
#include <cstdlib>
#include <ctime>
int main()
{
	Hero *a = new Hero(500, 100);	
	Hero *b = new Hero(350, 100);

	while (true)
	{
       a->Fight(*b);
	   b->Fight(*a);
	   break;
	}
}