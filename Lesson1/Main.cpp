#include <iostream>
#include <vector>
#include <algorithm>
#include "Numeral.h"
#include "Nivena.h"
#include "Logs.h"

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	int number;
	cout << "¬ведите число дл€ проверки: "; cin >> number;
	Numeral Numbers;
	Numbers.setValue(number);
	vector<int>splitToDigits = Numbers.splittToDigits();
	Nivena nivena(splitToDigits);
	nivena.setValue(number);
	bool nivenaVerefy = nivena.isVerefy();
	Logs logs(nivenaVerefy);
	logs.logResult();
}