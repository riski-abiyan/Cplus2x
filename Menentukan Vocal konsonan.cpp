#include <iostream>

using namespace std;

int main () {
	
	string huruf;
	
	cout<<"Masukan Hurufnya"<<endl;
	cin>>huruf;
	
	
	if ((huruf=="a") || (huruf=="i") || (huruf=="u") || (huruf=="e") || (huruf=="o")) 
	{
	cout<<"Huruf yang anda masukan vokal" <<endl;	}
	
	else {
		cout<<"Huruf yang anda masukan bukan vokal";
	}
	
}
