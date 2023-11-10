#include "Header.h"
#include "SteelForm.h"

SteelForm::SteelForm() : name("undefined"), thickness(0), density(7850)
{}

SteelForm::SteelForm(std::string name, double thickness, double density)
	:name(name), thickness(thickness), density(density)
{}

SteelForm::~SteelForm()
{}

void SteelForm::display() const
{
	std::cout << " Steel form - " << name << std::endl;
	std::cout << " thickness = " << thickness << " mm" << std::endl;
	std::cout << " density = " << density << " kg/m3" << std::endl;
}
