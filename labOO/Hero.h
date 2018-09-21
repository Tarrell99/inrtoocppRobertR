#pragma once
#include <iostream>

class Hero
{
private:
	int m_Health;
	int m_Power;
	int m_Fighters[2]; // array
	int count = 0; // index
public:
	void Fight(Hero&);
	bool isAlive();
	void TakeDamage(int);


};