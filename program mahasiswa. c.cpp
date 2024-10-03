#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100

typedef struct {
    char nama[50];
    char nim[15];
    char jurusan[50];
    int umur;
} Mahasiswa;

Mahasiswa mahasiswa[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa() {
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        printf("Masukkan Nama: ");
        scanf(" %[^\n]%*c", mahasiswa[jumlahMahasiswa].nama);
        
        printf("Masukkan NIM: ");
        scanf(" %[^\n]%*c", mahasiswa[jumlahMahasiswa].nim);
        
        printf("Masukkan Jurusan: ");
        scanf(" %[^\n]%*c", mahasiswa[jumlahMahasiswa].jurusan);
        
        printf("Masukkan Umur: ");
        scanf("%d", &mahasiswa[jumlahMahasiswa].umur);

        jumlahMahasiswa++;
    } else {
        printf("Data mahasiswa sudah penuh!\n");
    }
}

void tampilkanMahasiswa() {
    if (jumlahMahasiswa == 0) {
        printf("Belum ada data mahasiswa.\n");
    } else {
        for (int i = 0; i < jumlahMahasiswa; i++) {
            printf("\nMahasiswa ke-%d\n", i + 1);
            printf("Nama    : %s\n", mahasiswa[i].nama);
            printf("NIM     : %s\n", mahasiswa[i].nim);
            printf("Jurusan : %s\n", mahasiswa[i].jurusan);
            printf("Umur    : %d\n", mahasiswa[i].umur);
        }
    }
}

void cariMahasiswa() {
    char nimCari[15];
    printf("Masukkan NIM yang ingin dicari: ");
    scanf(" %[^\n]%*c", nimCari);

    int ditemukan = 0;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (strcmp(mahasiswa[i].nim, nimCari) == 0) {
            printf("\nData Mahasiswa Ditemukan:\n");
            printf("Nama    : %s\n", mahasiswa[i].nama);
            printf("NIM     : %s\n", mahasiswa[i].nim);
            printf("Jurusan : %s\n", mahasiswa[i].jurusan);
            printf("Umur    : %d\n", mahasiswa[i].umur);
            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan) {
        printf("Mahasiswa dengan NIM %s tidak ditemukan.\n", nimCari);
    }
}

int main() {
    int pilihan;
    do {
        printf("\nMenu:\n");
        printf("1. Tambah Mahasiswa\n");
        printf("2. Tampilkan Semua Mahasiswa\n");
        printf("3. Cari Mahasiswa\n");
        printf("4. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahMahasiswa();
                break;
            case 2:
                tampilkanMahasiswa();
                break;
            case 3:
                cariMahasiswa();
                break;
            case 4:
                printf("Keluar dari program...\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 4);

    return 0;
}
