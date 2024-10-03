#include <stdio.h>
#define MAX_BUAH 5

typedef struct {
	char nama[20];
	float hargaperKg;
} Buah;
Buah buah[MAX_BUAH] = {
	{"apel", 30000},
	{"pisang", 15000},
	{"mangga", 25000},
	{"jeruk", 20000},
	{"anggur", 45000},
	
	};
	
	void tampilkanbuah (){
		printf("daftar buah:\n");
		for (int i=0; i < MAX_BUAH; i++) {
			printf ("%d.%s - rp %.2f\kg\n", i + 1,buah [i].nama, buah[i].hargaperKg);
		}
	}
	int main (){
		int pilihan;
		float totalharga =0.0;
		float jumlahKg;
		char lanjut;
		
		do {
			tampilkanbuah ();
			printf ("\npilih buah yang  ingin dibeli (1-%d):",MAX_BUAH);
			scanf ("%d", &pilihan);
			
			if (pilihan >= 1 && pilihan <= MAX_BUAH){
				printf ("anda memilih %s\n", buah[pilihan - 1].nama);
				printf(" masukan jumlah kilogram:");
				scanf ("%f", &jumlahKg);
				
				totalharga += buah[pilihan - 1].hargaperKg * jumlahKg;
				printf("harga untuk %.2f Kg %s adalah rp %.2f\n",jumlahKg, buah[pilihan - 1].nama, buah[pilihan -1].hargaperKg * jumlahKg);
				
					} else {
						printf("pilihan tidak valid .\n");
					}
					
					printf("\napakah anda ingin membeli buah lain? (y\n):");
					scanf ("%c", &lanjut);
				} while (lanjut == 'y' || lanjut  == 'Y');
				printf ("\ntotal harga yang harus dibayar : rp %.2f\n ", totalharga);
				printf ("terimakasih telah berbelanja!\n");
				return 0;
	}
	
