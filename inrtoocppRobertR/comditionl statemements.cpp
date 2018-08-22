#include <iostream>

int main()

{
	//Class work
	{
		int grade;
		char gradeLetter;

		std::cout << "" << std::endl;
		std::cin >> grade;


		gradeLetter = 'A';
		grade = 90;

		if (grade >= 90) {
			gradeLetter = 'A';
		}
		else if (grade >= 80 && grade < 90) {
			gradeLetter = 'B';
		}
		else if (grade >= 70 && grade < 80) {
			gradeLetter = 'C';
		}
		else if (grade >= 60 && grade < 70) {
			gradeLetter = 'D';
		}
		else (grade < 60); {
			gradeLetter = 'F';
		}

		std::cout << "These is your grade";





		int input = 0;
		std::cout << "Enter a number. \n";
		std::cin >> input;
		if (input % 5 == 0 && input % 3 == 0) {
			std::cout << "Fizz Buzz";
		}
		else if (input % 3 == 0)
		{
			std::cout << "Fizz";
		}
		else if (input % 5 == 0) {
			std::cout << "Buzz";
		}
		int lhs, rhs;
		char op;
		std::cout << "Etter two numbers.\n";
		std::cin >> lhs >> rhs;
		std::cout << " do you wanna Add(+) or Subtract(-)?\n";
		std::cin >> op;
		switch (op)
		{
		case '+':
			//Do Stuff
			std::cout << lhs + rhs << std::endl;
			break;
		case '-':
			//Do Stuff
			std::cout << lhs - rhs << std::endl;
			break;
		defaut:
			std::cout << "invalid math operation\n";
		}


		int lifePoints;
		std::cout << " What is your life at";
		std::cin >> lifePoints;
		if (lifePoints > 0)
		{
			std::cout << " Your Alive" << std::endl;
			std::cout << "Your Life is at .." << lifePoints << std::endl;
			if (lifePoints <= 25)
			{
				std::cout << " your in critical";
			}
			else
			{
				std::cout << "Your dead";
			}
		}
	}
	// probmle 1. 
	{
		int X;
		int Y;
		if (Y = 0)
		{
			X = 100;

		}
	}
	//pronmle 2.
	{
		int nmb1;
		int nmb2;
		std::cout << "pick two numbers" << std::endl;
		std::cin >> nmb1;
		std::cin >> nmb2;

	}

	{

	}
		system("pause");
}