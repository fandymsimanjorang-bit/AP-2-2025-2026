#include <iostream>
using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        char c = kalimat[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            kalimat[i] = toupper(c);
        }
    }

    cout << "= " << kalimat << endl;

    return 0;
}