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
	const linkList<Type>& operator = (const linkList<Type>&);
	void initializeList();// set the member verble to something 
	 bool isEmptyList() const;// return the count to 0 if the list is empty
	 void print() const;// print all vale in each node
	 int length() const;// tells how many nodes are in the list
	void destroyList();// delitlet all the nodes in the list
	 Type front() const;//returns the value of the first node
	 Type back() const;// returns the value of the last node
	 bool search(const Type&) const = 0;// returns if any of the armuts are in the nodes 
	 void insertFirst(const Type&) = 0;// inserts the node in the beging of the list
	 void insertLast(const Type&) = 0;// inserts the node in the end of the list
	 void deletNode(const Type&) = 0;// delet one node with the arugment in it
	 linkList<Type> end();//
	 linkList(); 
	 linkList(const linkList<Type>&);

private:
	void copyList(const linkList<Type>&);
};


//////////////////////////////////////////////////////////////////



template<class Type>
 const linkList<Type>& linkList<Type>::operator=(const linkList<Type>&)
{
	// TODO: insert return statement here
}

template<class Type>
 void linkList<Type>::initializeList()
{

}

template<class Type>
 bool linkList<Type>::isEmptyList() const
{
	 if (isEmptyList = 0)
	 {
		 return true;
	 }
	return false;
}

template<class Type>
 void linkList<Type>::print() const
{
	 
}

template<class Type>
 int linkList<Type>::length() const
{
	return 0;
}

template<class Type>
 void linkList<Type>::destroyList()
{

}

template<class Type>
 Type linkList<Type>::front() const
{
	return Type();
}

template<class Type>
 Type linkList<Type>::back() const
{
	return Type();
}

 

 template<class Type>
  linkList<Type> linkList<Type>::end()
 {
	 
	 return linkList<Type>();
 }

 template<class Type>
 linkList<Type>::linkList()
{
  
}

template<class Type>
 linkList<Type>::linkList(const linkList<Type>&)
{

}

template<class Type>
 void linkList<Type>::copyList(const linkList<Type>&)
{

}
