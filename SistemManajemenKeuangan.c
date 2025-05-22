#include <stdio.h>

int main () {
    int menu;
    int pemasukan, pengeluaran;
    char keterangan[50];
    int jumlahPemasukan = 0;
    int jumlahPengeluaran = 0;
    char lanjut;

    do {
        printf("\nSistem Manajemen Keuangan Harian\n");
        printf("1. Hitung Pemasukan\n");
        printf("2. Hitung Pengeluaran\n");
        printf("3. Lihat Ringkasan\n");
        printf("4. Keluar\n");
        printf("Pilih Menu: ");
        scanf("%d", &menu);
        printf("\n");

        if (menu == 1) {
            do {
                printf("Silahkan masukkan nominal: ");
                scanf("%d", &pemasukan);
                printf("Silahkan masukkan keterangan: ");
                scanf("%s", keterangan);
                jumlahPemasukan += pemasukan;
                printf("Pemasukan berhasil ditambahkan.\n");

                printf("Ingin tambah lagi? (y/n): ");
                scanf(" %c", &lanjut);
            } while (lanjut == 'y' || lanjut == 'Y');

        } else if (menu == 2) {
            do {
                printf("Silahkan masukkan nominal: ");
                scanf("%d", &pengeluaran);
                printf("Silahkan masukkan keterangan: ");
                scanf("%s", keterangan);
                jumlahPengeluaran += pengeluaran;
                printf("Pengeluaran berhasil ditambahkan.\n");

                printf("Ingin tambah lagi? (y/n): ");
                scanf(" %c", &lanjut);
            } while (lanjut == 'y' || lanjut == 'Y');

        } else if (menu == 3) {
            printf("Ringkasan Pemasukan dan Pengeluaran Hari Ini\n");
            printf("Pemasukan: Rp. %d\n", jumlahPemasukan);
            printf("Pengeluaran: Rp. %d\n", jumlahPengeluaran);
            printf("\n");
        } else if (menu < 1 || menu > 4) {
            printf("Menu tidak tersedia. Silahkan coba lagi.\n");
        }

    } while (menu != 4);

    return 0;
}
