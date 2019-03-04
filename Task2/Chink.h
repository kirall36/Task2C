#pragma once
#include <iostream>
#include <limits>

using namespace std;

class Chink //Класс Скважина
{
public:
	virtual double work(); //Совершить итерацию добычи на скважине
	virtual string getInformation(); //Получить информацию о скважине в виде строки
	void turnOn(); //Включить обработку скважины
	void turnOff(); //Отключить обработку скважины
	bool hasStatus(); //Получить статус работы скважины - работает/не работает
	double getVelocity(); //Получить производительность скважины
	virtual void minedInformation(double content); 
	Chink(); //Конструктор без параметров
	Chink(double capacity); //Конструктор с заполнением скважины содержимым размера capacity
	virtual ~Chink(); //Деструктор
protected:
	bool isWorking; //Поле статуса работы скважины - работает/не работает
	double velocity; //Поле производительности скважины
};

