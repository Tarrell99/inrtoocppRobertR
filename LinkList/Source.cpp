
#include<iostream>
#include"LinkList.h"


int main()
{
	
	nodeType<int> a = { 13,nullptr };
	nodeType<int> b = { 299, &a };
	nodeType<int> c = { 334, &b };
	nodeType<int> d = { 398, &c };
	nodeType<int> e = { 47, &d };

	linkedListIterator<int> *iter =
		new linkedListIterator<int>(&e);
	++*iter;
	
		system("pause");
}
