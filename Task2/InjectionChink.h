#pragma once
#include "Chink.h"
#include <iostream>
#include <string>

using namespace std;

class InjectionChink : //Класс Нагнетательной Скважины (Водяной Скважины)
	public Chink
{
public:
	InjectionChink(); //Конструктор без параметров
	InjectionChink(double velocity); //Конструктор с заполнением скважины содержимым размера capacity
	InjectionChink(double velocity, string name); //Конструктор с заполнением скважины содержимым размера capacity и задачей имени name
	InjectionChink(string name); //Конструктор задачей имени name
	double work(); //Совершить итерацию закачки на скважине
	void minedInformation(double content);
	string getInformation(); //Получить информацию о скважине в виде строки
	~InjectionChink(); //Деструктор
private:
	string name; //Поле имени скважины
};

