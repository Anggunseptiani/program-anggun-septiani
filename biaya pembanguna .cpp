#include <iostream>
#include <iomanip>
// untuk manipulai tampilan output seperti setprecision
using namespace std;
//fungsi untuk menghitung total pembayaran pembangunan
double hitungtotal (double biayabahan, double biayatenagakerja ,double biayalain) {
	return biayabahan + biayatenagakerja + biayalain;
}
int main () {
	double biayabahan, biayatenagakerja, biayalain;
	//input data
	cout <<"masukan biaya bahan:";
	cin >> biayabahan;
	cout <<" masukan biaya tenaga kerja:";
	cin >> biayatenagakerja;
	cout <<" masukan biaya lain-lain:";
	cin >> biayalain;
	//hitung total pebambayaran pembangunan
	double totalbiaya = hitungtotal (biayabahan,biayatenagakerja, biayalain);
	//tampilkan hasil 
	cout << fixed << setprecision (2);
	//mengatur tampilan dengan 2 angka desimal
	cout <<" total pembayaran bangunan : rp" << totalbiaya << endl;
	return 0;
}
	
	

	

