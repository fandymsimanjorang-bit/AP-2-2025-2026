#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct alamat {
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    alamat alamat; // nested struct
};

int main() {
    system("CLS");

    Mahasiswa mhs1;

    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {

        cout << "Mahasiswa " << i + 1 << endl;
        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for (int i = 0; i < n; i++) {

        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }
}