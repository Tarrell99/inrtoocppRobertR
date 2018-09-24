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


};