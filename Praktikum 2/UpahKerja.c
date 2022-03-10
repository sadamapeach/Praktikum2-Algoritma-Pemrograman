/*
Nama File   : UpahKerja.c
Deskripsi   : Menghitung upah kerja yang diterima perminggu
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
*/

#include <stdio.h>
int main()
{
    /* Kamus */
    int g,j;
    int A1,A2,B1,B2,C1,C2,D1,D2;

    /* Algoritma */
    printf("Menghitung Upah Kerja");
    printf("\nMasukkan golongan = ");
    scanf("%d",&g);

    printf("Masukkan lama jam bekerja = ");
    scanf("%d",&j);

    A1 = (j*1000);
    A2 = (j*1000) + ((j-40)*(1.5*j*1000));
    B1 = (j*1500);
    B2 = (j*1500) + ((j-40)*(1.5*j*1500));
    C1 = (j*2000);
    C2 = (j*2000) + ((j-40)*(1.5*j*2000));
    D1 = (j*2500);
    D2 = (j*2500) + ((j-40)*(1.5*j*2500));

    if (g==1)
        if (j<40)
            printf("\nTotal Gaji = Rp %d\n", A1);
        else
            printf("\nTotal Gaji = Rp %d\n", A2);

    else if (g==2)
        if (j<40)
            printf("\nTotal Gaji = Rp %d\n", B1);
        else
            printf("\nTotal Gaji = Rp %d\n", B2);

    else if (g==3)
        if (j<40)
            printf("\nTotal Gaji = Rp %d\n", C1);
        else
            printf("\nTotal Gaji = Rp %d\n", C2);

    else if (g==4)
        if (j<40)
            printf("\nTotal Gaji = Rp %d\n", D1);
        else
            printf("\nTotal Gaji = Rp %d\n", D2);

	else
        printf("Golongan yang anda masukkan salah");

    return 0;
}
