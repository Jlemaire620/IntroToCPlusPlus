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
	 Hero *CaptianAmerica = new Hero(100, (rand() % 75 + 1));
	 Hero *IronMan = new Hero(100, (rand() % 75 + 1));
	//While the statement is true, hero a fights hero b and hero b fights hero a. 
	 while (true)
	 {
		 CaptianAmerica->Fight(*IronMan);
		 std::cout << "Captain America attacks IronMan" << std::endl;
		 IronMan->Fight(*CaptianAmerica);
		 std::cout << "IronMan attacks Capitan America" << std::endl;
		 system("pause");
		 bool CapAlive = CaptianAmerica->IsAlive();
		 if(!CapAlive)
		 {
			 std::cout << "Capitan America was defeated." << std::endl;
		 }
		 bool IronAlive = IronMan->IsAlive();
		 if (!IronAlive)
		 {
			 std::cout << "IronMan was defeated. " << std::endl;
		 }
		 //If the bool condition for both hero a and hero b are true, the fight continues. The fight ends when one of the hero bool conditions becomes false.
		 //if a is alive or b is alive == false
		 //break the loop
		 bool bothAlive = CaptianAmerica->IsAlive() && IronMan->IsAlive();
		 if (!bothAlive)
		 {
			 std::cout << "The fight has ended." << std::endl;
			 system("pause");
             break;
		 }
			 
	 }

}