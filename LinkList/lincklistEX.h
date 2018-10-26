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
	 linklistEX<type>* Lookfor;
	 if (Lookfor == found)
	 {

		 return true;
	 }
	 else
	 {
		 return false;
	 }
}

template<class type>
 void linklistEX<type>::insertFirst(const type &firstNode)
{
	 nodeType<type>* pointer = new nodeType<type>;
	 pointer->info = firstNode;
	 pointer->link = this->first;
	 this->first = pointer;
}

template<class type>
 void linklistEX<type>::insertLast(const type & lastNode)
{
	 nodeType<type>* pointer2 = new nodeType<type>;
	 pointer2->info = lastNode;
	this->last->link = pointer2 ;
	 this->last = this->last->link;
 
}

template<class type>
 void linklistEX<type>::deletNode(const type & noNode)
{
	 // when the function is called check to see if the noNode type is == to one of the nodetypes and 
	 // delet that node.
	 nodeType<type>* Head = first;
	 nodeType<type>* Tell = Head;
	 
	 if (Head == noNode)
	 {
		 Tell++;
		 
	 }
	 else
	 {
		 while (Tell == Head)
		 {
			 Head++;
			 Tell++;
		 }
	 }
}
