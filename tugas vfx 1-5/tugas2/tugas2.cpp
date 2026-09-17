#include <iostream>
using namespace std;

int main() {
    int uang = 50000;
    int jajan = 30000;
    int minggu = 4;
    int total = (uang * minggu) - jajan;
    cout << "Total uang yang tersisa: " << total << endl;
    return 0;
}