#include <iostream>

using namespace std;

int main(){
	
	int nilai;
	
	cout<<"Masukkan Nilai Kegantengan Anda : ";cin>>nilai;
	
	if(nilai >=85 && nilai <=100 ){
		cout<<"Anda Ganteng";
	}
	else if(nilai <1){
		cout<<"Anda ALIEN";
	}
	else if(nilai >=101){
		cout<<"Anda Bukan Manusia";
	}
	else {
		cout<<"Anda Butuh Oplas";
	}
	
	return 0;
}
