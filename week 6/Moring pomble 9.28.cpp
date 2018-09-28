//Create a function with return type of type integer. 
//The functon will take in two arguments. the first argument is a pointer to an array and the second is the the size of the the array.
//The function will return the sum of the two lagrgest values in the array.
// needs to point at array into higest numbers at found then add them. Ex Array[2,4,6,1,9] = 9+6=15

#include<iostream>
//           pointer     array
int reSum(int* myPo, int myAr)
{
	int sum;
	int myArray[5];
	for (int i = 0; i < myAr[0]; i++)
	{
		for (int j = 0; j < myAr[0]; j++)
		{
			int temp;
			int temp2;
			
			if (i > j)
			{
				temp = i;
			}
			else if (j > i)
			{
				temp2 = j;
			}
			sum = temp + temp2;
		}

		
		
	}
	return sum;
}




int main()
{
	int myArray[5];
	myArray[5] = 5, 4, 8, 9, 2;
	
	system("pause");
}