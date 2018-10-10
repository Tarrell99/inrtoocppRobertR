#pragma once
#include <iostream>
template<class Type>
class Iterator
{
private:
	nodeType<Type> current*

public:
	Iterator();
	Iterator(nodeType<Type>);
	Type operator*();
	Iterator<Type> operator++();
	const bool operator == (const Iterator<Type>&);
	const bool operator! = (const Iterator<Type>&);
};
