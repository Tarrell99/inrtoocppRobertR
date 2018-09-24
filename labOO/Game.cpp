#pragma once
#include "Game.h"

Hero Game::Battle(Hero &fighter1, Hero &fighter2)
{
	if (fighter1 == fighter2)
	{

	}
	std::cout << "IronMan" << fighter1.getHealth << std::endl;
	std::cout << "CaptainAmerica" << fighter2.getHealth << std::endl;
	while (fighter1.isAlive() && fighter2.isAlive())
	{
		fighter1.Fight(fighter2);
		fighter2.Fight(fighter1);
		std::cout << "IronMan" << fighter1.getHealth << std::endl;
		std::cout << "CaptainAmerica" << fighter2.getHealth << std::endl;
	}
	if (fighter1.isAlive())
	{
		std::cout << "IronMan won" << std::endl;
		return fighter1;
	}
	else if (fighter2.isAlive())
	{
		std::cout << "CaptainAmerica won" << std::endl;
		return fighter2;
	}

	return Hero();
}
