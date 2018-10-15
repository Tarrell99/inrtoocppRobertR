#pragma once
#include <iostream>
template<class Type>
class linkedListIterator
{
private:
	nodeType<Type>* current;

public:
	linkedListIterator();//counstor 
	linkedListIterator(nodeType<Type>);// counstor where set curnt to node 
	Type operator*();// derues returns something
	Iterator<Type> operator++();// move the dam thing
	const bool operator == (const linkedListIterator<Type>&);// combares to see if its ==
	const bool operator! = (const linkedListIterator<Type>&);// opustof last one
};

//////////////////////////////////////////////////////////////////////////////

template<class Type>
 linkedListIterator<Type>::linkedListIterator()
{
  
}

template<class Type>
 linkedListIterator<Type>::linkedListIterator(nodeType<Type>)
{

}

template<class Type>
 Type linkedListIterator<Type>::operator*()
{
	return Type();
}

template<class Type>
 Iterator<Type> linkedListIterator<Type>::operator++()
{
 
	return Iterator<Type>();
}

template<class Type>
 const bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>&)
{
	 if (linkedListIterator == linkedListIterator)
	 {
		 return true
	 }

	 else 
	 {
		 return false;
	 }
}

template<class Type>
 const bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&)
{
	 if (linkedListIterator != linkedListIterator)
	 {
		 return true;
	 }
	 else
	 {
		 return false;
	 }
}
