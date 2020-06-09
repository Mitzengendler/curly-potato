#pragma once
#include <iostream>
#include <cmath>


class IseveralFunc
{
private:

public:
	virtual double calculate() {
		return 0;
	}
	double x;
	double y;
	double z;
};

class TwoVarFunc : public IseveralFunc {
public:
	double calculate() override;
};

class ThreeVarFunc : public IseveralFunc {
public:
	double calculate() override;
};