#include "Game.h"

Hero Game::Battle(Hero & fighter1, Hero & fighter2)
{
	
	std::cout << "CaptainAmerica" << " " << fighter2.GetHealth() << std::endl;
	std::cout << "IronMan" << " " << fighter1.GetHealth() << std::endl;

	while (fighter1.isAlive() && fighter2.isAlive())
	{
		fighter1.Fight(fighter2);
		fighter2.Fight(fighter1);
		system("pause");

		std::cout << "CaptainAmerica" << " " << fighter2.GetHealth() << std::endl;
		std::cout << "IronMan" << " " << fighter1.GetHealth() << std::endl;
		system("pause");
		system("cls");
	}

	if (fighter1.isAlive())
	{
		std::cout << "IronMan won" << " " << std::endl;
		return fighter1;
	}

	else if (fighter2.isAlive())
	{
		std::cout << "CaptainAmerica won" << " " << std::endl;
		return fighter2;
	}

	else 
	{
		std::cout << "The battle was hard fought but there can be no winner" << std::endl;
	}
	return Hero();
}
