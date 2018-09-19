#pragma once
#include <iostream>

class Hero
{
private:
	int m_Health;
	int m_Power;
public:
	void Fight(Hero&);
	bool isAlive();
	void TakeDamage(int)


};