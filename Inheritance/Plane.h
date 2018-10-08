#pragma once
#include "Vehicle.h"

class Plane : public TransportVehicle
{
private: 
	void Fly();



public:

	virtual int Move()
	{
		void fly();
	}

	bool HasWings()
	{
		return true;
	}

	bool HasWheels()
	{
		return true;
	}
};
