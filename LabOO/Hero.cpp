#include "Hero.h"

void Hero::Fight(Hero &)
{
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

int Hero::TakeDamage()
{
	return 0;
}
