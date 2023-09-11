#include <stdio.h>

int main()
{
    double totalHarga, diskon, potonganHarga, jumlahBayar;
    int jumlahBelanja = 0;
    char lanjut;
    int jumlahTransaksi = 0;

    printf("=================================\n");
    printf("PROGRAM PENGHITUNG DISKON BELANJA\n");
    printf("=================================\n");
    printf("\n");

    do
    {
        jumlahBelanja++;
        printf("Masukkan total belanja: ");
        scanf("%lf", &totalHarga);

        if (totalHarga < 200000)
        {
            diskon = 0.0;
        }
        else if (totalHarga >= 200000 && totalHarga <= 500000)
        {
            diskon = 0.10;
        }
        else if (totalHarga > 500000 && totalHarga <= 1000000)
        {
            diskon = 0.20;
        }
        else
        {
            diskon = 0.30;
        }
        if (jumlahBelanja >= 4)
        {
            diskon += 0.20; // Diskon tambahan 20% jika ada 4 transaksi atau lebih dalam sebulan
        }
        potonganHarga = totalHarga * diskon;
        jumlahBayar = totalHarga - potonganHarga;

        printf("Selamat! Anda mendapat diskon sebesar: %.2lf%%\n", diskon * 100);
        printf("Potongan harga yang diperoleh: %.2lf\n", potonganHarga);
        printf("Jumlah belanja yang harus dibayar: %.2lf\n", jumlahBayar);

        printf("Berapa kali belanja: %d\n", jumlahBelanja);
        printf("\n");
        printf("==========================================\n");
        printf("TERIMA KASIH TELAH BERBELANJA DI TOKO KAMI\n");
        printf("==========================================\n");
        printf("\n");
        printf("Ingin belanja lagi? (yes = y / no = n): ");
        scanf(" %c", &lanjut);
        printf("\n");

    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}
