#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    double n;
    cout << "Masukkan bilangan desimal: ";
    cin >> n;

    int bagianBulat = (int)n;
    double bagianPecahan = n - bagianBulat;

    string binerBulat = "";
    int temp = bagianBulat;
    if (temp == 0) binerBulat = "0";
    while (temp > 0) {
        binerBulat = char((temp % 2) + '0') + binerBulat;
        temp /= 2;
    }

    string binerPecahan = "";
    int batasDigit = 8; 
    while (bagianPecahan > 0 && batasDigit--) {
        bagianPecahan *= 2;
        int bit = (int)bagianPecahan;
        binerPecahan += to_string(bit);
        bagianPecahan -= bit;
    }

    cout << "Bilangan biner dari " << n << " adalah: " 
         << binerBulat;
    if (binerPecahan != "") cout << "." << binerPecahan;
    cout << endl;

    return 0;
}
