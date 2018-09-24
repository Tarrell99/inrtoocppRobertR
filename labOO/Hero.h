#pragma once
#include <iostream>

class Hero
{
private:
	int m_Health = 100;
	int m_Power = 50;
public:
	void Fight(Hero&);
	bool isAlive();
	void TakeDamage(int);
	bool operator == (Hero & other)
	{
		return m_Health == other.m_Health && m_Health == other.m_Health;
	}
	int* getHealth = &m_Health;
	int* getPower = &m_Power;
};