#pragma once
class SteelForm
{
protected:
	std::string name;
	double thickness;
	double density;
public:
	SteelForm();
	SteelForm(std::string name, double thickness, double density);
	~SteelForm();
	virtual void display() const;
	virtual double calcArea() const = 0;
	virtual double calcWeight() const = 0;
};

