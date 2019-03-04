#pragma once
#include "Chink.h"
#include <iostream>
#include <string>

using namespace std;

class InjectionChink : //����� �������������� �������� (������� ��������)
	public Chink
{
public:
	InjectionChink(); //����������� ��� ����������
	InjectionChink(double velocity); //����������� � ����������� �������� ���������� ������� capacity
	InjectionChink(double velocity, string name); //����������� � ����������� �������� ���������� ������� capacity � ������� ����� name
	InjectionChink(string name); //����������� ������� ����� name
	double work(); //��������� �������� ������� �� ��������
	void minedInformation(double content);
	string getInformation(); //�������� ���������� � �������� � ���� ������
	~InjectionChink(); //����������
private:
	string name; //���� ����� ��������
};

