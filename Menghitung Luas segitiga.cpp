#include<iostream>
using namespace std;

int main(){
	// deklarsi variabel
	int alas, tinggi;
	double luas;
	
	cout << "Alas = ";
	cin >> alas;
	cout << "Tinggi = ";
	cin >> tinggi;
	cout << endl;
	
	// hitung luas
	luas = 0.5 * alas * tinggi;
	
	cout << "Luas segitiga = " << luas;
}
