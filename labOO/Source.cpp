HERO.H
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

/////////////////////////////////////////
HERO.CPP
#include "Hero.h"

//the hp power and name all off heros
Hero::Hero()
{
	m_Health = 100;

	m_Power;

	m_Name = new char[255];
}
// retrus hp
bool Hero::operator == (Hero & other)
{
	return m_Health == other.m_Health && m_Health == other.m_Health;
}
// nothing 
int Hero::GetHealth()
{

	return m_Health;
}
// gets the name form m_name
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
	std::cout << m_Name << " took..." << effct << "damsge" << std::endl;

}
////////////////////////////////////////////////
STACK.H
#include "Hero.h"

class Stack
{
private:
	Hero mData[4];//array
	int mCount;// index

public:
	// tells what is on the top of the stack
	Hero Top();


	// pops off the top of the stack to have the hero fight
	bool Pop();

	// pushes the hero in to the stack and then puts the winner in the winner stack 
	bool Push(Hero*);

	// tells me if the stack is empty
	bool isEmpty();

	// tells me if the stack is full
	bool isFull();

};
/////////////////////////////////////////////////
STACK.CPP
#include "Stack.h"

Hero Stack::Top()
{
	Hero* myTop = &mData[0];
	mData[mCount];
	return mData[mCount];
}



bool Stack::Pop()
{
	mData[mCount - 1];
	mCount--;
	return true;
}

// looks at all  the hero in the stack 
bool Stack::Push(Hero* Fighter)
{
	if (mCount < 4)
	{
		mData[mCount] = *Fighter;
		mCount = mCount + 1;
	}
	else
	{
		return false;
	}
}

// tells me if the stack is empty
bool Stack::isEmpty()
{
	if (mCount == 0)
	{
		return true;
	}

}

// tells me if the stack is full
bool Stack::isFull()
{
	if (mCount == 4)
	{
		return true;
	}

}
///////////////////////////////////////////////
GAME.H
#include "Stack.h"

class Game
{
public:
	// will work but for only two fighters
	//Hero Battle(Hero &fighter1 , Hero &fighter2)
	Hero Battle(Hero*, Hero*, Hero*, Hero*);
};
///////////////////////////////////////////////
GAME.CPP
#include "Game.h"

///will work but onely for two fighters 
//Hero Game::Battle(Hero & fighter1, Hero & fighter2)
//{
//
//
//	while (fighter1->isAlive() && fighter2->isAlive())
//	{
//		fighter1->sayName();
//		std::cout << " " << fighter1->GetHealth() << std::endl;
//		fighter2->sayName();
//		std::cout << " " << fighter2->GetHealth() << std::endl;
//
//		fighter2->Fight(fighter1);
//		fighter1->Fight(fighter2);
//		
//		system("pause");
//
//		/*fighter1->sayName();*/
//	/*	std::cout << " " << fighter1->GetHealth() << std::endl;*/
//		/*fighter2->sayName();*/
//		/*std::cout << " " << fighter2->GetHealth() << std::endl;*/
//		/*
//		system("pause");*/
//		system("cls");
//	}
//
//	if (fighter1->isAlive())
//	{
//		fighter1->sayName();
//		std::cout << " " << "Won " << " " << std::endl;
//		std::cout << fighter1->GetHealth() << std::endl;
//		return fighter1;
//	}
//
//	else if (fighter2->isAlive())
//	{
//		fighter2->sayName();
//		std::cout << " " << "Won " << " " << std::endl;
//		std::cout << fighter2->GetHealth() << std::endl;
//		return fighter2;
//	}
//
//	else 
//	{
//		std::cout << "The battle was hard fought but there can be no winner" << std::endl;
//	}
//	return Hero();
//}

