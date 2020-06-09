#include "IseveralFunc.h"

double TwoVarFunc::calculate(double x, double y)
{
	return pow(x, 2) + sqrt(3 * pow(y, 3));
}

double TwoVarFunc::calculate(double x, double y, double z)
{
	return 0.0;
}

void TwoVarFunc::setX(double a)
{
	this->x = a;
}

void TwoVarFunc::setY(double b)
{
	this->y = b;
}

void TwoVarFunc::setZ(double c)
{

}

double ThreeVarFunc::calculate(double x, double y)
{
	return 0.0;
}

double ThreeVarFunc::calculate(double x, double y, double z)
{
	return 3 * pow(x, 2) * pow(z, 1/3) + pow(exp(1), sqrt(4 * y));
}

void ThreeVarFunc::setX(double a)
{
	this->x = a;
}

void ThreeVarFunc::setY(double b)
{
	this->y = b;
}

void ThreeVarFunc::setZ(double c)
{
	this->z = c;
}
