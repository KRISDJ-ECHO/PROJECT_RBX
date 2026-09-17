#include <iostream>
using namespace std;

int main() {
    int nilai = 100;
    switch (nilai) {
        case 90 ... 100:
            cout << "siswa mendapatkan nilai A" << endl;
            break;
        case 80 ... 89:
            cout << "siswa mendapatkan nilai B" << endl;
            break;
        case 70 ... 79:
            cout << "siswa mendapatkan nilai C" << endl;
            break;
        case 60 ... 69:
            cout << "siswa mendapatkan nilai D" << endl;
            break;
        default:
            cout << "siswa mendapatkan nilai E" << endl;
    }
    return 0;
}