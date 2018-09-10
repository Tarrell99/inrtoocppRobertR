#include <iostream>
#include <string>
#include <ctime> 
//int print(std::string input)
//{
//	std::cout << input;
//	return 0;
//}
//bool IsMultpleOfThree(int value)
//{
//	bool expression = (value % 3 == 0);
//	return expression;
//}
//void printValvesToTen()
//{
//	for (int i = 0; i < 11; i++)
//	{
//		std::cout << i << ',' << std::endl;
//	}
//}
//void PrintValvesBetween(int low, int high)
//{
//	for (int i = low + 1; i < high; i++)
//	{
//		std::cout << i << ",";
//	}
//	std::cout << std::endl;
//}
//int ArraySum(int arr[], int size)
//{
//	/*int myArray[4] = { 4,3,2,1 };
//	int sum = 0;
//
//	for (int i = 0; i < 4; i++)
//	{
//		sum = myArray[i] + sum;
//	}*/
//	int sum = 0;
//}
//void RevArray(int arr[], int size)
//{
//	int count = 0;
//
//}

//int main()
//{
	/*print ("hi");
	bool isMultpTest = IsMultpleOfThree(4);
	printValvesToTen();

	int myArray[4] = { 4,3,2,1 };
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum = myArray[i] + sum;
	}*/

	

	/*system("pause");
	return 0;
}*/

void CoinToss(int numberOfTosses)

{
	int x;
	int heads = 0;
	int tails = 0;
	srand(time(NULL));
	srand(time(0));
	for (int i = 0; i < numberOfTosses; i++)
	{
		x = rand() % 2;
		if (x == 0)
		{
			heads++;
		}
		else
		{
		tails++;
		}
	}
	std::cout << "Heads: " << heads << std::endl;
	std::cout << "Tails: " << tails << std::endl;
}
void  multiplyByIndex(int inputArray[], int size, int outputArray[])

{
	for (int i = 0; i < size; i++)
	{
		outputArray[i] = inputArray[i] * i;
	}
}

int power(int x, int y)

{
	int answer = 0;
	for (int i = 1; i <= y; i++)

	{
		answer = x * i;
	}
	return answer;
}

int main()
{
	//#5
	{
		int coinFlip;
		std::cout << "How many times do you want to fip the coin?" << std::endl;
		std::cin >> coinFlip;
		CoinToss(coinFlip);
	}
	//#10
	{
		int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int result[10];
		multiplyByIndex(myArray, 10, result);
	}
	//#15
	{
		int answer = power(4, 2);
	}
	system("pause");
	return 0;
}


