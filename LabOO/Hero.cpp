#include "Hero.h"

Hero::Hero(int hp, int power)
{
	hp = 300;
	power = 50;
}

void Hero::Fight(Hero & opponent)
{
	opponent.TakeDamage(m_power);
}

bool Hero::IsAlive()
{
	if (m_health == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}


void Hero::TakeDamage(int amount)
{
	m_health = m_health - amount;
}
