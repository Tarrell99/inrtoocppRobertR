#include<iostream>
#include<time.h>
#include <cstdlib>
int main()
{
	srand(time(NULL));
	char input;

	int Max2 = 0;
	
	int Min2 = 0;
	int gameNumber = rand() % 100 + 1;

	std::cout << "Want to play a game think of a number between 1 and 100 ? " << std::endl;
	system("pause");

	std::cout << " you'll keep useing these for the rest of the game" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "EX: your number -> 5 " << std::endl;
	std::cout << " if the computer guess 6 you would put < so it would look like (5<6)  " << std::endl;
	std::cout << " " << std::endl;
	std::cout << " < if its less then" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " > if its greater then" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "and = if i got it right" << std::endl;
	system("pause");


	system("cls");

	std::cout << "I will guess" << gameNumber << std::endl;

	std::cin >> input;
	while (input != '=')
	{
		if (input == '>')
		{
			Min2 = gameNumber;
			gameNumber = rand() % (Max2 - Min2) + Min2;
			if (gameNumber >= 101)
				gameNumber = 100;
			if (gameNumber == Min2)
			{
				gameNumber++;
			}
			std::cout << " im going to pick these number   " << gameNumber << "   is these it ?" << std::endl;
			std::cin >> input;
		}
		if (input == '<')
		{
			Max2 = gameNumber;
			gameNumber = rand() % (Max2 - Min2) + Min2;
			if (gameNumber == Min2)
			{
				gameNumber++;
			}
			std::cout << " im going to pick these number   " << gameNumber << "   is these it ?" << std::endl;
			std::cin >> input;
		}

		if (input == '=')
		{
			std::cout << "Yes I got it Right" << std::endl;
			break;
		}

	}







	system("pause");
}