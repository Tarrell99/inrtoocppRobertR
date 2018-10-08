#pragma once
#include "Vehicle.h";

class Car : public TransportVehicle
{
private:
	void Drive();


public:
	virtual int Move()
	{
		Drive();
	}
	bool HasWings()
	{
		return false;
	}

	bool HasWheels()
	{
		return true;
	}
};

