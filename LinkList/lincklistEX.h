#pragma once
#include"LinkList.h"


template<class type>
class linklistEX : public linkList<type>
{


	bool search(const type&) const;
	void insertFirst(const type&);
	void insertLast(const type&);
	void deletNode(const type&);

};
//////////////////////////////////////////////////////////////////////
template<class type>
 bool linklistEX<type>::search(const type &) const
{

	return false;
}

template<class type>
 void linklistEX<type>::insertFirst(const type &firstNode)
{
	 nodeType<type>* pointer = new nodeType<type>;
	 pointer->info = firstNode;
	 pointer->link = first;
	 first = pointer;
}

template<class type>
 void linklistEX<type>::insertLast(const type & lastNode)
{
	 nodeType<type>* pointer2 = new nodeType<type>;
	 pointer2->info = lastNode;
	last->link = pointer2 ;
	 last = last->link;
 
}

template<class type>
 void linklistEX<type>::deletNode(const type & noNode)
{
	 // when the function is called check to see if the noNode type is == to one of the nodetypes and 
	 // delet that node.

	 if (nodeType<Type>nodeType == noNode)
	 {
		 delete nodeType;
	 }
}
