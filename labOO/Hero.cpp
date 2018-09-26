#include "Hero.h"


Hero::Hero()
{
	m_Health = 100;

	m_Power;

	m_Name = new char [255];
}

bool Hero::operator == (Hero & other)
{
	return m_Health == other.m_Health && m_Health == other.m_Health;
}

int Hero::GetHealth()
{
	
	return m_Health;
}

void Hero::getName(const char* heroName)
{
	m_Name = heroName;
}

void Hero::sayName()
{
	std::cout << m_Name;
}


void Hero::Fight(Hero & other)
{
	m_Power = rand() % 25 + 1;
	other.TakeDamage(m_Power);
	
}

bool Hero::isAlive()
{
	if (m_Health > 0)
	{
		return true;
	}
	return false;
}


void Hero::TakeDamage(int effct)
{
	m_Health -= effct;
	std::cout <<  m_Name << " took..." << effct << "damsge" << std::endl;
	
}


