#include <iostream>
#include <cmath>

int main () {
double r;
const double PI = 3.14;

    std::cout<<"Введіть радіус круга: ";
    std::cin >> r;
double area = PI * pow(r, 2);

    
    double perimeter = 2 * PI * r;

    
    std::cout << "Площа круга: " << area << std::endl;
    std::cout << "Периметр круга: " << perimeter << std::endl;
    return 0;


}