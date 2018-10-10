#pragma once
#include "NodeType.h"
template<class Type>
class linkList
{
protected:
	int count;
	nodeType<Type> first*;
	nodeType<Type> last*;

public:
	void initializeList();
	const bool isEmptyList();
	const void print();
	const int length();
	void destroyList();
	const Type front();
	const Type back();
	const bool search(const Type&) = 0;
	 void insertFirst(const Type&) = 0;
	 void insertLast(const Type&) = 0;
	 void deletNode(const Type&) = 0;
	 Iterator<Type> end();
	 linkList();
	 linkList(const linkList<Type>&);

private:
	void copyList(const linkList<Type>&);
};