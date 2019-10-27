#include <iostream>
#include <conio.h>

using namespace std;

int main () {
	double suhu, celcius, farenheit, reamur;
	
	ulang :
		
	cout<<endl;
	cout<<"Pilih Satuan Suhu yang ingin di ukur :"<<endl;
	cout<<"1. Celcius:"<<endl;
	cout<<"2. Reamur:"<<endl;
	cout<<"3. Farenheit:"<<endl;
	cout<<"Masukan Nomornya (1/2/3):"<<endl;
	cin>>suhu;
	
	
	 
	system ("cls"); {
		
		
	    if (suhu == 1)
	{
		cout<<"Masukan Angka suhu (Celcius) ";
		cin>>celcius;
	}
		if (suhu == 2)
	{
		cout<<"Masukan Angka suhu (Reamur) ";
		cin>>reamur;
		celcius = reamur / 0.8;
	}
		if (suhu == 3)
	{
		cout<<"Masukan Angka suhu (farenheit) ";
		cin>>farenheit;
		celcius = 1.8 * farenheit - 32;
	}
	
	
	
	}
	

	if (celcius > 40)
	{
		cout<<"----Suhu yang anda masukan Panas----";
	}
	else if (celcius <= 40)
	{
		cout<<"----Suhu yang anda masukan Tidak Panas----";
	}
	
	
}
