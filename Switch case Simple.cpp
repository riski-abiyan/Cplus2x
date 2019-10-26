#include <iostream>

using namespace std;

int main() {

int nilai;

cout<<"Masukan Nilai kamu : ";
cout<<endl;
cin>>nilai;

switch (nilai/10) {
	
	case 10 : {
		cout<<"Nilai anda A ";
		break;
	}
	case 9 : {
		cout<<"Nilai anda A ";
		break;
	}
	case 8 : {
		cout<<"Nilai anda B ";
		break;
	}
	case 7 : {
		cout<<"Nilai anda B ";
		break;
	}
	case 6 : {
		cout<<"Nilai anda C ";
		break;
	}
	case 5 : {
		cout<<"Nilai anda C ";
		break;
	}
	case 4 : {
		cout<<"Nilai anda D ";
		break;
	}
	case 3 : {
		cout<<"Nilai anda D ";
		break;
	}
	case 2 : {
		cout<<"Nilai anda E ";
		break;
	}
	case 1 : {
		cout<<"Nilai anda E ";
		break;
	}
	case 0 : {
		cout<<"Nilai anda E ";
		break;
	}
}

}
