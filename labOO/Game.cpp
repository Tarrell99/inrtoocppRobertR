#include "Game.h"

///will work but onely for two fighters 
//Hero Game::Battle(Hero & fighter1, Hero & fighter2)
//{
//
//
//	while (fighter1.isAlive() && fighter2.isAlive())
//	{
//		fighter1.sayName();
//		std::cout << " " << fighter1.GetHealth() << std::endl;
//		fighter2.sayName();
//		std::cout << " " << fighter2.GetHealth() << std::endl;
//
//		fighter2.Fight(fighter1);
//		fighter1.Fight(fighter2);
//		
//		system("pause");
//
//		/*fighter1.sayName();*/
//	/*	std::cout << " " << fighter1.GetHealth() << std::endl;*/
//		/*fighter2.sayName();*/
//		/*std::cout << " " << fighter2.GetHealth() << std::endl;*/
//		/*
//		system("pause");*/
//		system("cls");
//	}
//
//	if (fighter1.isAlive())
//	{
//		fighter1.sayName();
//		std::cout << " " << "Won " << " " << std::endl;
//		std::cout << fighter1.GetHealth() << std::endl;
//		return fighter1;
//	}
//
//	else if (fighter2.isAlive())
//	{
//		fighter2.sayName();
//		std::cout << " " << "Won " << " " << std::endl;
//		std::cout << fighter2.GetHealth() << std::endl;
//		return fighter2;
//	}
//
//	else 
//	{
//		std::cout << "The battle was hard fought but there can be no winner" << std::endl;
//	}
//	return Hero();
//}

Hero Game::Battle(Hero & fighter1, Hero & fighter2, Hero & fighter3, Hero & fighter4)
{





	while (fighter1.isAlive() && fighter2.isAlive())
	{
		fighter1.sayName();
		std::cout << " " << fighter1.GetHealth() << std::endl;
		fighter2.sayName();
		std::cout << " " << fighter2.GetHealth() << std::endl;

		fighter2.Fight(fighter1);
		fighter1.Fight(fighter2);

		system("pause");


		system("cls");
	}
	while (fighter3.isAlive() && fighter4.isAlive())
	{
		fighter3.sayName();
		std::cout << " " << fighter3.GetHealth() << std::endl;
		fighter4.sayName();
		std::cout << " " << fighter4.GetHealth() << std::endl;

		fighter4.Fight(fighter3);
		fighter3.Fight(fighter4);

		system("pause");
	}

	// if team one did not lose anyone
	if (fighter1.isAlive() && fighter3.isAlive())
	{
		fighter1.sayName();
		std::cout << " " << std::endl;
		std::cout << fighter1.GetHealth() << std::endl;
		std::cout << " " << std::endl;
		fighter3.sayName();
		std::cout << " " << std::endl;
		std::cout << fighter3.GetHealth() << std::endl;
		std::cout << " " << "Won " << " " << std::endl;
	}
	// if team two did not lose anyone.
	else if (fighter2.isAlive() && fighter4.isAlive())
	{
		fighter2.sayName();
		std::cout << " " << std::endl;
		std::cout << fighter2.GetHealth() << std::endl;
		std::cout << " " << std::endl;
		fighter4.sayName();
		std::cout << " " << std::endl;
		std::cout << fighter4.GetHealth() << std::endl;
		std::cout << " " << "Won " << " " << std::endl;
		return fighter2, fighter4;
	}
	else if (fighter1.isAlive() && fighter4.isAlive())
	{
		while (fighter1.isAlive() && fighter4.isAlive())
		{
			fighter1.sayName();
			std::cout << " " << fighter1.GetHealth() << std::endl;
			fighter4.sayName();
			std::cout << " " << fighter4.GetHealth() << std::endl;

			fighter4.Fight(fighter1);
			fighter1.Fight(fighter4);
		}
		if (fighter1.isAlive())
		{
			fighter1.sayName();
			std::cout << " " << std::endl;
			std::cout << fighter1.GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return fighter1;
		}
		else if (fighter4.isAlive)
		{
			fighter4.sayName();
			std::cout << " " << std::endl;
			std::cout << fighter4.GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return fighter4;
		}

		system("pause");
	}
	
	else if (fighter2.isAlive() && fighter3.isAlive())
	{
		while (fighter2.isAlive() && fighter3.isAlive())
		{
			fighter3.sayName();
			std::cout << " " << fighter3.GetHealth() << std::endl;
			fighter2.sayName();
			std::cout << " " << fighter2.GetHealth() << std::endl;

			fighter2.Fight(fighter3);
			fighter3.Fight(fighter2);
		}
		if (fighter2.isAlive())
		{
			fighter2.sayName();
			std::cout << " " << std::endl;
			std::cout << fighter2.GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return fighter2;
		}
		else if (fighter3.isAlive)
		{
			fighter3.sayName();
			std::cout << " " << std::endl;
			std::cout << fighter3.GetHealth() << std::endl;
			std::cout << " " << "Won " << " " << std::endl;
			return fighter3;
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
