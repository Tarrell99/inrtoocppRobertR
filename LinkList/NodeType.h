#pragma once
#include "Iterator"
template<class Type>
struct nodeType
{
	Type info;
	nodeType<Type>* link;
};
