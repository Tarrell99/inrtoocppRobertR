#include<iostream>

//1. Min
//DESCRIPTION : Returns the lower of two values.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The lower of the two values a and b.
template <typename T>
T Min(T a, T b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
//2. Max
//DESCRIPTION : Returns the higher of two values.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The higher of the two values a and b.
template <typename T>
T Max(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
//3. Clamp
//DESCRIPTION : Constrains a value within the range of two other values.
//	INPUT : Three template arguments(min, max, val).
//	OUTPUT : The value of the val constrained between min and max.
template <typename T>
T Clamp(T min, T max, T val)
{
	if (val > max)
	{
		return max;
	}
	else if (val < min)
	{
		return min;
	}
	else
	{
		return val;
	}
}
//4. Min(specialised for char)
//DESCRIPTION: As above but first checks if a and b represent alphabetical characters.If so,
//	the function will return the value that is alphabetically lower.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The alphabetically lower of the two values a and b.
template <typename T>
T Min(T a, T b, )
{
	if (a > 64 && a < 96)
		a + 32;
	if (b > 64 && a < 96)
		b + 32;
	if(a < b)
		return a
	else
	{
		return b
	}
	
}
//5. Max(specialised for char)
//DESCRIPTION: As above but first checks if a and b represent alphabetical characters.If so,
//	the function will return the value that is alphabetically higher.
//	INPUT : Two template arguments(a, b).
//	OUTPUT : The alphabetically higher of the two values a and b.
template <typename T>
T Max(T a, T b, )
{
	if (a > 64 && a < 96)
		a + 32;
	if (b > 64 && a < 96)
		b + 32;
	if (a > b)
		return a
	else
	{
		return b
	}

}

int main()
{
	

}
