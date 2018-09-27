#include "Hero.h"

Hero::Hero()
{
}

Hero::Hero(int hp, int power)
{
	m_health = hp;
	m_power = power;
}

void Hero::Fight(Hero & opponent)
{
	opponent.TakeDamage(m_power);
}

bool Hero::IsAlive()
{
	//K.I.S.S.
	//KEEP
	//IT
	//SIMPLE
	//STUPID
	return (m_health > 0);
	
}

void Hero::TakeDamage(int amount)
{
	m_health = m_health - amount;
}
