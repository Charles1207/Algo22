#include <iostream>

using namespace std;

int main(){
	int kalkulator,kurang,kali,bagi,a,b,c,jenis;
	
	cout<<"\n1.Penjumlahan \n2.Pengurangan \n3.Perkalian \n4.Perkalian"<<endl;
	cout<<"Masukkan Pilihan Yang Anda Ingin Pakai :";cin>>kalkulator;
	
	cout<<"--------------------------------"<<endl;
	switch(kalkulator){
	
	case 1 :cout<<"Masukkan Angka Pertama : ";cin>>a;
			cout<<"Masukkan Angka kedua : ";cin>>b;
			c = a + b;
			cout<<"Total : "<<c<<endl;
			break;
			
	case 2 :cout<<"Masukkan Angka Pertama : ";cin>>a;
			cout<<"Masukkan Angka Kedua : ";cin>>b;
			c = a - b;
			cout<<"total : "<<c<<endl;
			break;
			
	case 3 :cout<<"Masukkan Angka Pertama : ";cin>>a;
			cout<<"Masukkan Angka Kedua : ";cin>>b;
			c = a * b;
			cout<<"total : "<<c<<endl;
			break;
			
	case 4 :cout<<"Masukkan Angka Pertama : ";cin>>a;
			cout<<"Masukkan Angka Kedua : ";cin>>b;
			c = a / b;
			cout<<"total : "<<c<<endl;
			break;
	
	default: cout<<"ERROR!!!";

}
	return 0;
}
