#include <iostream>
#include <string>

int print(std::string input)
{
	std::cout << input;
	return 0;
}
bool IsMultpleOfThree(int value)
{
	bool expression = (value % 3 == 0);
	return expression;
}
void printValvesToTen()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << i << ',' << std::endl;
	}
}
void PrintValvesBetween(int low, int high)
{
	for (int i = low + 1; i < high; i++)
	{
		std::cout << i << ",";
	}
	std::cout << std::endl;
}
int ArraySum(int arr[], int size)
{
	/*int myArray[4] = { 4,3,2,1 };
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum = myArray[i] + sum;
	}*/
	int sum = 0;
}
void RevArray(int arr[], int size)
{
	int count = 0;
	
}
int main()
{
	print ("hi");
	bool isMultpTest = IsMultpleOfThree(4);
	printValvesToTen();

	int myArray[4] = { 4,3,2,1 };
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		sum = myArray[i] + sum;
	}

	///////

	system("pause");
	return 0;
}