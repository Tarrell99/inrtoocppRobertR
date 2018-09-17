#include<iostream>


//Write a function for each of the following descriptions.For each function, use the pointer
//notation ONLY.Do NOT use the array index[] notation.


//A.Write a function RevString(char* array) which reverses array.The function
//returns nothing.

void revString( char* Array )
{
	
}

//B.Write a function CountEven(int* array, int array_len) which receives an
//integer array and its size, and returns the number of even numbers in the array.

int countEven(int* myArray, int arrayLen)
{
	for (int i = 0; i < arrayLen; i++)
	{
		if (i % 2)
		{
			std::cout << i << std::endl;
		}
	} 
	return 0;
}

//C.Write a function Maximum(double* array, int array_size) that returns a
//pointer to the maximum value of an array of doubles.If the array is empty, return
//nullptr.

int maximun(double* myArray2, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (i > arraySize)
		{
			nullptr;
		}
	}
	return 0;
}

//D.Write a function Contains(char* array, char search_value) which returns
//true if the 1st parameter contains the 2nd parameter, or false otherwise.

bool contains(char* myattay, char searchValue)
{
	for (int i = 0; i < searchValue; i++)
	{
		if (i < searchValue)
		{
			return " false";
		}
	}
	return 0;
}

int main()
{
	int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* myPoint = myArray;
	*myPoint = myArray[0];
	countEven(myPoint, 10);
	system("pause");
}