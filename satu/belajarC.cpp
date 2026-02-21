#include <stdio.h> //header standar untuk c
#include <conio.h>

int main(){
    char nama[50];
    int nim;
    char kom[5];
    float ip;

    printf("HELLO WORD \n"); //printf -> untuk fungsi output pada c

    printf("MASUKKAN NAMA : ");
    gets(nama); // gets -> get string

    printf("MASUKKAN NIM : ");
    scanf("%d", &nim);

    getchar();

    printf("MASUKKAN KOM : ");
    gets(kom);

    printf("MASUKKAN IP : ");
    scanf("%f", &ip);

    /* ini untuk output*/
    printf("NAMA : ");
    puts(nama); // put string; untuk dlm bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch();

}