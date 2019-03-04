#pragma once
#include "Chink.h"
#include <iostream>
#include <string>

using namespace std;

class GasChink : //����� ������� ��������
	public Chink
	{
public:
	GasChink(); //����������� ��� ����������
	GasChink(double velocity); //����������� � ����������� �������� ���������� ������� capacity
	GasChink(double velocity, string name); //����������� � ����������� �������� ���������� ������� capacity � ������� ����� name
	GasChink(string name); //����������� ������� ����� name
	double work(); //��������� �������� ������ �� ��������
	void minedInformation(double content);
	~GasChink(); //����������
	string getInformation(); //�������� ���������� � �������� � ���� ������
private:
	string name; //���� ����� ��������
};

