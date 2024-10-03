 # include <iostream>
 #include <string>
 using namespace std;
 int main() {
 	int jumlah_barang, jumlah, harga, total_harga=0;
 	string nama_barang;
 	float diskon =0.0, total_bayar, uang_dibayar, kembalian;
 	// meminta jumlah barang yang ingin dibeli
 	cout <<"masukan jumlah barang yang dibeli:";
 	cin >> jumlah_barang;
 	// memasukan detail setiap barang
 	for(int i=1; i<= jumlah_barang; i++){
 		cout << "\nbarang ke-" << i <<":\n";
 		cout <<"nama barang:";
 		cin >>  nama_barang;
 		cout <<"harga satuan:";
 		cin >> harga;
 		cout << "jumlah barang:";
 		cin >> jumlah;
 		total_harga += harga* jumlah;
 	}
 	// menampilkan total harga sebelum diskon
 	cout << "\ntotal harga sebelum diskon: rp " << total_harga << endl;
 	// pemberian diskon berdasarkan total harga belanja 
 	if ( total_harga > 500000) {
 		diskon = 0.10; 
 		// 10% diskon untuk total belanja diatas rp 500.000
 	} else if ( total_harga > 250000) {
 		diskon = 0,05;
 		// 5% diskon untuk total belanja diatas rp 250.000
 	}
 	// menghitung total bayar setelah diskon
 	total_bayar = total_harga - (total_harga* diskon);
 	cout << "diskon: " << diskon* 100 << "%" << endl;
 	cout << "total yang harus dibayar: rp" << total_bayar << endl;
 	// meminta jumlah uang yang dibayar oleh pelanggan
 	cout <<"\nmasukan jumlah uang yang dibayarkan: rp";
 	cin >> uang_dibayar;
 	// menghitung kembalian 
 	if( uang_dibayar <= total_bayar) {
 		kembalian = uang_dibayar - total_bayar;
 		cout <<"kembalian: rp " << kembalian << endl;
 	} else {
 		cout << "uang yang dibayar kurang!" << endl;
 	}
 	 return 0;
 }
	 
	 
	 
	 
	 
 	
 	
 
