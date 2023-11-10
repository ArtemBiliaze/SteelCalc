#pragma once
#include "SteelForm.h"
class Rectangle : public SteelForm
{
	double lenght;
	double width;
public:
	Rectangle();
	Rectangle(std::string name, double thickness, double density, double lenght, double width);
	~Rectangle();
	double calcArea() const override;
	double calcWeight() const override;
	void display() const override;
};

