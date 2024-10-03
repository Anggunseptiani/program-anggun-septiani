#include <iostream>
using namespace std;
int main() {
	int n;
	unsigned long long faktorial = 1;
	cout << "masukan angka:";
	cin >> n;
	for (int i =1; i <= n; ++i) {
		faktorial *= i;
}
    cout << "faktorial dari" << n <<"="<< faktorial;
    return 0;
}
	

