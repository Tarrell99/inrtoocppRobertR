#pragma once
#include"LinkList.h"


template<class type>
class linklistEX : public linkList<type>
{
public:
	bool search(const type&) const;
	void insertFirst(const type&);
	void insertLast(const type&);
	void deletNode(const type&);


};
//////////////////////////////////////////////////////////////////////
template<class type>
 bool linklistEX<type>::search(const type & found) const
{
	 nodeType<type>* Lookfor = this->first;
	 if (Lookfor->info == found)
	 {

		 return true;
	 }
	 else
	 {
		 while (Lookfor->info != found )
		 {
			 Lookfor = Lookfor->link;
		 }
		 return false;
	 }
}

template<class type>
 void linklistEX<type>::insertFirst(const type &firstNode)
{
	 nodeType<type>* pointer = new nodeType<type>;
	 pointer->info = firstNode;
	

	 if (this->isEmptyList())
	 {
		 this->first = pointer;
		 this->last = pointer;
	 }
	 else
	 {
		 pointer->link = this->first;
		 this->first = pointer;
	 }
	 
	 this->count++;
}

template<class type>
 void linklistEX<type>::insertLast(const type & lastNode)
{
	 
	
	 
	 nodeType<type>* pointer2 = new nodeType<type>;
	 pointer2->info = lastNode;
	 if (this->isEmptyList())
	 {
		 this->first = pointer2;
		 this->last = pointer2;
	 }
	 else
	 {
		 this->last->link = pointer2;
		 this->last = this->last->link;
	 }
	 this->last->link = nullptr;
	 this->count++;
}

template<class type>
void linklistEX<type>::deletNode(const type & noNode)
{
	// when the function is called check to see if the noNode type is == to one of the nodetypes and 
	// delet that node.
	nodeType<type>* Head;
	nodeType<type>* Tell;

	if (this->count == 1)
	{
		delete this->first;
		this->count--;
		return;
	}
	Head = this->first;
	Tell = this->first;
	int temp = 0;
	while (temp < this->count)
	{
		if (Head->info == noNode)
		{
			this->first = this->first->link;
			delete Head;
			this->count--;
			return;
		}
		if (Head->info != noNode)
		{
			Head = Head->link;
			if (Head == this->last)
			{
				this->last = Tell;
				Tell->link = nullptr;
				delete Head;
				this->count--;
				return;
			}
			if (Head->info == noNode)
			{
				Tell->link = Head->link;
				delete Head;
				this->count--;
				return;
			}
			Tell = Tell->link;
		}

				
	}
}