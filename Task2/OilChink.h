#pragma once
#include "Chink.h"
#include <iostream>
#include <string>

using namespace std;

class OilChink : //Класс Нефтяная Скважина
	public Chink
{
public:
	OilChink(); //Конструктор без параметров
	OilChink(double velocity); //Конструктор с заполнением скважины содержимым размера capacity
	OilChink(double velocity, string name); //Конструктор с заполнением скважины содержимым размера capacity и задачей имени name
	OilChink(string name); //Конструктор с задачей имени name
	double work(); //Совершить итерацию добычи на скважине
	void minedInformation(double content);
	string getInformation(); //Получить информацию о скважине в виде строки
	~OilChink(); //Деструктор 
private:
	string name; //Поле имени скважины
};

