#include<iostream>
#include<string>

struct Item
{
	std::string name;
	int price;
};
struct Stock
{
	Item item;
	int quantity;
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
	int money;
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


}