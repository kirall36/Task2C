#include <iostream>
#include <string>
#include <sstream>
#include "Chink.h"
#include "OilChink.h"
#include "GasChink.h"
#include "InjectionChink.h"
#include "Accumulation.h"

using namespace std;

int main()
{
	double oilCapacity = 0.0;
	double gasCapacity = 0.0;

	cout << "Enter oil capacity of your accumulation" << endl;
	cin >> oilCapacity;
	cout << "Enter gas capacity of your accumulation" << endl;
	cin >> gasCapacity;

	Accumulation* accumulation = new Accumulation(oilCapacity, gasCapacity);

	int variant = 0;
	int typeOfChink = 0;
	int position = 0;
	int turn = 0;
	int allOrOne = 0;
	string name = "";
	double velocity = 0.0;
	bool exit = false;
	while (!exit)
	{
		cout << "Choose variant: \n 0 - Add Chink 1 - Show Chinks 2 - Delete Chink 3 - Turn Chink/Chinks On/Off \n 4 - Get information about resources 5 - Do iteration 6 = Exit" << endl;
		cin >> variant;
		switch (variant)
		{
			case 0:
				cout << "Choose type of chink: 0 - Oil Chink  1 - Gas Chink  2 - Injection Chink" << endl;
				cin >> typeOfChink;
				cout << "Input name of chink: ";
				cin.ignore();
				getline(cin, name);
				cout << "Input velocity of chink: ";
				cin >> velocity;
				switch (typeOfChink)
				{
					case 0:
						accumulation->addChink(new OilChink(velocity, name));
						break;

					case 1:
						accumulation->addChink(new GasChink(velocity, name));
						break;

					case 2:
						accumulation->addChink(new InjectionChink(velocity, name));
						break;
				}
				break;

			case 1:
				accumulation->showChinks();
				break;

			case 2:
				accumulation->showChinks();
				cout << "Choose chink to delete: ";
				cin >> position;
				accumulation->deleteChink(position);
				break;

			case 3:
				cout << "You want to turn 0 - Chinks  1 - Chink ? ";
				cin >> allOrOne;
				cout << "You want to turn 0 - On  1 - Off ? ";
				cin >> turn;
				switch (allOrOne)
				{
					case 0:
						switch (turn)
						{
							case 0:
								accumulation->turnAllChinksOn();
								break;

							case 1:
								accumulation->turnAllChinksOff();
								break;

							default:
								break;
						}
						break;

					case 1:
						accumulation->showChinks();
						cout << "Choose a chink to turn: ";
						cin >> position;
						switch (turn)
						{
							case 0:
								accumulation->turnChinkOn(position);
								break;

							case 1:
								accumulation->turnChinkOff(position);
								break;

							default:
								break;
						}
						break;

					default:
						break;
				}
				break;

			case 4:
				accumulation->getContentInformation();
				break;

			case 5:
				accumulation->doIteration();
				accumulation->getContentInformation();
				break;

			case 6:
				exit = true;
				delete accumulation;

			default:
				break;
		}
	}
}
