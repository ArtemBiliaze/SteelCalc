#pragma once
#include "SteelForm.h"

class Square :   public SteelForm
{
	double param;
public:
	Square();
	Square(std::string name, double thickness, double density, double param);
	~Square();
	double calcArea() const override;
	double calcWeight() const override;
	void display() const override;
};

