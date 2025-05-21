#include <stdio.h>

int main () {

    int menu;
    int pemasukan, pengeluaran;
    char keterangan [50];
    int jumlahPemasukan = 0;
    int jumlahPengeluaran = 0;

    do {
        printf ("\nSistem Manajemen Keuangan Harian\n");
        printf("1. Hitung Pemasukan\n");
        printf("2. Hitung Pengeluaran\n");
        printf("3. Lihat Ringkasan\n");
        printf("4. Keluar\n");
        printf("Pilih Menu: ");
        scanf("%d", &menu);
        printf("\n");

        if (menu == 1) {
                printf("Silahkan masukkan nominal: ");
                scanf("%d", &pemasukan);
                printf("Silahkan masukkan keterangan: ");
                scanf("%s", &keterangan);
                printf("Pemasukan berhasil ditambahkan.");
                printf("\n");
                jumlahPemasukan += pemasukan;
                jumlahPemasukan++;
        } else if (menu ==  2) {
                printf("Silahkan masukkan nominal: ");
                scanf("%d", &pengeluaran);
                printf("Silahkan masukkan keterangan: ");
                scanf("%s", &keterangan);
                printf("Pengeluaran berhasil ditambahkan.");
                printf("\n");
                jumlahPengeluaran += pengeluaran;
                jumlahPengeluaran++;
        } else if (menu == 3) {
                printf("Ringkasan Pemasukan dan Pengeluaran Hari Ini\n");
                printf("Pemasukan: Rp. %d\n", jumlahPemasukan);
                printf("Pengeluaran: Rp. %d\n", jumlahPengeluaran);
                printf("\n");
        } else if (menu < 1) {
            printf("Menu tidak tersedia. Silahkan coba lagi.\n");
        } else if (menu > 4) {
            printf("Menu tidak tersedia. Silahkan coba lagi.\n");
        }

    } while (menu != 4);

}
