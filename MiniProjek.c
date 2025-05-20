#include <stdio.h>
#include <string.h>

int main () {

    char input [15];
    int pemasukan, pengeluaran;
    char catatan [100];
    int jumlahPemasukan = 0;
    int jumlahPengeluaran = 0;

    printf ("Mau ngitung pemasukan atau pengeluaran? atau dua-duanya? ");
    scanf ("%s", &input);
    printf("\n");

   if (strcmp(input, "pemasukan") == 0) {
        printf("Silahkan masukkan pemasukan dan catatan anda dengan format dibawah ini:\n");
        printf("Contoh: 10000 Gaji\n");
        printf("Masukkan -1 -1 untuk berhenti.\n");

        do {
            scanf(" %d %s", &pemasukan, catatan);
            if (pemasukan != -1) {
                jumlahPemasukan += pemasukan;
            }
        } while (pemasukan != -1);

        printf("\n");
        printf("Total pemasukkan anda sebesar Rp.%d\n", jumlahPemasukan);
   } else if (strcmp(input, "pengeluaran") == 0) {
        printf("Silahkan masukkan pengeluaran dan catatan anda dengan format dibawah ini:\n");
        printf("Contoh: 10000 Skincare\n");
        printf("Masukkan -1 -1 untuk berhenti.\n");

        do {
            scanf(" %d %s", &pengeluaran, catatan);
            if (pengeluaran != -1) {
                jumlahPengeluaran += pengeluaran;
            }
        } while (pengeluaran != -1);

        printf("\n");
        printf("Total pengeluaran anda sebesar Rp.%d\n", jumlahPengeluaran);
   } else if (strcmp(input, "dua-duanya") == 0) {
        printf("Silahkan masukkan pemasukan dan catatan anda dengan format dibawah ini:\n");
        printf("Contoh: 10000 Gaji\n");
        printf("Masukkan -1 -1 untuk berhenti.\n");

        do {
            scanf(" %d %s", &pemasukan, catatan);
            if (pemasukan != -1) {
                jumlahPemasukan += pemasukan;
            }
        } while (pemasukan != -1);

        printf("\n");
        printf("Silahkan masukkan pengeluaran dan catatan anda dengan format dibawah ini:\n");
        printf("Contoh: 10000 Skincare\n");
        printf("Masukkan -1 -1 untuk berhenti.\n");

        do {
            scanf(" %d %s", &pengeluaran, catatan);
            if (pengeluaran != -1) {
                jumlahPengeluaran += pengeluaran;
            }
        } while (pengeluaran != -1);

        printf("\n");
        printf("Total pemasukan anda sebesar Rp.%d\n", jumlahPemasukan);
        printf("Total pengeluaran anda sebesar Rp.%d\n", jumlahPengeluaran);
   }

   return 0;

}
