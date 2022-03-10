/*
Nama File   : TunjAnak.c
Deskripsi   : Menghitung & menampilkan besarnya tunjangan anak yang diberikan
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
*/

#include <stdio.h>

int main()
{
    /* Kamus */
    int i,g;
    int A,B;

    /* Algoritma */
    printf("Menghitung Tunjangan Anak");
    printf("\nMasukkan jumlah anak = ");
    scanf("%d",&i);

    printf("Masukkan jumlah gaji = Rp ");
    scanf("%d",&g);

    A = i*(0.1*g);
    B = (3*(0.1*g));

    if (0<=i && i<3)
        printf("\nBesar tunjangan anak = Rp %d\n", A);

    else //(i>=3)
        printf("\nBesar tunjangan anak = Rp %d\n", B);

    return 0;
}
