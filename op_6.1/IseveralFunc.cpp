#include "IseveralFunc.h"

double TwoVarFunc::calculate()
{
	return pow(this->x, 2) + sqrt(3 * pow(this->y, 3));
}

double ThreeVarFunc::calculate()
{
	return 3 * pow(this->x, 2) * pow(this->z, 1/3) + pow(exp(1), sqrt(4 * this->y));
}
