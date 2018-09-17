#include<iostream>

int main()
{
	int variable = 10;
	std::cout << variable << std::endl;
	system("pause");
	int &myVariable = variable;
	std::cout << myVariable << std::endl;
	/*Change the contents of the variable by directly changing the variable and using the
		reference*/
	system("pause");
	variable = 12;
	std::cout << myVariable << std::endl;
	system("pause");
	/*Create another reference to the same integer and prove to yourself that both
		references are referring to the same int.*/
	int &myVariable2 = variable;
	std::cout << myVariable2 << std::endl;
	system("pause");
}