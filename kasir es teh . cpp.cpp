#include <iostream>
using namespace std;

int main(){
	int pilihan, jumlahgelas;
	float totalharga = 0, hargapergelas = 0, uangdibayar, kembalian;

	// menampilkan menu ukuran es teh
	cout << "=== MENU ES TEH ===" << endl;
	cout << "1. es teh kecil- rp 3.000" << endl;
	cout << "2. es teh sedang - rp 5.000"<< endl;
	cout << "3. es teh besar - rp 7.000" << endl;
	
	// memilih ukuran es teh
	cout << "pilih ukuran es teh (1-3):";
	cin >> pilihan;
	
	// menentukan harga per gelas berdasarkan pilihan
	switch(pilihan){
		case 1:
		hargapergelas = 3000;
		cout << "anda memilih es teh kecil."<< endl;
		break;
		case 2:
		hargapergelas = 5000;
		cout << "anda memilih es teh sedang."<< endl;
		break;
		case 3:
		hargapergelas = 7000;
		cout << "anda memilih es teh besar."<< endl;
		break;
		default:
			cout << "pilihn tidak valid ." << endl;
			return 1;
			//keluar dari program jika tidak ada pilihan tidak valid
		}
		//input jumlah gelas es teh yang dibeli
		cout << " masukan jumlah gelas yang dibeli:";
		cin >> uangdibayar;
		
		//menghitung total harga
		totalharga = hargapergelas * jumlahgelas;
		cout << "total harga: rp" << totalharga << endl;
		
		// input uang yang dibayarkan oleh pelanggan
		cout << " masukan uang yang dibayarkan : rp";
		cin >> uangdibayar;
		
			// menghitung kembalian atau mengecek jika uang tidak cukup
		if (uangdibayar >= totalharga )
		{
			kembalian = uangdibayar - totalharga;
			cout << "kembalian : rp" <<kembalian << endl;
		} else {
			cout << " anda masih kurang rp"<< totalharga - uangdibayar << endl;
		}
			return 0;
		}
		
		
		
	
	

