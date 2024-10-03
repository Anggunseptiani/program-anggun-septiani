#include <stdio.h>
#include <string.h>
//definisi struktur untuk menyimpan data ktp
struct ktp {
	char nik[20];
	char nama[50];
	char alamat[100];
	char tgl_lahir[20];
	char jenis_kelamin[10];
};
int main (){
	struct ktp data_ktp;
	// meminta input dari pengguna
	printf ("masukan nik:");
	fgets(data_ktp.nik,sizeof (data_ktp.nik),stdin);
	data_ktp.nik[strcspn(data_ktp.nik,"\n")] =0;
	// menghapus karakter newline
	printf("masukan nama:");
	fgets (data_ktp.nama, sizeof (data_ktp.nama), stdin);
	data_ktp.nama[strcspn(data_ktp.nama,"\n")] =0;
	printf("masukan alamat:");
	fgets (data_ktp.alamat, sizeof(data_ktp.alamat),stdin);
	data_ktp.alamat[strcspn(data_ktp.alamat,"\n")] =0;
	printf ("masukan tanggal lahir (DD-MM-YYYY):");
	fgets (data_ktp.tgl_lahir, sizeof (data_ktp.tgl_lahir),stdin);
	data_ktp.tgl_lahir[strcspn(data_ktp.tgl_lahir,"\n")] =0;
	printf ("masukan jenis kelamin (L/P):");
	fgets (data_ktp.jenis_kelamin,sizeof (data_ktp.jenis_kelamin),stdin);
	data_ktp.jenis_kelamin[strcspn(data_ktp.jenis_kelamin, "\n")] =0;
	//menampilkan kembali data yang sudah dimasukan
	printf("\n=== Data KTP ===\n");
	printf ("nik          : %s\n",data_ktp.nik);
	printf ("nama         : %s\n",data_ktp.nama);
	printf ("alamat       : %s\n",data_ktp.alamat);
	printf ("tanggal lahir: %s\n", data_ktp.tgl_lahir);
	printf ("jenis kelamin: %s\n", data_ktp.jenis_kelamin);
	return 0;
	}
