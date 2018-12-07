#pragma once
//#include"NodeType.h"
#include"NodeType2.h"

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
	bool operator == (const linkedListIterator<Type>&) const;// combares to see if its ==
	bool operator != (const linkedListIterator<Type>&) const;// opustof last one
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
 bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>& Node) const
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
 bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>& Node) const
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
