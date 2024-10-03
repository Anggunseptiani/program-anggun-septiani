#include<iostream>
using namespace std;

int main (){
int pilihan, jumlahbakso;
float totalharga = 0,
hargaperbakso = 0, uangdibayar, kembalian;
// menampilakn menu jenis bakso 
cout<<"=== menu bakso==="<< endl;
cout<<"1.bakso urat -rp 15.000"<< endl;
cout<<"2. bakso halus - rp 12.000"<<endl;
cout<<"3. bakso keju- rp 20.000"<< endl;
cout<<"4. bakso telur-rp 18.000"<< endl;
// memilih jenis bakso
cout << "pilih jenis bakso(1-4):";
cin >> pilihan;
// menentukan harga perbakso berdasarkan pilihan 
switch (pilihan) {
    case 1:
		hargaperbakso = 15000;
		cout<<"anda memilih bakso urat."<< endl;
		break;
	case 2:
		hargaperbakso = 12000;
		cout<<"anda memilih bakso halus."<< endl;
		break;
	case 3:
		hargaperbakso =20000;
		cout << " anda memilih bakso keju."<< endl;
		break;
	case 4 :
		hargaperbakso =18000; 
		cout <<"anda memilih bakso halus." << endl;
		break;
	default:
		cout << "pilihan tidak valid ."<< endl;
		return 1;// keluar dari program jika pilihan tidak valid
	}
	// input humlah bakso yang dibeli
	cout<< " masukan jumlah bakso yg dibeli:";
	cin>> jumlahbakso;
	// menghitung total harga 
	totalharga = hargaperbakso*jumlahbakso;
	cout<< " total harga:rp"<<totalharga<<endl;
	// input uang yang dibayar oleh pelanggan
	cout<< "masukan uang yang dibayarkan :rp ";
	cin>>uangdibayar ;
		// menghitung kembalian atau mengecek jika uang tidak cukup 
	if (uangdibayar >= totalharga)
{
	kembalian = uangdibayar - totalharga ;
	cout<< " kembalian: Rp "<< kembalian << endl;
} else {
	cout << " uang yang dibayarkan tidak cukup!"<< endl;
	cout<<" anda masih kurang rp"<< totalharga - uangdibayar << endl;
}
return 0;
}



	
