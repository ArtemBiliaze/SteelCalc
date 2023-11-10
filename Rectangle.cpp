#include "Header.h"
#include "Rectangle.h"

Rectangle::Rectangle() : SteelForm(" Rectangle", 0, 7850), lenght(0.0), width(0.0)
{}

Rectangle::Rectangle(std::string name, double thickness, double density, double lenght, double width)
	: SteelForm(name, thickness, density), lenght(lenght), width(width)
{}

Rectangle::~Rectangle()
{}

double Rectangle::calcArea() const
{
	return (lenght / 1000) * (width / 1000);
}

double Rectangle::calcWeight() const
{
	double s = calcArea();
	return s * (thickness / 1000) * density;
}

void Rectangle::display() const
{
	SteelForm::display();
	std::cout << " lenght = " << lenght / 1000 << " m" << std::endl;
	std::cout << " width = " << width / 1000 << " m" << std::endl;
	std::cout << " area = " << std::fixed << std::setprecision(2);
	std::cout << calcArea() << " m2" << std::endl;
	std::cout << " weight = " << std::fixed << std::setprecision(2);
	std::cout << calcWeight() << " kg" << std::endl;
}
