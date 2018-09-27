#pragma once
#include <iostream>
#include <string>

//Descsribing what a hero class contains and what each hero has.
class Hero
{
  //Each hero has health and power.
private:
	int m_health;
	int m_power;

public:
	//Each hero is assigned a function that allows them to fight, see if they are alive, and take damage.
	Hero();
	Hero(int hp, int power);

	void Fight(Hero&);

	bool IsAlive();
	
	void TakeDamage(int amount);
};
