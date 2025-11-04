#include <iostream>
using namespace std;

int main() {
    int n;
    string biner = "";

    cout << "Masukkan bilangan desimal: ";
    cin >> n;

    int temp = n;
    while (temp > 0) {
        biner = char((temp % 2) + '0') + biner;
        temp /= 2;
    }

    cout << "Bilangan biner dari " << n << " adalah: " << (biner == "" ? "0" : biner) << endl;
    return 0;
}
