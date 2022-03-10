/*
Nama File   : BiayaParkir.c
Deskripsi   : Menentukan besarnya biaya parkir yang dihitung
              berdasarkan lamanya parkir (jam)
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
*/

#include <stdio.h>

int main()
{
    /* Kamus */
    int i;
    int Total;

    /* Algoritma */
    printf("Mengecek Biaya Parkir");
    printf("\nMasukkan lama parkir (jam)= ");
    scanf("%d",&i);

    Total = 2000+(500*(i-2));
    if (i==1 || i==2)
        printf("Total Biaya Parkir = Rp 2000\n");
	else
        printf("Total Biaya Parkir = Rp %d\n", Total);

    return 0;
}
