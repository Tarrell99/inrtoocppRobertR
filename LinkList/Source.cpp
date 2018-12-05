
#include<iostream>
#include"lincklistEX.h"


int main()
{
	
	nodeType<int>* A = new nodeType<int>{ 47 };
	nodeType<int>* B = new nodeType<int>{ 500 };
	nodeType<int>* C = new nodeType<int>{ 4547 };

	linklistEX<int>* list = new linklistEX<int>;
	
	list->insertFirst(A->info);
	list->insertFirst(C->info);
	list->insertLast(B->info);

	linklistEX<int>* list2 = new linklistEX<int>;
	list2 = list;
	list->print();
	
		system("pause");
}
