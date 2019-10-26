#include<iostream>
using namespace std;

int main() {
	int hrgMakan = 15000, hrgMinum = 3500, hrgMkMn = 18500, jml = 0;
	int totalHarga = 0;
	char pilihMenu;
	cout << "[1] Makanan 	   = Rp 15.000" << endl;
	cout << "[2] Minuman 	   = Rp 3.500" << endl;
	cout << "[3] Makan + minum  = Rp 18.500" << endl;
	cout << endl;
	
	cout << "Pilih menu : ";
	cin >> pilihMenu;
	cout << "Jumlah : ";
	cin >> jml;
	
	cout << endl;
	switch(pilihMenu) {
		case '1':
			totalHarga = hrgMakan * jml;
			cout << "Harga total = " << totalHarga;
			break;
		case '2':
			totalHarga = hrgMinum * jml;
			cout << "Harga total = " << totalHarga;
			break;
		case '3':
			totalHarga = (hrgMakan + hrgMinum) * jml;
			cout << "Harga total = " << totalHarga;
			break;
		default:
			cout << "Menu tidak ada!!!";
	}
}
