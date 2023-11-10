#include "Header.h"
#include "Triangle.h"

Triangle::Triangle() : SteelForm(" Triangle", 0, 7850), leg1(0.0), leg2(0.0)
{}

Triangle::Triangle(std::string name, double thickness, double density, double leg1, double leg2)
	: SteelForm(name, thickness, density), leg1(leg1), leg2(leg2)
{
}

Triangle::~Triangle()
{}

double Triangle::calcArea() const
{
	return ((leg1 / 1000 ) * (leg2 / 1000)) / 2;
}

double Triangle::calcWeight() const
{
	double s = calcArea();
	return s * (thickness / 1000) * density;
}

void Triangle::display() const
{
	SteelForm::display();
	std::cout << " Leg 1 = " << leg1 / 1000 << " m" << std::endl;
	std::cout << " Leg 2 = " << leg2 / 1000 << " m" << std::endl;
	std::cout << " area = " << std::fixed << std::setprecision(2);
	std::cout << calcArea() << " m2" << std::endl;
	std::cout << " weight = " << std::fixed << std::setprecision(2);
	std::cout << calcWeight() << " kg" << std::endl;
}
