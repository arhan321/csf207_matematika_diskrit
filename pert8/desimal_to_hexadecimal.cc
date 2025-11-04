#include <iostream>
using namespace std;

int main() {
    int n;
    string heksa = "";
    string hexChars = "0123456789ABCDEF";

    cout << "Masukkan bilangan desimal: ";
    cin >> n;

    int temp = n;
    while (temp > 0) {
        heksa = hexChars[temp % 16] + heksa;
        temp /= 16;
    }

    cout << "Bilangan heksadesimal dari " << n << " adalah: " 
         << (heksa == "" ? "0" : heksa) << endl;

    return 0;
}
