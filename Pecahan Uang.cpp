#include <iostream>
#include <conio.h>
using namespace std;


int main() {
	int uang,ratusan,puluhan,satuan,satu,pecahan,a,b,c,d,e,f,g,h;
	
	cout<<"Masukan Uang Anda = ";
	cin>>uang;
	
	cout<<endl;
	ratusan = uang / 100000 ;
	cout<<"Pecahan 100.000 = ";cout<<ratusan;
	cout<<endl;
	
	puluhan = uang % 100000 ;
	satuan = puluhan / 50000 ;
	cout<<"Pecahan 50.000 = ";cout<<satuan;
	cout<<endl;
	
	satu= puluhan % 50000;
	pecahan = satu / 20000 ;
	cout<<"Pecahan 20.000 =";cout<<pecahan;
	cout<<endl;
	
	a = satu % 20000;
	b = a / 10000;
	cout<<"Pecahan 10.000 =";cout<<b;
	cout<<endl;
	
	c = a % 10000;
	d = c / 5000;
	cout<<"Pecahan 5.000=";cout<<d;
	cout<<endl;
	
	e = c % 5000;
	f = e / 2000;
	cout<<"Pecahan 2.000=";cout<<f;
	cout<<endl;
	
	g = e % 2000;
	h = g / 1000;
	cout<<"Pecahan 1.000=";cout<<h;
	cout<<endl;
	
}
