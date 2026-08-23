#include <iostream>
using namespace std;

int main() {
	int rows = 5;
	int i = 1;

	do {
		int spaces = rows - i;
		int stars = i;

		while (spaces > 0) {
			cout << " ";
			spaces--;
		}
		while (stars > 0) {
			cout << "*";
			stars--;
		}
		cout << endl;
		i++;
	} while (i <= rows);

	return 0;
}
