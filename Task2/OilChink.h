#pragma once
#include "Chink.h"
#include <iostream>
#include <string>

using namespace std;

class OilChink : //����� �������� ��������
	public Chink
{
public:
	OilChink(); //����������� ��� ����������
	OilChink(double velocity); //����������� � ����������� �������� ���������� ������� capacity
	OilChink(double velocity, string name); //����������� � ����������� �������� ���������� ������� capacity � ������� ����� name
	OilChink(string name); //����������� � ������� ����� name
	double work(); //��������� �������� ������ �� ��������
	void minedInformation(double content);
	string getInformation(); //�������� ���������� � �������� � ���� ������
	~OilChink(); //���������� 
private:
	string name; //���� ����� ��������
};

