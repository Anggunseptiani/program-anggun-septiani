#include <stdio.h>
#include <string.h>
// definisi struktur untuk menyimpan data siswa
struct siswa {
	char nis[10];
	char nama [50];
	float spp;
	
};
// fungsi untuk mencetak struk pembayaran 
void cetakstruk(struct siswa siswa, float jumlah_bayar){
	printf("\n=== Struk pemabayaran SPP ===\n");
	printf ("NIS         :%s\n",siswa.nis);
	printf("Nama         :%s\n",siswa.nama);
	printf ("SPP          : rp %.2f\n",siswa.spp);
	printf("jumlah bayar : rp%.2f\n",jumlah_bayar);
	if (jumlah_bayar < siswa.spp ){
	printf("status           :belum lunas (kekurangan rp%.2f)\n",siswa.spp - jumlah_bayar);
}else if (jumlah_bayar ==siswa.spp){
	printf ("status          :lunas (kelebihan rp%.2f)\n",jumlah_bayar- siswa.spp);
	}
	 
}
int main ( ){
	struct siswa siswa ;
	float jumlah_bayar;
	//input data siswa
	printf ("Masukan NIS:");
	fgets(siswa.nis, sizeof (siswa.nis),stdin);
	siswa.nis[strcspn(siswa.nis,"\n")] =0;
	printf ("masukan nama siswa:");
	fgets (siswa.nama, sizeof (siswa.nama),stdin);
	siswa.nama[strcspn (siswa.nama,"\n")] =0;
	printf ("masukan jumlah SPP (rp):");
	scanf ("%f",&siswa.spp);
	getchar();
	//megambil karakter newline setelah scanf
	//input jumlah pembayarn
	printf ("masukan jumlah pembayaran (rp):");
	scanf("%f", &jumlah_bayar);
	//cetak struk pembayaran 
	cetakstruk(siswa,jumlah_bayar);
	return 0;
}

