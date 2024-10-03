#include <stdio.h>

int main(){
	int panjang, lebar, luas;
	printf("masukan panjang dan lebar :");
	scanf("%d %d", &panjang ,&lebar);
	luas = panjang * lebar ;
	printf ("luas persegi panjang : %d\n", luas);
	return 0;
}
