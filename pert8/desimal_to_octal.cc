#include <iostream>
using namespace std;

int main() {
    int n;
    string oktal = "";

    cout << "Masukkan bilangan desimal: ";
    cin >> n;

    int temp = n;
    while (temp > 0) {
        oktal = char((temp % 8) + '0') + oktal;
        temp /= 8;
    }

    cout << "Bilangan oktal dari " << n << " adalah: " << (oktal == "" ? "0" : oktal) << endl;
    return 0;
}
