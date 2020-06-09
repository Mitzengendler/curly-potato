#pragma once
#include <iostream>
#include <cmath>


class IseveralFunc
{
public:
	virtual double calculate(double x, double y) = 0;
	virtual double calculate(double x, double y, double z) = 0;
	virtual void setX(double a) = 0;
	virtual void setY(double b) = 0;
	virtual void setZ(double c) = 0;
};

class TwoVarFunc : public IseveralFunc {
private:
	double x;
	double y;
public:
	double calculate(double x, double y) override;
	double calculate(double x, double y, double z) override;
	void setX(double a) override;
	void setY(double b) override;
	void setZ(double c) override;
};

class ThreeVarFunc : public IseveralFunc {
private:
	double x;
	double y;
	double z;
public:
	double calculate(double x, double y) override;
	double calculate(double x, double y, double z) override;
	void setX(double a) override;
	void setY(double b) override;
	void setZ(double c) override;
};