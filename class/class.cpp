#include<iostream>
class Fighter
{
private:
	int m_heath;
	int m_power;
public:
	void TakeDamage(int amount);
	void fight(Fighter & other);
		
};

int main()
{
	Fighter* ryu = new Fighter();
	ryu->fight(*ryu);
}