#include<iostream>
//Write a function called SumTo that accepts an integer parameter N and returns the sum of all integers from 1 to N, including N.

int SumTo(int N)
{
	int answers= 0;
	
	for (int i = 0; i <= N; i++)
	{
		answers = answers + i;
	}
	return  answers;
}

int main()
{
	// expeted N = 3 so 1+2+3= 6
	SumTo(3);
	//reust 6;
	system("pause");
}