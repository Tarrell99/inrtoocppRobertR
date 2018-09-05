//#include <iostream>
//
//int main()
//
////{
////	//Class work
////	{
////		int grade;
////		char gradeLetter;
////
////		std::cout << "" << std::endl;
////		std::cin >> grade;
////
////
////		gradeLetter = 'A';
////		grade = 90;
////
////		if (grade >= 90) {
////			gradeLetter = 'A';
////		}
////		else if (grade >= 80 && grade < 90) {
////			gradeLetter = 'B';
////		}
////		else if (grade >= 70 && grade < 80) {
////			gradeLetter = 'C';
////		}
////		else if (grade >= 60 && grade < 70) {
////			gradeLetter = 'D';
////		}
////		else (grade < 60); {
////			gradeLetter = 'F';
////		}
////
////		std::cout << "These is your grade";
////
////
////
////
////
////		int input = 0;
////		std::cout << "Enter a number. \n";
////		std::cin >> input;
////		if (input % 5 == 0 && input % 3 == 0) {
////			std::cout << "Fizz Buzz";
////		}
////		else if (input % 3 == 0)
////		{
////			std::cout << "Fizz";
////		}
////		else if (input % 5 == 0) {
////			std::cout << "Buzz";
////		}
////		int lhs, rhs;
////		char op;
////		std::cout << "Etter two numbers.\n";
////		std::cin >> lhs >> rhs;
////		std::cout << " do you wanna Add(+) or Subtract(-)?\n";
////		std::cin >> op;
////		switch (op)
////		{
////		case '+':
////			//Do Stuff
////			std::cout << lhs + rhs << std::endl;
////			break;
////		case '-':
////			//Do Stuff
////			std::cout << lhs - rhs << std::endl;
////			break;
////		default:
////			std::cout << "invalid math operation\n";
////		}
////
////
////		int lifePoints;
////		std::cout << " What is your life at";
////		std::cin >> lifePoints;
////		if (lifePoints > 0)
////		{
////			std::cout << " Your Alive" << std::endl;
////			std::cout << "Your Life is at .." << lifePoints << std::endl;
////			if (lifePoints <= 25)
////			{
////				std::cout << " your in critical";
////			}
////			else
////			{
////				std::cout << "Your dead";
////			}
////		}
////	}
////	// probmle 1. 
////	{
////		int X;
////		int Y;
////		if (Y = 0)
////		{
////			X = 100;
////
////		}
////	}
////	//pronmle 2.
////	{
////		int nmb1;
////		int nmb2;
////		std::cout << "pick two numbers one , two or three" << std::endl;
////		std::cin >> nmb1;
////		std::cin >> nmb2;
////		if (nmb1 = 3)
////		{
////			std::cout << " 3 " << std::endl;
////		}
////		else if (nmb2 = 3 )
////		{
////			std::cout << " 3 " << std::endl;
////		}
////		else if (nmb1 = 2)
////		{
////			std::cout << " 2 " << std::endl;
////		}
////		else if (nmb2 = 2)
////		{
////			std::cout << " 2 " << std::endl;
////		}
////
////	}
////	//pronmle 3.
////	{
////
////	}
////	//pronmle 4
////	{
////		int choice;
////		std::cin >> choice;
////		switch (choice)
////		{
////		case 1:
////				std::cout << 1 << std::endl;
////			break;
////		case 2:
////			std::cout << 2 << std::endl;
////			break;
////		case 3:
////			std::cout << 3 << std::endl;
////			break;
////		case 4:
////			std::cout << 4 << std::endl;
////			break;
////		default:
////			std::cout << "Invalid" << std::endl;
////
////		}
////	}
////	//probmle 5.
////	{
////		int X;
////		int Y;
////		std::cout << "What is X" << std::endl;
////		std::cin >> X;
////		Y = (X == 0) ? 0 : (10 / X);
////		std::cout << "Y is  " << Y << std::endl; 
////	}
////	//probmle 6
////	{
////		int lhs, rhs;
////		char op;
////		std::cout << "Etter two numbers.\n";
////		std::cin >> lhs >> rhs;
////		std::cout << " do you wanna (+) , (-) , (/) , (*) or (%) ?\n";
////		std::cin >> op;
////		switch (op)
////		{
////		case '+':
////			std::cout << lhs + rhs << std::endl;
////			break;
////		case '-':
////			std::cout << lhs - rhs << std::endl;
////			break;
////		case '/':
////			std::cout << lhs / rhs << std::endl;
////			break;
////		case '*':
////			std::cout << lhs * rhs << std::endl;
////			break;
////		case '%':
////			std::cout << lhs % rhs << std::endl;
////			break;
////
////		default:
////			std::cout << "invalid math operation\n";
////		}
////	}
////	//probmle 7 
////	{
////		int choice;
////		std::cin >> choice;
////		switch (choice)
////		{
////		case 1:
////			std::cout << "January 31" << std::endl;
////			break;
////		case 2:
////			std::cout << "February 28" << std::endl;
////			break;
////		case 3:
////			std::cout << "March 31" << std::endl;
////			break;
////		case 4:
////			std::cout << "April 30" << std::endl;
////			break;
////		case 5:
////			std::cout << "May 31" << std::endl;
////			break;
////		case 6:
////			std::cout << "June 30" << std::endl;
////			break;
////		case 7:
////			std::cout << "July 31" << std::endl;
////			break;
////		case 8:
////			std::cout << "Augst 31" << std::endl;
////			break;
////		case 9:
////			std::cout << " September 30" << std::endl;
////			break;
////		case 10:
////			std::cout << " October 31" << std::endl;
////			break;
////		case 11:
////			std::cout << "November 30" << std::endl;
////			break;
////		case 12:
////			std::cout << "Decmber 31 " << std::endl;
////			break;
////		}
////	}
////	//probmle 8
////	{
////		int a = true;
////		int b = true;
////		int c = false;
////		int d = true;
////		int e = true;
////		int f = false;
////		int g = false;
////		int h = true;
////		int i = false;
////		int j = true;
////		// for h/i im sure what it would be so i put one of each.
////
////
////
////			
////	}
////	//probmle 9 
////	{
////		int a = true;
////		int b = true;
////		int c = false;
////		int d = true;
////		int e = true;
////
////	}
////		system("pause");
//}