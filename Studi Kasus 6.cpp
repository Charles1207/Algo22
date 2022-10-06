#include <iostream>

using namespace std;

int main(){
	int tahun;
	
	cout<<"Input Tahun : ";cin>>tahun;
	
	if(tahun % 4 ==0 || tahun>=1900 || tahun <=2022){
		cout<<"Tahun Kabisat";
	}
	else {
		cout<<"Bukan Tahun Kabisat";
	}
	
	return 0;
	
}
