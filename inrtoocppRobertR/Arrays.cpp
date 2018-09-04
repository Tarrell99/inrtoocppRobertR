#include <iostream>
int main()
{
	char fritsname[] = { 'M', 'A', 'T', 'T', 'H', 'E', 'W' };
	int  number[7];
	for (int i = 0; i < 7; i++)
	{
		std::cout << number[i];
		number[i] = (int)fritsname[i];
	}

	{
		int Mynumber[] = { 12 , 21, 3, 7, 12 };

		for (int i = 0; i < 5; i++);
	}
	{
		int input[10];
		for (int i = 0; i < 20; i++)
		{
			input[i] % 2;

		}
	}

	/*{
		int input[9];
		for (int i);

	}*/

	//problem 1
	{
		int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; //this is ok.
		int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; // i belive this wrong for it goes higher then the number in the box.
		/*double radii[10] = (3.2, 4.7};*/   // i dont belive that double can have decimal.
		int table[7] = { 2, , , 27, , 45, 39 }; // i belive that these would work if the expression was right but the spaces dont work.
		char codes[] = { 'A', 'X', '1', '2', 's' }; // this works.
		int blanks[]; // its not done it needs more to work.
		int collection[-20]; // i dont think that arrys can go pass 0 .
		int hours[3] = 8, 12, 16; // i belive this wrong for it goes higher then the number in the box.
	}
	//problem 2
	{
		a) cout << values[2] // it will be 16
			b) cout << ++values[0]; // it shold be 3
		c) cout << values[1]++; // this shold be 7
		d) x = 2; 
		cout << values[++x]; //
	}
	//problem 3
	{
		int data[10];

		for (int i = 10; i > 0; i--)

		{

			data[i - 1] = i;

		}
	}
	//problem 4
	{
		int input[5];
		int x;
		std::cout << "Input five numbers" << std::endl;
		for (int i = 0; i < 5; i++)
		{
			std::cin >> x;
			input[i] = x;
		}
		for (int i = 4; i >= 0; i--)
		{
			std::cout << input[i] << std::endl;
	}
	return 0;
}