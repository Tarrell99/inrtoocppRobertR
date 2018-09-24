#pragma once
#include "Game.h"

Hero Game::Battle(Hero &fighter1, Hero &fighter2)
{
	/*if (fighter1 == fighter2)
	{

	}*/
	while (fighter1.isAlive() && fighter2.isAlive())
	{
		fighter1.Fight(fighter2);
		fighter2.Fight(fighter1);
	}
	if (fighter1.isAlive())
	{
		return fighter1;
	}
	else if (fighter2.isAlive())
	{
		return fighter2;
	}

	return Hero();
}
