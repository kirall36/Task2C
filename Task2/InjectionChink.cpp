#include "InjectionChink.h"


InjectionChink::InjectionChink() : Chink()
{
}

InjectionChink::InjectionChink(double velocity) : Chink(velocity)
{
}

InjectionChink::InjectionChink(double velocity, string name) : Chink(velocity)
{
	this->name = name;
}

InjectionChink::InjectionChink(string name) : Chink()
{
	this->name = name;
}

double InjectionChink::work()
{
	this->turnOn();
	double content = this->getVelocity();
	return content;
}

void InjectionChink::minedInformation(double content)
{
	cout << "InjectionChink " + this->name + " has pumped " + to_string(content) + " of water" << endl;
}

string InjectionChink::getInformation()
{
	return this->isWorking ? "InjectionChink " + this->name + " with " + to_string(this->getVelocity()) + " velocity " + "and is working"
		: "InjectionChink " + this->name + " with " + to_string(this->getVelocity()) + " velocity " + "and is not working";
}

InjectionChink::~InjectionChink()
{
	cout << "InjectionChink " + name + " was deleted" << endl;
}
