#pragma once
#include "Chink.h"
#include <iostream>
#include <string>

using namespace std;

class GasChink : //Класс Газовая Скважина
	public Chink
	{
public:
	GasChink(); //Конструктор без параметров
	GasChink(double velocity); //Конструктор с заполнением скважины содержимым размера capacity
	GasChink(double velocity, string name); //Конструктор с заполнением скважины содержимым размера capacity и задачей имени name
	GasChink(string name); //Конструктор задачей имени name
	double work(); //Совершить итерацию добычи на скважине
	void minedInformation(double content);
	~GasChink(); //Деструктор
	string getInformation(); //Получить информацию о скважине в виде строки
private:
	string name; //Поле имени скважины
};

