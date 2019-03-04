#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include "Chink.h"
#include "OilChink.h"
#include "GasChink.h"
#include "InjectionChink.h"

using namespace std;

class Accumulation //Класс месторождение
{
public:
	Accumulation(); //Конструктор без параметров
	Accumulation(double oilCapacity, double gasCapacity); //Конструктор с параметрами объема газа и нефти в месторождении
	double getOilCapacity(); //Получить объем нефти в месторождении
	double getGasCapacity(); //Получить объем газа в месторождении
	double getWaterCapacity(); //Получить объем воды в месиорождении
	double getMinedOilCapacity(); //Получить объем добытой нефти
	double getMinedGasCapacity(); //Получить объем добытого газа
	double getInjectedWaterCapacity(); //Получить объем закачанной воды
	void getContentInformation(); //Получить информацию о ресурсах месторождения
	void addChink(Chink* chink); //Добавить новую скважину
	void deleteChink(int position); //Удалить скважину на позиции position
	void turnChinkOn(int position); //Включить скважину на позиции position
	void turnChinkOff(int position); //Выключить скважину на позиции position
	void turnAllChinksOn(); //Включить все скважины
	void turnAllChinksOff(); //Выключить все скважины
	void showChinks(); //Получить информацию о всех скважинах месторождения
	void doIteration(); //Провести одну итерацию работы скважин
	~Accumulation(); //Деструктор 
private:
	vector<Chink*> chinks; //Вектор скважин месторождения
	double oilCapacity; //Объем нефти в месторождении
	double gasCapacity; //Объем газа в месторождении
	double waterCapacity; //Объем воды в месторождении
	double minedOilCapacity; //Объем добытой нефти
	double minedGasCapacity; //Объем добытого газа
	double injectedWaterCapacity; //Объем закачанной воды
};

