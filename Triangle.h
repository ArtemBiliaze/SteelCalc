#pragma once
#include "SteelForm.h"
class Triangle :   public SteelForm
{
	double leg1;
	double leg2;
public:
	Triangle();
	Triangle(std::string name, double thickness, double density, double leg1, double leg2);
	~Triangle();
	double calcArea() const override;
	double calcWeight() const override;
	void display() const override;
};

