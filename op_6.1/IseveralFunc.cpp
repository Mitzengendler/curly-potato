#include "IseveralFunc.h"

double TwoVarFunc::calculate()
{
	return pow(x, 2) + sqrt(3 * pow(y, 3));
}

double ThreeVarFunc::calculate()
{
	return 3 * pow(x, 2) * pow(z, 1/3) + pow(exp(1), sqrt(4 * y));
}
