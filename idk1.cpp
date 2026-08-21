#include <iostream>
using namespace std;


int main() {
    int nilai = 100;
    switch (nilai) {
        case 90 ... 100:
            cout << "Nilai A" << endl;
            break;
        case 80 ... 89:
            cout << "Nilai B" << endl;
            break;
        case 70 ... 79:
            cout << "Nilai C" << endl;
            break;
        case 60 ... 69:
            cout << "Nilai D" << endl;
            break;
        default:
            cout << "Nilai E" << endl;
    }
    return 0;
}