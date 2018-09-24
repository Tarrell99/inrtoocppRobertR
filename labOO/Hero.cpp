#include "Hero.h"

void Hero::Fight(Hero & other)
{
	other.TakeDamage(m_Power);

}
	
bool Hero::isAlive()
{
	if (m_Health >= 0)
	{
		return true;
	}
	return false;
}


void Hero::TakeDamage(int effct)
{
	m_Health -= effct;
	std::cout << "fighter took..." << effct << "damsge" << std::endl;
}
