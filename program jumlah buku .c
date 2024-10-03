 #include <stdio.h>
int main (){

int jumlah_buku;
float harga_per_buku,total_harga,diskon, harga_setelah_diskon;

//input jumlah buku yang ingin dibeli;
printf ("masukan jumlah buku yang ingin dibeli:");
scanf("&d", &jumlah_buku);

//input harga buku
printf("masukan harga per buku:");
scanf("%f", &harga_per_buku);

//menghitung total harga
total_harga = jumlah_buku * harga_per_buku;

// input diskon
printf("masukan diskon (dalam persen):");
scanf("%f, &diskon");

//menghitung harga setelah diskon
harga_setelah_diskon = total_harga - (total_harga * diskon / 100);

//output total harga
printf("total harga pembelian : %2f\n",total_harga);
printf("harga setelah diskon : %2f\n", harga_setelah_diskon);

return 0;
}
