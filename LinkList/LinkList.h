#pragma once
#include "Iterator.h"
template<class Type>
class linkList
{
protected:
	int count;
	nodeType<Type>* first;
	nodeType<Type>* last;

public:
	const linkList<Type>& operator = (const linkList<Type>&);// making both the of the sides = by setting themto each other. 
	void initializeList();// set the member verble to something 
	bool isEmptyList() const;// return the count to 0 if the list is empty
	void print() const;// print all vale in each node
	int length() const;// tells how many nodes are in the list
	void destroyList();// delitlet all the nodes in the list
	Type front() const;//returns the value of the first node
	Type back() const;// returns the value of the last node
	virtual bool search(const Type&) const = 0;// returns if any of the armuts are in the nodes 
	virtual void insertFirst(const Type&) = 0;// inserts the node in the beging of the list
	virtual void insertLast(const Type&) = 0;// inserts the node in the end of the list
	virtual void deletNode(const Type&) = 0;// delet one node with the arugment in it
	linkedListIterator<Type> begin();
	linkedListIterator<Type> end();
	linkList();
	linkList(const linkList<Type>&); 

private:
	void copyList(const linkList<Type>&);// function to make information from one list to a other
};

//////////////////////////////////////////////////////////////////

template<class Type>
const linkList<Type>& linkList<Type>::operator=(const linkList<Type>& copyNodeList)
{
	this->copyList(copyNodeList);
}

template<class Type>
void linkList<Type>::initializeList()
{
	first->nullpter;
	last->nullpter;
	count = 0;
}

template<class Type>
bool linkList<Type>::isEmptyList() const
{
	if (first == NULL && last == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class Type>
void linkList<Type>::print() const
{
	nodeType<Type>* printMe = this->first;
	while (printMe != nullptr)
	{
		printMe = printMe->link;
		std::cout << printMe << std::endl;
	}
}

template<class Type>
int linkList<Type>::length() const
{
	return  count;
}

template<class Type>
void linkList<Type>::destroyList()
{
	nodeType<Type>* destroy = this->first;
	while (destroy = destory->link)
	{
		delete destroy->link;
		delete first->info && delete last->info;
	}
}

template<class Type>
Type linkList<Type>::front() const
{
	return first->link;
}

template<class Type>
Type linkList<Type>::back() const
{
	return last->link;
}

 template<class Type>
 linkedListIterator<Type> linkList<Type>::begin()
 {
	 return first->info;
 }

 template<class Type>
 linkedListIterator<Type> linkList<Type>::end()
 {

	 return last->info;
 }

 template<class Type>
 linkList<Type>::linkList()
{
	 first = nullptr;
	 last = nullptr;
}

template<class Type>
 linkList<Type>::linkList(const linkList<Type>&)
{
	 count = 0;
}

template<class Type>
 void linkList<Type>::copyList(const linkList<Type>& list)
{
	 nodeType<Type>* copyTheNodes;
	 while (copyTheNodes != nullptr)
	 {
		 insertFirst(list);
	 }

}
