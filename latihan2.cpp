#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string > nama_mahasiswa = {"Nadia", "Echa", "Carlos", "Ilham", "Alan"};

    cout << "Isi vector awal:" << endl;
    for (int i = 0; i < nama_mahasiswa.size(); i++) {
        cout << nama_mahasiswa[i] << endl;
    }
    cout << endl;
    nama_mahasiswa.push_back("Houra");
    nama_mahasiswa.pop_back();
    nama_mahasiswa.erase(nama_mahasiswa.begin() + 1);

    cout << "Isi vector setelah perubahan:" << endl;
    for (int i = 0; i < nama_mahasiswa.size(); i++) {
        cout << nama_mahasiswa[i] << endl;
    }
    cout << endl;
    cout << "Jumlah data tersisa: " << nama_mahasiswa.size() << endl;
}