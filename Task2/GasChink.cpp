#include "GasChink.h"



GasChink::GasChink() : Chink()
{
}

GasChink::GasChink(double velocity) : Chink(velocity)
{
}

GasChink::GasChink(string name) : Chink()
{
	this->name = name;
}

GasChink::GasChink(double velocity, string name) : Chink(velocity)
{
	this->name = name;
}

double GasChink::work()
{
	this->turnOn();
	double content = this->getVelocity();
	return content;
}

void GasChink::minedInformation(double content)
{
	 cout << "GasChink " + name + " has mined " + to_string(content) + " of gas" << endl;
}

string GasChink::getInformation()
{
	return this->isWorking ? "GasChink " + this->name + " with " + to_string(this->getVelocity()) + " velocity " + "and is working"
		: "GasChink " + this->name + " has " + to_string(this->getVelocity()) + " velocity " + "and is not working";
}

GasChink::~GasChink()
{
	cout << "GasChink " + this->name + " was deleted" << endl;
}
