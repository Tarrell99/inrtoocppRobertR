#pragma once
#include "Vehicle.h";

class Bike : public TransportVehicle
{
private:
	void Pedal();

public:

	 virtual int Move()
	{
		void Pedal();
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

