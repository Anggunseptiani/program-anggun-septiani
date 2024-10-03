#include <stdio.h>

int main() {
    // Deklarasi variabel
    int botolA_qty, botolB_qty, botolC_qty;
    float harga_botolA = 15000.0, harga_botolB = 25000.0, harga_botolC = 35000.0;
    float totalA, totalB, totalC, total;

    // Input jumlah pembelian
    printf("Masukkan jumlah Botol Minum A: ");
    scanf("%d", &botolA_qty);

    printf("Masukkan jumlah Botol Minum B: ");
    scanf("%d", &botolB_qty);

    printf("Masukkan jumlah Botol Minum C: ");
    scanf("%d", &botolC_qty);

    // Hitung total harga masing-masing botol
    totalA = botolA_qty * harga_botolA;
    totalB = botolB_qty * harga_botolB;
    totalC = botolC_qty * harga_botolC;

    // Hitung total keseluruhan
    total = totalA + totalB + totalC;

    // Cetak hasil total
    printf("\nTotal harga untuk Botol Minum A: Rp%.2f\n", totalA);
    printf("Total harga untuk Botol Minum B: Rp%.2f\n", totalB);
    printf("Total harga untuk Botol Minum C: Rp%.2f\n", totalC);
    printf("\nTotal keseluruhan: Rp%.2f\n", total);

    return 0;
}
