#pragma once
#include "Stack.h"

Hero Stack::Top()
{
	Hero* myTop = &mData[0];
	mCount++;
}


// pops off the top of the stack to have the hero fight
bool Stack::Pop()
{
 //if isFull return true pop
	if (isFull) 
	{
		return true;
	}
}

// pushes the hero in to the stack and then puts the winner in the winner stack 
bool Stack::Push(Hero* Fighter)
{
	mData[mCount] = *Fighter;
	mCount = mCount + 1;
	 
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
	if (mCount == 2)
	{
		return true;
	}
	
}
