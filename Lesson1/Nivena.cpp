#include "Nivena.h"
Nivena::Nivena(vector<int>&splitToDigits)
{
	this->splitToDigits = splitToDigits;
}

Nivena::~Nivena()
{
}

int Nivena::setValue(int value)
{
	this->value = value;
	return 0;
}

void Nivena::getValue()
{
	cout << endl<<value;
}

bool Nivena::isVerefy()
{

	int sumToDigits = 0;
	for (size_t i = 0; i < splitToDigits.size(); i++)
	{
		sumToDigits += splitToDigits[i];
	}

	return value % sumToDigits==0;
}