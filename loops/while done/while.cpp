#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int i = 1;
    while (i <= rows) {
        int stars = rows - i;
        int spaces = i;

        while (stars > 0) {
            cout << "*";
            stars--;
        }
        while (spaces > 0) {
            cout << " ";
            spaces--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
