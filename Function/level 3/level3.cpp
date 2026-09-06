#include <iostream>

double konversiSuhu(double celcius) {
	double fahrenheit = (celcius * 1.8) + 32;
	return fahrenheit;
}

int main() {
	std::cout << konversiSuhu(20) << std::endl;
	std::cout << konversiSuhu(10) << std::endl;
	return 0;
}
