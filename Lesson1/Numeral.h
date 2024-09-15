#pragma once
#include <iostream>
#include <vector>

using namespace std;

	class Numeral
	{
	public:
		Numeral();
		~Numeral();
		vector<int>splittToDigits();
		int setValue(int value);
		void getValue();

	private:
		int value;

	};