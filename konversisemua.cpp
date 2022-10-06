#include <iostream>

using namespace std;

int main(){
	int c,f,h;
	char ulang;
	atas:
	
	cout<<"\n1. Celcius Ke Farenheit\n2. Farenheit Ke Celcius"<<endl;
	cout<<"Pilih Konversi Diatas : ";cin>>h;
	
	switch (h){
		case 1: cout<<"Masukkan Celcius : ";cin>>c;
		f = c * 1.8 + 32;
		cout<<"Hasil : "<<f<<endl;
		break;
		
		case 2: cout<<"Masukkan Farenheit : ";cin>>f;
		c = (f - 32) * 5/9;
		cout<<"Hasil : "<<c<<endl;
		break;
		
		default : cout<<"ERROR!!!";
		
		
	}
	cout<<"Apakah Anda Ingin Mengulangi(Y/T) : ";cin>>ulang;
	if (ulang == 'y' || ulang =='Y'){
			goto atas;
	}
	
	return 0;
}
