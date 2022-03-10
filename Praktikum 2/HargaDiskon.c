/*
Nama File   : HargaDiskon.c
Deskripsi   : Menentukan besarnya harga setelah diberi diskon
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
*/

#include <stdio.h>

int main()
{
    /* Kamus */
    char j;
    int i, Diskon10, Diskon15, Diskon20;

    /* Algoritma */
    printf("Mengecek Harga Diskon");
    printf("\nMasukkan harga = Rp ");
    scanf("%d",&i);

    printf("Masukkan kode diskon = ");
    scanf("%s",&j);

    Diskon10 = (0.9*i);
    Diskon15 = (0.85*i);
    Diskon20 = (0.8*i);

    if (i>200 && i<10000)
        if (j=='A')
            printf("\nTotal harga setelah diskon = Rp %d\n", Diskon10);
        else if (j=='B')
            printf("\nTotal harga setelah diskon = Rp %d\n", Diskon15);
        else if (j=='C')
            printf("\nTotal harga setelah diskon = Rp %d\n", Diskon20);
        else
            printf("\nKode yang anda masukkan salah...\n");

	else
        printf("\nAnda tidak memenuhi range harga :(\n");

    printf("\nTerimakasih telah berbelanja di toko kami, kesenangan anda adalah kepuasan bagi kami :)\n");

    return 0;
}
