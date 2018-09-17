#include<iostream>
//
//struct MyStruct
//{
//	int rhs = 2;
//	int lhs = 2;
//
//};

void changeIt(int& rhs, int& lhs)
{
	rhs = 2;
	lhs = 1;

		 
}


int main()
//#1
{
//	int variable = 10;
//	std::cout << variable << std::endl;
//	system("pause");
//
//
//	int &myVariable = variable;
//	std::cout << myVariable << std::endl;
//	/*Change the contents of the variable by directly changing the variable and using the
//		reference*/
//	system("pause");
//
//
//	variable = 12;
//	std::cout << myVariable << std::endl;
//	system("pause");
//
//
//	/*Create another reference to the same integer and prove to yourself that both
//		references are referring to the same int.*/
//	int &myVariable2 = variable;
//	std::cout << myVariable2 << std::endl;
//
//
//	//Try creating a reference which doesn’t refer to
//	/*anything and try to make an existing reference refer to something else.
//		Also try making a reference to an int refer to a float. 2*/
//	int num = 5;
//	int &myVariable = num;
//	/*int &myRef = */
//	float F = 4.2;
//	/*int &myVariable2 = F;*/
//	//cant be done
//	system("pause");



	//#2
	int changeIt2 = 78;
	int changeIt3 = 79;
	changeIt(changeIt2, changeIt3);
	std::cout << changeIt2 << changeIt3 << std::endl;

	system("pause");



	//#3

}
