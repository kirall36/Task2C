#pragma once
#include <iostream>
#include <limits>

using namespace std;

class Chink //����� ��������
{
public:
	virtual double work(); //��������� �������� ������ �� ��������
	virtual string getInformation(); //�������� ���������� � �������� � ���� ������
	void turnOn(); //�������� ��������� ��������
	void turnOff(); //��������� ��������� ��������
	bool hasStatus(); //�������� ������ ������ �������� - ��������/�� ��������
	double getVelocity(); //�������� ������������������ ��������
	virtual void minedInformation(double content); 
	Chink(); //����������� ��� ����������
	Chink(double capacity); //����������� � ����������� �������� ���������� ������� capacity
	virtual ~Chink(); //����������
protected:
	bool isWorking; //���� ������� ������ �������� - ��������/�� ��������
	double velocity; //���� ������������������ ��������
};

