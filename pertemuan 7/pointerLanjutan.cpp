#include <iostream>
using namespace std;

// fungsi untuk pointer sebagai parameter
void ubahNilai(int *p){ // p menerima alamat x
    *p = 20; // *p = 20 --> ubah isi alamat
}

int main(){
    system("cls");

    // Pointer dlm pointer
    cout << "=== Pointer dalam pointer ===" << endl;

    int a = 64; // variabel biasa
    int *p = &a; // pointer ke a
    int **pp = &p; // pointer ke pointer p

    cout << "Nilai a : " << a << endl; // 10
    cout << "Nilai *p : " << *p << endl; // isi alamat a = 64
    cout << "Nilai **pp : " << **pp << endl; // isi pointer p
 
    // 2. Pointer dalam array
    cout << "=== Pointer dalam array ===" << endl;
    int arr[3] = {1, 2, 3};
    int *ptr = arr;

    cout << "Elemen 1 : " << *ptr << endl; // srr[0] --> 1
    cout << "Elemen 2 : " << *(ptr + 1) << endl; //arr[1] --> 2
    cout << "Elemen 3 : " << *(ptr + 2) << endl; // arr[2] --> 3

    // 3. Pointer dalam String
    cout << "=== Pointer dalam String ===" << endl;

    char *organisasi = "Ilmu Komputer Laboratory Center";
    cout << "Awal : " << organisasi << endl;

    organisasi += 5; // geser pointer
    cout << "Geser : " << organisasi << endl; // setelah +5 --> Mulai dari k

    // 3. Pointer sebagai parameter
    cout << "=== Pointer dalam parameter ===" << endl;

    int x = 5;
    cout << "Sebelum : " << x << endl;

    ubahNilai(&x);
    cout << "Sesudah : " << x << endl;
}