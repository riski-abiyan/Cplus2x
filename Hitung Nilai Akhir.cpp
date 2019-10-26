#include <iostream>

using namespace std;

int main() {

double nilai,uts,uas,tugas;
int nilaiakhir;
char nilaiHuruf;

cout<<"Masukan Nilai UTS : ";
cout<<endl;
cin>>uts;
cout<<endl;

cout<<"Masukan Nilai UAS : ";
cout<<endl;
cin>>uas;
cout<<endl;

cout<<"Masukan Nilai Tugas : ";
cout<<endl;
cin>>tugas;
cout<<endl;

nilaiakhir = ((0.35*uts) + (0.45*uas) + (0.2*tugas));

switch (nilaiakhir) {
	
	case 85 ... 100 : nilaiHuruf = 'A' ; break;
	case 65 ... 84 : nilaiHuruf = 'B' ; break;
	case 45 ... 64 : nilaiHuruf = 'C' ; break;
	case 25 ... 44 : nilaiHuruf = 'D' ; break;
	case 0 ... 24 : nilaiHuruf = 'E' ; break;
	
	default  : cout<<"Nilai diluar 0 sampai 100";

}

cout <<"Nilai akhir angka :"<<nilaiakhir;
cout<<endl;
cout <<"Nilai akhir huruf :"<<nilaiHuruf;
}
