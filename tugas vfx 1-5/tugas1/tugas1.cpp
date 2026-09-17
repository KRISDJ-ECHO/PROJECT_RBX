#include <iostream>
using namespace std;

int main() {
    int jumlahb = 3;
    double hargab = 45000;
    int jumlahp = 2;
    double hargap = 7500;
    int jumlaht = 1;
    double hargat = 120000;
    double diskon = 0.10;

    double total = (jumlahb * hargab) + (jumlahp * hargap) + (jumlaht * hargat);

    std::cout << "Total harga sebelum diskon adalah: " << total << std::endl;

    double total_diskon = (total * diskon);

    cout << "Total harga setelah diskon adalah: " << (total - total_diskon) << std::endl;

    return 0;
}