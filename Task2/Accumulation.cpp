#include "Accumulation.h"

Accumulation::Accumulation()
{
	this->oilCapacity = 1000.0;
	this->gasCapacity = 1000.0;
	this->waterCapacity = 0.0;
	this->minedOilCapacity = 0.0;
	this->minedGasCapacity = 0.0;
	this->injectedWaterCapacity = 0.0;
}

Accumulation::Accumulation(double oilCapacity, double gasCapacity)
{
	this->oilCapacity = oilCapacity;
	this->gasCapacity = gasCapacity;
	this->waterCapacity = 0.0;
	this->minedOilCapacity = 0.0;
	this->minedGasCapacity = 0.0;
	this->injectedWaterCapacity = 0.0;
}

double Accumulation::getOilCapacity()
{
	return this->oilCapacity;
}

double Accumulation::getGasCapacity()
{
	return this->gasCapacity;
}

double Accumulation::getWaterCapacity()
{
	return this->waterCapacity;
}

double Accumulation::getMinedOilCapacity()
{
	return this->minedOilCapacity;
}

double Accumulation::getMinedGasCapacity()
{
	return this->minedGasCapacity;
}

double Accumulation::getInjectedWaterCapacity()
{
	return this->injectedWaterCapacity;
}

void Accumulation::getContentInformation()
{
	cout << "Oil capacity in accumulation is " + to_string(this->getOilCapacity()) << endl;
	cout << "Gas capacity in accumulation is " + to_string(this->getGasCapacity()) << endl;
	cout << "Water capacity in accumulation is " + to_string(this->getWaterCapacity()) << endl;
	cout << "Capacity of mined oil in accumulation is " + to_string(this->getMinedOilCapacity()) << endl;
	cout << "Capacity of mined gas in accumulation is " + to_string(this->getMinedGasCapacity()) << endl; 
	cout << "Capacity of injected water in accumulation is " + to_string(this->getInjectedWaterCapacity()) << endl;
}

void Accumulation::addChink(Chink* chink)
{
	this->chinks.push_back(chink);
}

void Accumulation::showChinks()
{
	int position = 0;
	for (Chink* c : this->chinks)
	{
		cout << position << " " << c->getInformation() << endl;
		position++;
	}
}

void Accumulation::deleteChink(int position)
{
	cout << this->chinks[position]->getInformation() << " was deleted" << endl;
	this->chinks.erase(this->chinks.begin() + position);
}

void Accumulation::turnChinkOn(int position)
{
	this->chinks[position]->turnOn();
}

void Accumulation::turnChinkOff(int position)
{
	this->chinks[position]->turnOff();
}

void Accumulation::turnAllChinksOn()
{
	for (Chink* c : this->chinks)
	{
		c->turnOn();
	}
}

void Accumulation::turnAllChinksOff()
{
	for (Chink* c : this->chinks)
	{
		c->turnOff();
	}
}

void Accumulation::doIteration()
{
	double amount = 0.0;
	double content = 0.0;
	for (Chink* c : this->chinks)
	{
		if (c->hasStatus())
		{
			content = c->work();
			if (typeid(*c) == typeid(OilChink))
			{
				if (this->oilCapacity - content >= 0)
				{
					this->minedOilCapacity += content;
					this->oilCapacity -= content;
					c->minedInformation(content);
				}
				else if (this->oilCapacity == 0)
				{
					c->minedInformation(0.0);
					continue;
				}
				else
				{
					this->minedOilCapacity += this->oilCapacity;
					this->oilCapacity = 0.0;
					c->minedInformation(this->oilCapacity);
				}
			}
			else if (typeid(*c) == typeid(GasChink))
			{
				if (this->gasCapacity - content >= 0)
				{
					this->minedGasCapacity += content;
					this->gasCapacity -= content;
					c->minedInformation(content);
				}
				else if (this->gasCapacity == 0)
				{
					c->minedInformation(0.0);
					continue;
				}
				else
				{
					this->minedGasCapacity += this->gasCapacity;
					this->gasCapacity = 0.0;
					c->minedInformation(this->gasCapacity);
				}
			}
			else if (typeid(*c) == typeid(InjectionChink))
			{
				if (this->waterCapacity < numeric_limits<double>::max())
				{
					this->waterCapacity += content;
					this->injectedWaterCapacity += content;
					c->minedInformation(content);
				}
				else
				{
					c->minedInformation(0.0);
					continue;
				}
			}

		}
	}
}

Accumulation::~Accumulation()
{
	for (Chink* c : this->chinks)
	{
		delete c;
	}
}
