#include <iostream>
#include <string>
#include <array>
using namespace std;

int main (){
    // array declaration & initialization
    // 2 cara membuat array

    // cara 1 : array kosong 
    // string nama[5];
    // nama [0] = "Alya";
    // nama [1] = "Parul";
    // nama [2] = "Hana";
    // nama [3] = "Dewi";
    // nama [4] = "Padhil";

    // cara 2 : array langsung diisi
    string nama[5] = {"Alya", "Parul","Hana","Dewi","Padhil"};
    //string nama[] = {"Alya", "Parul","Hana","Dewi","Padhil"};


    //menampilkan data dalam array
    // cout << nama[0] << endl;
    // cout << nama[3] << endl;
    // for (int i =0; i < 5; i++ ){
    //     cout << nama[i] << endl;
    // }

    // descending
    //  for (int i = 4; i >= 0; i-- ){
    //     cout << nama[i] << endl;
    // }

    //multidimensional array
    // 1 2 3
    // 4 5 6

    // int matrix [2][3] = {{1, 2, 3}, {4, 5, 6}};
    // for(int i = 0; i < 2; i++){ //baris
    //     for(int j = 0; j < 3; j++){
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 
    // string (array of char)
    // string nama = "Alya";
    // cout nama[0] << endl;
    // cout nama[2] << endl;

    // cout << nama.Length(); // untuk menghitung jumalah karakter

    // string s1 = "Hello";
    // string s2 = "World";

    // 1. s1 = s2
    // s1 = s2;
    // cout << "s1 sekarang = " << s1 << endl;

    // // 2. s1 = s1 + s2
    // s1 = "Hello"; // reset nilai
    // cout << "Hasil gabungan = " << s1 + s2 << endl;

    // // 3. s1.length()
    // cout << s1.length() << endl;          // 5
    // cout << (s1 + s2).length() << endl;  // 10

    // // 4. s1.substr(n, m)
    // cout << s1.substr(2, 3) << endl;

    // 4. s1.substr(n, m) n itu mulai dari brp, m itu panjang brp
    // cout << s1.substr(2, 3) << endl;

    // Operator sizeof
    // int angka = 10;
    // cout << sizeof(angka); // 4

    // int nilai[] = {10, 20, 30, 40, 50};
    // cout << sizeof(nilai);

    // array library
    // array biasa  : float nilai [5]

    // array<float,5> nilai = {12.3, 34, 100, 56.7, 56.6};
    // cout << "Nilai : ";

    // for (int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i] << " ";
    // }
}