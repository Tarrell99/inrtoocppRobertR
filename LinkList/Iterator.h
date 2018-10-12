#pragma once
#include <iostream>
template<class Type>
class linkedListIterator
{
private:
	nodeType<Type>* current;

public:
	linkedListIterator();
	linkedListIterator(nodeType<Type>);
	Type operator*();
	Iterator<Type> operator++();
	const bool operator == (const linkedListIterator<Type>&);
	const bool operator! = (const linkedListIterator<Type>&);
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
	return false;
}

template<class Type>
 const bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&)
{
	return false;
}
