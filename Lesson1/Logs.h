#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Logs
{
public:
	Logs(bool nivenaVerefy);
	~Logs();
	void logResult();
private:
	bool nivenaVerefy;
};



