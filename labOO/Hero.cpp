#include "Hero.h"

void Hero::Fight(Hero & other)
{
	
}

bool Hero::isAlive()
{
	if (m_Health <= 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Hero::TakeDamage(int)
{
	int temp;//Hero1
	int* myDamage = &temp;
	while (myDamage = &temp)
	{
		m_Health - m_Power;
	}
}
