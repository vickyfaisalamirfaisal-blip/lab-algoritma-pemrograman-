#include <iostream>
using namespace std;
int main(){
	int x, y, tambah, kurang, kali, bagi;
	
	cout<<"Masukan bilangan kesatu = ";
	cin>> x;
	cout<<"MAsukan bilangan kedua = ";
	cin>> y;
	
	tambah = x+y;
	kurang = x-y;
	kali = x*y;
	bagi = x/y;
	
	cout<<"Jadi hasil penjumlahanya adalah ="<<tambah<<endl;
	cout<<"Jadi hasil penguranganya adalah = "<<kurang<<endl;
	cout<<"Jadi hasil perkalianya adalah = "<<kali<<endl;
	cout<<"Jadi hasil pembagianya adalah = "<<bagi<<endl;
	
	return 0;
	
}
