#include <iostream>
using namespace std;


int main(){
	int n,i,j;
	
	cout<<"Masukkan angka = "; cin>>n;
	
	for(i=1; i<=n; i++){
		for (j=1; j<=n-1; j++){
		cout<<" ";
		}
		for (j=1; j<2*i;j++){
			cout<<i;
		}
		cout<<endl;
	}
	
	
	
	return 0;
}

