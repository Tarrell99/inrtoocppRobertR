#pragma once
#include <iostream>

class Hero
{
private:
	int m_Health;
	int m_Power;
	const char* m_Name;
public:
	Hero();
	void Fight(Hero& other);
	bool isAlive();
	void TakeDamage(int amount);
	bool operator == (Hero & other);
	int GetHealth();
	void getName(const char*);
	void sayName();
	
	

};