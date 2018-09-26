#include "Game.h"

Hero Game::Battle(Hero & fighter1, Hero & fighter2)
{


	while (fighter1.isAlive() && fighter2.isAlive())
	{
		fighter2.Fight(fighter1);
		fighter1.Fight(fighter2);
		
		system("pause");

		fighter1.sayName();
		std::cout << " " << fighter1.GetHealth() << std::endl;
		fighter2.sayName();
		std::cout << " " << fighter2.GetHealth() << std::endl;
		
		system("pause");
		system("cls");
	}

	if (fighter1.isAlive())
	{
		fighter1.sayName();
		std::cout << "Won " << std::endl;
		return fighter1;
	}

	else if (fighter2.isAlive())
	{
		fighter2.sayName();
		std::cout << " Won " << std::endl;
		return fighter2;
	}

	else 
	{
		std::cout << "The battle was hard fought but there can be no winner" << std::endl;
	}
	return Hero();
}
