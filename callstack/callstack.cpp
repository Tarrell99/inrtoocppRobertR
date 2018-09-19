#include<iostream>
// 42=+ 45=-
class Stack
{
private:
	int values[20]; // array
	int count = 0; // index
	
public:
	
	// tells you what is on top
	int top()
	{
		// it should point to the last number that was pushed on but i do not know if i 
		// need the {count = count + 1} to make sure it was the last one pushed.
		int* myTop = &values[0];
		/*count = count + 1;*/
	}
	//takes an item off the top of the stack
	void pop()
	{
		values[count] = -1;
		count = count - 1;
		if (int i = 42)
		{
			// it would then add 
		}
		else if (int j = 45)
		{
			// it would then mins
		}
		else
		{
			return ;
		}
	}

	void push(int val)
	{
		
		//add an item to the top of the stack
		values[count] = val;
		count = count + 1;
		std::cin >> val;
	}
	// tells if the next pop will go below 1
	bool isEmpty()
	{
		// my line of thinking was if myTop points to something less then one it would
		// come back as fales but i see the problm with it now but im not really sure how 
		// to fix it.
		while (int* myTop = &values[1])
		{
			return 0;
		}
		
	}
};



int main()
{
	Stack Stack;
	Stack.push(20);
	
	
}


