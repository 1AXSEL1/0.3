#include <iostream>

int main() {
 double  celsius, fahrenheit;

std::cout << "Ведіть температуру в градусах цельсіях";
std::cin >> celsius;

 fahrenheit=celsius *1.8 + 32;

std:: cout << celsius << "Градусна цельсія дорівнює" << fahrenheit << " градусів Фаренгейта." << std::endl;

 return 0;
}