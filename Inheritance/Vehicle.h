#pragma once
#include <iostream>

class TransportVehicle
{

private:
	int m_Size;
	char m_color;

public:
	virtual int Move();
	bool HasWings();
	bool HasWheels();
	
};

