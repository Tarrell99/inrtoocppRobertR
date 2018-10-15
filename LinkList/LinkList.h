#pragma once
#include "NodeType.h"
template<class Type>
class linkList
{
protected:
	int count;
	nodeType<Type>* first;
	nodeType<Type>* last;

public:
	const linkList<Type>& operator = (const linkList<Type>&);
	void initializeList();
	 bool isEmptyList() const;
	 void print() const;
	 int length() const;
	void destroyList();
	 Type front() const;
	 Type back() const;
	 bool search(const Type&) const = 0;
	 void insertFirst(const Type&) = 0;
	 void insertLast(const Type&) = 0;
	 void deletNode(const Type&) = 0;
	 linkList<Type> end();
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
