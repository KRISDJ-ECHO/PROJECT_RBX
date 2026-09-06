#include <iostream>
#include <string>

std::string cekGanjilGenap(int angka) {
	if (angka % 2 == 0) {
		return "Genap";
	} else {
		return "Ganjil";
	}
}

int main() {
	std::cout << cekGanjilGenap(2) << std::endl;
	std::cout << cekGanjilGenap(1) << std::endl;
	return 0;
}
