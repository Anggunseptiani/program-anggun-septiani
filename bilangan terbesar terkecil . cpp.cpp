#include <iostream>
using namespace std;
int main(){
	int n, angka, terbesar, terkecil;
	// meminta pengguna memasukan jumlah bilangan yang akan dicek
	cout << "masukan jumlah bilangan:";
	cin >> n;
	// meminta pengguna memasukan bilangan pertama
	cout << "masukan bilangan ke-1:";
	cin >> angka;
		// set bilangan pertama sebagai terbesar dan terkecil sementara
	terbesar = angka;
	terkecil = angka;
	// proses input bilangan berikutnya
	for (int i =2; i <= n; i++){
		cout << "masukan bilangan ke-" << i <<":";
		cin >> angka;
	//cek apakah bilangan lebih besar dari 'terbesar'
	if (angka >terbesar){
		terbesar=angka;
	}
}
// menampilkan hasil terbesar dan terkecil
cout << "\nBilangan terbesar adalah: "<< terbesar << endl;
cout << "Bilangan terkecil adalah:" << terkecil << endl;

return 0;
}
	
	

