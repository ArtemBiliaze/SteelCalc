#include "Header.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

int main()
{
    // 1 - Create array:
    SteelForm** steelforms = new SteelForm * [15] {
            new Square("Square", 2.0, 7850, 5000),
            new Square("Square", 2.0, 7850, 4000),
            new Square("Square", 2.0, 7850, 3000),
            new Square("Square", 2.0, 7850, 2500),
            new Square("Square", 2.0, 7850, 5500),
            new Rectangle("Rectangle", 3.0, 7850, 3500, 4000),
            new Rectangle("Rectangle", 3.0, 7850, 3000, 5000),
            new Rectangle("Rectangle", 3.0, 7850, 3900, 5100),
            new Rectangle("Rectangle", 3.0, 7850, 4000, 5000),
            new Rectangle("Rectangle", 3.0, 7850, 2000, 3000),
            new Rectangle("Rectangle", 3.0, 7850, 2500, 5000),
            new Rectangle("Rectangle", 3.0, 7850, 3000, 5000),
            new Triangle("Triangle", 3.0, 7850, 3500, 4500),
            new Triangle("Triangle", 3.0, 7850, 3000, 5000),
            new Triangle("Triangle", 3.0, 7850, 2000, 3000)
        };

    // 2 Display info:
    std::cout << "\n\n  Information about all calculating forms:" << std::endl;
    for (int i = 0; i < 15; i++) {
        std::cout << "=========================" << std::endl;
        steelforms[i]->display();
        std::cout << "=========================" << std::endl;
    }
    
    // 3 Calc total area and weight:
    double s(0);
    double w(0);
    for (int i = 0; i < 15; i++) {
        s += steelforms[i]->calcArea();
        w += steelforms[i]->calcWeight();
    }
    std::cout << "\n Total area = "<< s << std::endl;
    std::cout << "\n Total weight = " << w << std::endl;

    // 4 Delete array:
    for (int i = 0; i < 15; i++) {
        delete steelforms[i];
    }
    delete[] steelforms;


    std::cout << "\nFin\n";
}

