#include "Logs.h"
Logs::Logs(bool nivenaVerefy)
{
	this->nivenaVerefy = nivenaVerefy;
}

Logs::~Logs()
{
}

void Logs::logResult()
{
	if (nivenaVerefy)
	{
		cout<< endl << "����� �������� ������ ������";
	}
	else
	{
		cout << endl << "����� �� �������� ������ ������";
	}
}
