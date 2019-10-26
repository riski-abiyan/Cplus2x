#include <iostream> 
using namespace std;

int main () 
{
	double yard, kaki, inchi, meter;
	
	cout << "Masukan panjang dalam (METER) :";
	cin>>meter;
	
	kaki = 0.3048 * meter;
	yard = 0.9144 * meter;
	inchi = 0.0254 * meter;
	
	system("cls"); 
	cout << "Hasil dalam satuan yard:"<< endl;
	cout <<yard;
	cout << ""<< endl;
	cout << "Hasil dalam satuan kaki:"<< endl;
	cout << kaki;
	cout << ""<< endl;
	cout << "Hasil dalam satuan inchi;"<< endl;
	cout <<inchi;
	cout << ""<< endl;
	
}
