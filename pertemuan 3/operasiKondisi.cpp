#include <iostream>
using namespace std;

int main(){
    int nilai;

    system("CLS");
    cout<<"Masukkan Nilai : ";
    cin >> nilai;

    //if statement
    // if (nilai <= 65){
    //     cout <<"Anda Tidak Lulus"<<endl;
    // }

    // if else statemnet
    // if (nilai <= 65){
    //     cout <<"Anda Tidak Lulus" << endl;
    // }else{
    //     cout <<"Anda Lulus" << endl;
    // }

    //if else if statement
    // if (nilai == 100){
    //     cout << " Anda Keceh" << endl;
    // } else if (nilai <= 65){
    //     cout <<" Anda Tidak Lulus" << endl;
    // }
    // else{
    //     cout <<"Anda Lulus" << endl;
    // }

    //nested if statement
    // if (nilai <= 65){
    //     cout <<"Anda Tidak Lulus" << endl;
    // }else{
    //     if(nilai == 100) {
    //         cout << "Anda lulus & Anda hebat"<< endl;
    //     }else{
    //         cout << "Anda lulus" << endl;
    //     }
    // }

    //switch case statement
    // switch (nilai){
    //     case 1:
    //     cout <<"Senin"<<endl;
    //     break;
    //     case 2:
    //     cout <<"Selasa"<<endl;
    //     break;
    //     case 3:
    //     cout <<"Rabu"<<endl;
    //     break;
    //     case 4:
    //     cout <<"Kamis"<<endl;
    //     break;
    //     case 5:
    //     cout <<"Jumat"<<endl;
    //     break;
    //     case 6:
    //     cout <<"Sabtu"<<endl;
    //     break;
    //     case 7:
    //     cout <<"Minggu"<<endl;
    //     break;
    //     default:
    //     cout <<"Inputan Salah"<<endl;
    //     break;
    // }

    //switch range case statement
    // switch (nilai){
    //     case 85 ... 100:cout<<"Nilai A"<<endl;break;
    //     case 80 ... 84:cout<<"Nilai B+"<<endl;break;
    //     case 75 ... 79:cout<<"Nilai B"<<endl;break;
    //     case 70 ... 74:cout<<"Nilai C+"<<endl;break;
    //     case 65 ... 69:cout<<"Nilai C"<<endl;break;
    //     case 60 ... 64:cout<<"Nilai D"<<endl;break;
    //     default: cout <<"Inputan salah"<<endl;break;
    // }

    //ternery operator
    // if (nilai %2 == 0){
    //     cout<<"Nilai Genap"<<endl;
    // } else{
    //     cout<<"Nilai Ganjil"<<endl;
    // }

    (nilai %2 ==0) ? cout<<"Nilai Genap"<<endl : cout<<"Nilai Ganjil" << endl;
}