#include "Numeral.h"
Numeral::Numeral()
{
}

Numeral::~Numeral()
{
}

vector<int> Numeral::splittToDigits()
{
    int temp = value;
    vector<int> valueArray;
    while (temp > 0)
    {
        valueArray.push_back(temp % 10);
        temp /= 10;
    }
    reverse(valueArray.begin(), valueArray.end());
    return valueArray;
}

int Numeral::setValue(int value)
{
    this->value = value;
    return 0;
}

void Numeral::getValue()
{
    cout<<endl << value;
}
