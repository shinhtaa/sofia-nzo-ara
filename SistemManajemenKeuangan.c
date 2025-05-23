#include <stdio.h>

int main () {
    int menu;
    int pemasukan, pengeluaran, sisaUang;
    char keterangan[50];
    int jumlahPemasukan = 0;
    int jumlahPengeluaran = 0;
    char lanjut;
    
    //Perulangan untuk terus mengulang program selama user tidak memilih menu no. 4
    do {
        // Tampilan menu
        printf("\nSistem Manajemen Keuangan Harian\n");
        printf("1. Hitung Pemasukan\n");
        printf("2. Hitung Pengeluaran\n");
        printf("3. Lihat Ringkasan\n");
        printf("4. Keluar\n");
        printf("Pilih Menu: "); //Pilih menu dari 1, 2, 3 atau 4
        scanf("%d", &menu);
        printf("\n");

        //Kondisional jika menu yang dipilih no 1, 2, 3, kurang dari 1 atau lebih dari 4
        if (menu == 1) {
            do {
                printf("Silahkan masukkan nominal: "); //Nominal pemasukannya berapa. Contoh "1000000"
                scanf("%d", &pemasukan);
                printf("Silahkan masukkan keterangan: "); //Keterangan nominalnya apa. Contoh "Gaji"
                scanf("%s", keterangan); 
                jumlahPemasukan += pemasukan; //Setiap pemasukan ditambahkan dan disimpan di variabel jumlahPemasukan
                printf("Pemasukan berhasil ditambahkan.\n");

                printf("Ingin tambah lagi? (y/n): "); //Pilihan untuk menambahkan pemasukan
                scanf(" %c", &lanjut);
            } while (lanjut == 'y' || lanjut == 'Y'); //Jika user memilih y/Y maka user dapat menambahkan pemasukannya lagi

        } else if (menu == 2) { 
            do {
                printf("Silahkan masukkan nominal: "); //Nominal pengeluarannya berapa. Contoh "200000"
                scanf("%d", &pengeluaran);
                printf("Silahkan masukkan keterangan: "); //Keterangan nominalnya apa. Contoh "Skincare"
                scanf("%s", keterangan); 
                jumlahPengeluaran += pengeluaran; //Setiap pengeluaran ditambahkan dan disimpan di variabel jumlahPengeluaran
                printf("Pengeluaran berhasil ditambahkan.\n");

                printf("Ingin tambah lagi? (y/n): "); //Pilihan untuk menambahkan pengeluaran
                scanf(" %c", &lanjut);
            } while (lanjut == 'y' || lanjut == 'Y'); //Jika user memilih y/Y maka user dapat menambahkan pengeluarannya lagi

        } else if (menu == 3) {
            printf("Ringkasan Pemasukan dan Pengeluaran Hari Ini\n");
            printf("Pemasukan: Rp. %d\n", jumlahPemasukan);
            printf("Pengeluaran: Rp. %d\n", jumlahPengeluaran);
            sisaUang = jumlahPemasukan - jumlahPengeluaran; //Menghitung sisa uang
            printf("Sisa uang: Rp. %d", sisaUang);
            printf("\n");
        } else if (menu < 1 || menu > 4) {
            printf("Menu tidak tersedia. Silahkan coba lagi.\n"); //Dalam kondisi ini, user diminta untuk memasukkan kembali no menu yang benar
        }

    } while (menu != 4);

    return 0;
}
