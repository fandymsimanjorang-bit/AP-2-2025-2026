#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;
    cout << "Masukkan berat badan anda (kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan anda (m): ";
    cin >> tinggi;
    bmi = berat / (tinggi * tinggi);
    cout << "BMI anda : " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Kategori berat badan : Berat badan kurang";
    }
    else if (bmi < 25) {
        cout << "Kategori berat badan : Normal";
    }
    else if (bmi < 30) {
        cout << "Kategori berat badan : Berat badan berlebih";
    }
    else if(bmi >= 30){
        cout << "Kategori berat badan : Obesitas";
    }
}