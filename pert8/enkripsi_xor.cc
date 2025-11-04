#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    char key;

    cout << "Masukkan teks: ";
    getline(cin, text);
    cout << "Masukkan karakter kunci: ";
    cin >> key;

    string cipher = text;
    for (int i = 0; i < text.size(); i++) {
        cipher[i] = text[i] ^ key;
    }

    cout << "\nHasil enkripsi (dalam desimal ASCII): ";
    for (unsigned char c : cipher) cout << int(c) << " ";

    cout << "\nDekripsi kembali: ";
    for (char c : cipher) cout << char(c ^ key);

    cout << endl;
    return 0;
}
