#include "Stack.h"
#include <time.h>
#include <cstdlib>

int main()
{
	
	std::cout << "Hero fight game " << std::endl;
	system("pause");
	std::cout << "In these game you will be picking a team 'IronMan' or team 'CaptainAmerica' " << std::endl;
	system("pause");
	std::cout << "Once you pick your team pushing any nomal key will let you play all the way thouge into a winer or tie is made" << std::endl;
	system ("pause"); 
	
	srand(time(0));
	
	Hero IronMan;
	IronMan.getName("Iron Man");
	Hero CaptainAmerica;
	CaptainAmerica.getName("CaptainAmerica");
	Game* g = new Game();
	g->Battle(IronMan, CaptainAmerica);

	
	
	system("pause");
	
	
}

// pops both stacks
//uses these pops to "evaluate" a winner
// pop that winner in a New Winning Stack
// has the two keep fighting in to one has died. 
// the loser stack has max competer -1