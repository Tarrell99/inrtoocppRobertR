#pragma once
#include <iostream>

class Hero
{
private:
	int m_Health = 100;
	int m_Power = 50;
public:
	void Fight(Hero& other);
	bool isAlive();
	void TakeDamage(int amount);
	bool operator == (Hero & other)
	{
		return m_Health == other.m_Health && m_Health == other.m_Health;
	}

	int GetHealth()
	{
		return m_Health;
	}

	int GetPower()
	{
		return m_Power;
	}
};