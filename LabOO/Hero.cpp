#include "Hero.h"

//Default hero contructor.
Hero::Hero()
{
}
//Takes the value of m_health and m_power(declared in the hero.h header) and assignes them to new values called hp and power.
Hero::Hero(int hp, int power)
{
	m_health = hp;
	m_power = power;
}
//Allows one hero to fight another by stating that the hero's opponent takes damage based on the opponents power.
void Hero::Fight(Hero & opponent)
{
	opponent.TakeDamage(m_power);
}
//Checks to see if any hero is still alive. This is true as long as hero heath is above 0.
bool Hero::IsAlive()
{
	//K.I.S.S.
	//KEEP
	//IT
	//SIMPLE
	//STUPID
	return (m_health > 0);
	
}
//Allows Hero's to take damage by subtracting their current health by the amount of damage that was delt by the opponent.
void Hero::TakeDamage(int amount)
{
	m_health = m_health - amount;
}
