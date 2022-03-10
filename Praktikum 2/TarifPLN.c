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
    int i,d;
    int PLN1a,PLN1b,PLN2a,PLN2b;

    /* Algoritma */
    printf("Menghitung Tarif PLN");
    printf("\nMasukkan golongan = ");
    scanf("%d",&i);

    printf("Masukkan pemakaian daya listrik (kWh) = ");
    scanf("%d",&d);

    PLN1a = d*1000;
    PLN1b = (d*1000) + (0.1*(d*1000));

    PLN2a = d*2000;
    PLN2b = (d*2000) + (0.1*(d*2000));

    if (i==1)
        if (d<100)
            printf("\nTotal tarif PLN = Rp 100000\n");
        else if ((100<=d) && (d<1000))
            printf("\nTotal tarif PLN = Rp %d\n", PLN1a);
        else //(d>=1000)
            printf("\nTotal tarif PLN = Rp %d\n", PLN1b);

    else if (i==2)
        if (d<100)
            printf("\nTotal tarif PLN = Rp 200000\n");
        else if ((100<=d) && (d<1000))
            printf("\nTotal tarif PLN = Rp %d\n", PLN2a);
        else // d >= 1000
            printf("\nTotal tarif PLN = Rp %d\n", PLN2b);

    else
        printf("\nGolongan yang anda masukkan salah\n");


    return 0;
}
