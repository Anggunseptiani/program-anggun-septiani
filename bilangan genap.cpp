#include<iostream>
using namespace std;
int main(){
	int awal, akhir;
	//meminta input dri pengguna untuk rentang bilangan
	cout << " masukan bilangan awal:";
	cin >> awal;
	cout <<" masukan bilangan akhir:";
	cin>> akhir ;
	cout << " bilangan genap antara"<< awal <<"dan"<< akhir<<"adalah:"<< endl;
	// menampilkan bilangan genap 
	for ( int i = awal; i <= akhir;	i++) {
	if (i % 2== 0) {
		cout<< i << " ";
	}
}
cout << endl;
return 0;
}
	
	

