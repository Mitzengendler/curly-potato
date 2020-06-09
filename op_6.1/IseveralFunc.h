#pragma once
#include <iostream>
#include <cmath>


class IseveralFunc
{
public:
	virtual double calculate(double x, double y) = 0;
	virtual double calculate(double x, double y, double z) = 0;
};

class TwoVarFunc : public IseveralFunc {
private:
	double x;
	double y;
public:
	double calculate(double x, double y) override;
};

class ThreeVarFunc : public IseveralFunc {
private:
	double x;
	double y;
	double z;
public:
	double calculate(double x, double y, double z) override;
};