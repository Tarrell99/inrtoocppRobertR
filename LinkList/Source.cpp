
#include<iostream>
#include"lincklistEX.h"


int main()
{
	
	nodeType<int>* A = new nodeType<int>{ 47 };
	nodeType<int>* B = new nodeType<int>{ 500 };
	nodeType<int>* C = new nodeType<int>{ 4747 };

	linklistEX<int>* list = new linklistEX<int>;
	A->link = B;
	B->link = C;
	C->link = nullptr;

	list->insertFirst(A->info);
	list->insertLast(B->info);
	list->insertFirst(C->info);

	linklistEX<int>* list2 = new linklistEX<int>;
	list2 = list;
	list->print();
	
		system("pause");
}
