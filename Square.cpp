#include "Header.h"
#include "Square.h"

Square::Square() : SteelForm(" Square", 0, 7850), param(0)
{}

Square::Square(std::string name, double thickness, double density, double param)
	:SteelForm(name, thickness, density), param(param)
{}

Square::~Square()
{}

double Square::calcArea() const
{
	return (param / 1000) * (param / 1000);
}

double Square::calcWeight() const
{
	double s = calcArea();
	return s * (thickness / 1000) * density;
}

void Square::display() const
{
	SteelForm::display();
	std::cout << " height = " << param / 1000 << " m" << std::endl;
	std::cout << " width = " << param / 1000 << " m" << std::endl;
	std::cout << " area = " << std::fixed << std::setprecision(2);
	std::cout << calcArea() << " m2" << std::endl;
	std::cout << " weight = " << std::fixed << std::setprecision(2);
	std::cout << calcWeight() << " kg" << std::endl;
}

