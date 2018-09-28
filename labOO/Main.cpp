
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
	system ("pause"); 
	
	
	
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
	g->Battle(IronMan, CaptainAmerica,WarMachine, BlackPanther);


	
	
	system("pause");
	
	
}

// pops both stacks
//uses these pops to "evaluate" a winner
// pop that winner in a New Winning Stack
// has the two keep fighting in to one has died. 
// the loser stack has max competer -1