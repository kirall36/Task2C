#include "Chink.h"


Chink::Chink()
{
	this->isWorking = false;
	this->velocity = 1.0;
}

Chink::Chink(double velocity)
{
	this->velocity = velocity;
	this->isWorking = false;
}

void Chink::turnOn()
{
	this->isWorking = true;
}

void Chink::turnOff()
{
	this->isWorking = false;
}

bool Chink::hasStatus()
{
	return this->isWorking;
}


double Chink::work()
{
	this->turnOn();
	double content = this->getVelocity();
	cout << "Chink mined " << content << " of resources"  << endl;
	return content;
}

string Chink::getInformation()
{
	return "";
}

void Chink::minedInformation(double content)
{
}

double Chink::getVelocity()
{
	return velocity;
}

Chink::~Chink()
{
}
