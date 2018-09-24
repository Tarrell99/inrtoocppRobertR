#include "Stack.h"

int main()
{
	std::cout << "Hero fight game " << std::endl;
	system ("pause");


	Hero IronMan;
	Hero CaptainAmerica;
	Game* g = new Game();
	g->Battle(IronMan, CaptainAmerica);
	system("pause");
	
	
}

// pops both stacks
//uses these pops to "evaluate" a winner
// pop that winner in a New Winning Stack
// has the two keep fighting in to one has died. 
// the loser stack has max competer -1