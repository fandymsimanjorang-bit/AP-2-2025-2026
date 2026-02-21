#include <iostream> //header standart c++
#include <conio.h>  // header untuk getche() dan getch()
using namespace std;

int main()
{

    string nama;
    char kom;
    int nim;
    float ip;
    char jeniskelamin;

    cout<<"HELLO WORD"<< endl;

    cout<<"MASUKKAN NAMA : "; 
    // cin>>nama;
    getline(cin, nama); //AGAR KARAKTER SPACE BISA TERBACA

    cout<<"MASUKKAN KOM : ";
    cin>>kom;

    cout<<"MASUKKAN NIM : ";
    cin>>nim;

    cout<<"MASUKKAN IP : ";
    cin>>ip;

    cout<<"MASUKKAN JENIS KELAMIN (L/P) :  "; //getche
    jeniskelamin = getche(); // agar karakter langsung keluar, jadi gak perlu tekan enter

   // ini untuk output 
    cout <<"\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    //cout << jeniskelamin << endl;
    putchar(jeniskelamin); // untuk menampilkan karakter terkhusus "jeniskelamin"

    getch(); // karakter yg kita ketik tdk ditampilkan di layara
    

}