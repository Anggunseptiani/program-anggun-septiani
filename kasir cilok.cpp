#include <iostream>
using namespace std ;
int main() {
	int pilihan, jumlahcilok;
	float totalharga = 0,
	hargapercilok = 0, uangDibayar,kembalian;
	float diskon =0.0;
	// menampilkanmenu jenis cilok
	cout << "=== MENU CILOK ==="<< endl;
	cout <<"1. cilok original - rp 2.000"<<endl;
	cout <<"2. cilok isi daging - rp 3.000"<< endl;
	cout <<"3. cilok keju - rp 4.000"<< endl;
	cout <<"4. cilok telur- rp 5.000"<< endl;
	// memilih jenis cilok
	cout <<" pilih jenis cilok (1-4)";
	cin>> pilihan;
	// menentukan harga percilok berdasarkan pilihan
	switch (pilihan){
		case 1:
			hargapercilok = 2000;
			cout <<"anda memilih cilok original."<< endl;
			break;
		case 2:
			hargapercilok = 3000;
			cout<<"anda memilih cilok isi daging."<< endl;
			break;
		case 3:
			hargapercilok = 4000;
		    cout <<"anda memilih cilok keju."<< endl;
		     break;
		case 4:
			hargapercilok = 5000;
			cout<<"anda memilih cilok telur."<< endl;
			break;
			default:
				cout << " pilihan tidak valid."<< endl;
				return 1; //keluar dari program jika pilihan tidak valid
			}
			// input jumlah cilok yang dibeli
			cout<< " masukan jumlah cilok yang dibeli:";
			cin>> jumlahcilok;
			//menghitung total harga tanpa diskon
			totalharga = hargapercilok* jumlahcilok;
			// memeriksa jika ada diskon (contoh: diskon 10% untuk pembelian 10 cilok atau lebih)
			if (jumlahcilok >= 10){
				diskon = 0.10*totalharga;
				totalharga-= diskon;
				cout <<"anda mendapatkan diskon 10%! diskon: rp "<< diskon <<endl;
			}
			// output total harga setelah diskon (jika ada)
			cout<<"masukan uang yang dibayarkan: rp ";
			cin>> uangDibayar;
			// menghitung kembalian atau mengecek jika uang tidak ada
			if (uangDibayar >= totalharga)
			{
				kembalian = uangDibayar-totalharga;
				cout << " kembalian: rp "<< kembalian << endl;
			} else {
				cout << "uang yang dibayarkan tidak cukup!"<< endl;
				cout << "anda masih kurang rp "<< totalharga - uangDibayar << endl;
			}
			return 0;
		}
			
				
			
			
			
			
	
	

