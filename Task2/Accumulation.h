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

class Accumulation //����� �������������
{
public:
	Accumulation(); //����������� ��� ����������
	Accumulation(double oilCapacity, double gasCapacity); //����������� � ����������� ������ ���� � ����� � �������������
	double getOilCapacity(); //�������� ����� ����� � �������������
	double getGasCapacity(); //�������� ����� ���� � �������������
	double getWaterCapacity(); //�������� ����� ���� � �������������
	double getMinedOilCapacity(); //�������� ����� ������� �����
	double getMinedGasCapacity(); //�������� ����� �������� ����
	double getInjectedWaterCapacity(); //�������� ����� ���������� ����
	void getContentInformation(); //�������� ���������� � �������� �������������
	void addChink(Chink* chink); //�������� ����� ��������
	void deleteChink(int position); //������� �������� �� ������� position
	void turnChinkOn(int position); //�������� �������� �� ������� position
	void turnChinkOff(int position); //��������� �������� �� ������� position
	void turnAllChinksOn(); //�������� ��� ��������
	void turnAllChinksOff(); //��������� ��� ��������
	void showChinks(); //�������� ���������� � ���� ��������� �������������
	void doIteration(); //�������� ���� �������� ������ �������
	~Accumulation(); //���������� 
private:
	vector<Chink*> chinks; //������ ������� �������������
	double oilCapacity; //����� ����� � �������������
	double gasCapacity; //����� ���� � �������������
	double waterCapacity; //����� ���� � �������������
	double minedOilCapacity; //����� ������� �����
	double minedGasCapacity; //����� �������� ����
	double injectedWaterCapacity; //����� ���������� ����
};

