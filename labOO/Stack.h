#pragma once
#include "Hero.h"

class Stack
{
private:
	Hero mData[4];//array
	int mCount;// index

public:
	// tells what is on the top of the stack
	Hero Top();


	// pops off the top of the stack to have the hero fight
	bool Pop();

	// pushes the hero in to the stack and then puts the winner in the winner stack 
	bool Push(Hero*);

	// tells me if the stack is empty
	bool isEmpty();

	// tells me if the stack is full
	bool isFull();

};
