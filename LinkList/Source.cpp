
#include<iostream>
#include"lincklistEX.h"


int main()
{
	/*nodeType<int> a = { 13,nullptr };
	nodeType<int> b = { 299, &a };
	nodeType<int> c = { 334, &b };
	nodeType<int> d = { 398, &c };
	nodeType<int> e = { 47, &d };

	linkedListIterator<int> *iter =
		new linkedListIterator<int>(&e);
	++*iter;*/
	nodeType<int>* A = new nodeType<int>{ 47 };
	nodeType<int>* B = new nodeType<int>{ 500 };
	nodeType<int>* C = new nodeType<int>{ 4747 };

	linklistEX<int>* list = new linklistEX<int>;
	list->insertFirst(A->info);
	list->isEmptyList();
	
		system("pause");
}
