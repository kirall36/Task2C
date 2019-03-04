#include "OilChink.h"

OilChink::OilChink() : Chink()
{
	this->name = "without name";
}

OilChink::OilChink(double velocity) : Chink(velocity)
{
	this->name = "without name";
}

OilChink::OilChink(double velocity, string name) : Chink(velocity)
{
	this->name = name;
}

OilChink::OilChink(string name) : Chink()
{
	this->name = name;
}

double OilChink::work()
{
	this->turnOn();
	double content = this->getVelocity();
	return content;
}

void OilChink::minedInformation(double content)
{
	cout << "OilChink " + name + " has mined " + to_string(content) + " of oil" << endl;
}

string OilChink::getInformation()
{
	return this->isWorking ? "OilChink " + this->name + " with " + to_string(this->getVelocity()) + " velocity " + "and is working"
		: "OilChink " + this->name + " with " + to_string(this->getVelocity()) + " velocity " + "and is not working";
}

OilChink::~OilChink()
{
	cout << "OilChink " + name + " was deleted" << endl;
}