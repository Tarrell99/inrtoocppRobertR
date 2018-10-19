#pragma once
#include"NodeType.h"
template<class Type>
class linkedListIterator
{
private:
	nodeType<Type>* current;

public:
	linkedListIterator();//counstor 
	linkedListIterator(nodeType<Type>*);// counstor where set curnt to node 
	Type operator*();// derues returns something
    linkedListIterator<Type> operator++();// move the  thing
	const bool operator == (const linkedListIterator<Type>&);// combares to see if its ==
	const bool operator != (const linkedListIterator<Type>&);// opustof last one
};

//////////////////////////////////////////////////////////////////////////////

template<class Type>
 linkedListIterator<Type>::linkedListIterator()
{ // what the current is pointing at.
	 current = nullptr;
}

template<class Type>
 linkedListIterator<Type>::linkedListIterator(nodeType<Type>* Node)
{
	 current = Node;
}

template<class Type>
 Type linkedListIterator<Type>::operator*()
{
//current->info what i need to return.
		 return current->info;
}

template<class Type>
 linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
	
	 current = current->link;
	 return *this;
}

template<class Type>
 const bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>& Node)
{
	 if (this->current == Node.current)
	 {
		 return true;
	 }
	 else 
	 {
		 return false;
	 }
}

template<class Type>
 const bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>& Node)
{
	 if ( this.current != Node.current )
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
}
