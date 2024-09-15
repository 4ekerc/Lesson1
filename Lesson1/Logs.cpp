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
		cout<< endl << "Число является числом нивена";
	}
	else
	{
		cout << endl << "Число не является числом нивена";
	}
}
