#include "Stack.h"

Hero Stack::Top()
{
	Hero* myTop = &mData[0];
	mData[mCount];
	return mData[mCount];
}



bool Stack::Pop(Hero* Fighter)
{
	if (mCount = 4)
	mData[mCount] = *Fighter;
	mCount = mCount - 1;

	return true;
}

// looks at all  the hero in the stack 
bool Stack::Push(Hero* Fighter)
{
	if (mCount < 4) 
	{
		mData[mCount] = *Fighter;
		mCount = mCount + 1;
	}
	else
	{
		return false;
	}
}

// tells me if the stack is empty
bool Stack::isEmpty()
{
	if ( mCount == 0 )
	{
		return true;
	}
	
}

// tells me if the stack is full
bool Stack::isFull()
{
	if (mCount == 4)
	{
		return true;
	}
	
}
