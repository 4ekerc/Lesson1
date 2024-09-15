#pragma once
#include <iostream>
#include <vector>

using namespace std;


class Nivena
{
public:
	Nivena(vector<int>& splitToDigits);
	~Nivena();
	int setValue(int value);
	void getValue();
	bool isVerefy();
	vector<int>splitToDigits;
private:
	int value;
};


