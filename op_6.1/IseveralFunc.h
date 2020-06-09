#pragma once
#include <iostream>
#include <cmath>


class IseveralFunc
{
protected:
	double x;
	double y;
	double z;
public:
	virtual double calculate() {
		return 0;
	}
	
	virtual void setX(double ar) {

	}
	virtual void setY(double br) {

	}
	virtual void setZ(double cr) {

	}
};

class TwoVarFunc : public IseveralFunc {
public:
	double calculate() override;
	void setX(double ar) override {
		this->x = ar;
	}
	void setY(double br) override {
		this->y = br;
	}
};

class ThreeVarFunc : public IseveralFunc {
public:
	double calculate() override;
	void setX(double ar) override {
		this->x = ar;
	}
	void setY(double br) override {
		this->y = br;
	}
	void setZ(double cr) override {
		this->z = cr;
	}
};
