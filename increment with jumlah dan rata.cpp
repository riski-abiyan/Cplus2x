
//Nomor 2
#include <iostream>
using namespace std;

int main() {
	int a, b, jMLH=0, rATA;
	
	cout << "Masukan Batas Increment (N):";
	cin >> b;
	
	for ( a=0; a<=b; a++ ){
			jMLH += a;
			rATA = jMLH/b;
	}
	
	cout << "Jumlah Total=";
	cout << jMLH << endl;
	cout << "Rata-Rata =";
	cout << rATA << endl;
}