Hero Game::Battle(Hero* fighter1, Hero* fighter2, Hero* fighter3, Hero* fighter4)
{





	while (fighter1->isAlive() && fighter2->isAlive())
	{
		fighter1->sayName();
		std::cout << " " << fighter1->GetHealth() << std::endl;
		fighter2->sayName();
		std::cout << " " << fighter2->GetHealth() << std::endl;

		fighter2->Fight(*fighter1);
		fighter1->Fight(*fighter2);

		system("pause");


		system("cls");
	}
	while (fighter3->isAlive() && fighter4->isAlive())
	{
		fighter3->sayName();
		std::cout << " " << fighter3->GetHealth() << std::endl;
		fighter4->sayName();
		std::cout << " " << fighter4->GetHealth() << std::endl;

		fighter4->Fight(*fighter3);
		fighter3->Fight(*fighter4);

		system("pause");

		system("cls");
	}

	// if team one did not lose anyone
	if (fighter1->isAlive() && fighter3->isAlive())
	{
		fighter1->sayName();
		std::cout << " " << std::endl;
		std::cout << fighter1->GetHealth() << std::endl;
		std::cout << " " << std::endl;
		fighter3->sayName();
		std::cout << " " << std::endl;
		std::cout << fighter3->GetHealth() << std::endl;
		std::cout << " " << "Won " << " " << std::endl;
	}
	// if team two did not lose anyone->
	else if (fighter2->isAlive() && fighter4->isAlive())
	{
		fighter2->sayName();
		std::cout << " " << std::endl;
		std::cout << fighter2->GetHealth() << std::endl;
		std::cout << " " << std::endl;
		fighter4->sayName();
		std::cout << " " << std::endl;
		std::cout << fighter4->GetHealth() << std::endl;
		std::cout << " " << "Won " << " " << std::endl;
		return *fighter2, *fighter4;
	}
	else if (fighter1->isAlive() && fighter4->isAlive())
	{
		while (fighter1->isAlive() && fighter4->isAlive())
		{
			fighter1->sayName();
			std::cout << " " << fighter1->GetHealth() << std::endl;
			fighter4->sayName();
			std::cout << " " << fighter4->GetHealth() << std::endl;

			fighter4->Fight(*fighter1);
			fighter1->Fight(*fighter4);
		}
		if (fighter1->isAlive())
		{
			fighter1->sayName();
			std::cout << " " << std::endl;
			std::cout << fighter1->GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return *fighter1;
		}
		else if (fighter4->isAlive())
		{
			fighter4->sayName();
			std::cout << " " << std::endl;
			std::cout << fighter4->GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return *fighter4;
		}

		system("pause");
	}

	else if (fighter2->isAlive() && fighter3->isAlive())
	{
		while (fighter2->isAlive() && fighter3->isAlive())
		{
			fighter3->sayName();
			std::cout << " " << fighter3->GetHealth() << std::endl;
			fighter2->sayName();
			std::cout << " " << fighter2->GetHealth() << std::endl;

			fighter2->Fight(*fighter3);
			fighter3->Fight(*fighter2);
		}
		if (fighter2->isAlive())
		{
			fighter2->sayName();
			std::cout << " " << std::endl;
			std::cout << fighter2->GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return *fighter2;
		}
		else if (fighter3->isAlive())
		{
			fighter3->sayName();
			std::cout << " " << std::endl;
			std::cout << fighter3->GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return *fighter3;
		}
		system("pause");
	}

	else
	{
		std::cout << "The battle was hard fought but there can be no winner" << std::endl;
	}
	return Hero();
	return Hero();
}
/////////////////////////////////
MAIN.CPP

#include <time.h>
#include <cstdlib>
#include "Game.h"

int main()
{
	srand(time(0));
	std::cout << "Hero fight game " << std::endl;
	system("pause");
	std::cout << "In these game you will be picking a team 'IronMan' or team 'CaptainAmerica' " << std::endl;
	system("pause");
	std::cout << "Once you pick your team pushing any nomal key will let you play all the way thouge into a winer or tie is made" << std::endl;
	system("pause");



	Hero* IronMan = new Hero;
	IronMan->getName("Iron Man");

	Hero* CaptainAmerica = new Hero;
	CaptainAmerica->getName("CaptainAmerica");

	Hero* WarMachine = new Hero;
	WarMachine->getName("WarMachine");

	Hero* BlackPanther = new Hero;
	BlackPanther->getName("BlackPanther");

	Stack* Team1 = new Stack;
	Team1->Push(IronMan);
	Team1->Push(WarMachine);

	Stack* Team2 = new Stack;
	Team2->Push(CaptainAmerica);
	Team2->Push(BlackPanther);

	Game* g = new Game();
	g->Battle(IronMan, CaptainAmerica, WarMachine, BlackPanther);




	system("pause");


}

// pops both stacks
//uses these pops to "evaluate" a winner
// pop that winner in a New Winning Stack
// has the two keep fighting in to one has died. 
// the loser stack has max competer -1


