#include "Decimal.h"
#include <iostream>
using namespace std;
void Decimal::setNum(int num)
{
	this->num = num;
}

void Decimal::setDeNum(int denum)
{
	this->denum = denum;
}

void Decimal::show()
{
	cout << "Текущая дробь: " << num << "/" << denum<<endl;
}

void Decimal::add(int x)
{
	this->num = x * denum + num;
}

void Decimal::sub(int x)
{
	this->num = x * this->denum - this-> num;
}

void Decimal::mult(int x)
{
	this->num = num * x;
}

void Decimal::div(int x)
{
	this->denum = denum * x;
}
