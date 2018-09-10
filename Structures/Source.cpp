#include<iostream>
#include<string>

struct Item
{
	std::string name;
	int price = 100;
};
struct Stock
{
	Item item;
	int quantity = 10;
};
struct Shop
{
	Stock Swords;
	int money;
};

struct Buyer
{
	int Buy(Stock item)
	{
		return 0;
	}
	int money = 100;
};
int main()
{
	Buyer josh;
	Buyer tk;
	Buyer robRiley;

	
	Item sword;

	Shop walgreens;


	Stock swordStock;
	walgreens.Swords = swordStock;
	josh.Buy(walgreens.Swords);
	sword.price
	josh.Buy(sword);
	
	for (int i = 0; i < 11; i++)
	{
		for (int j = 10; j = 0; j--)
		{
			std::cout << "you bougthe a sword" << std::endl;
		}
		
	}
	


}