#include <iostream>
using namespace std;

int main()
{
	int x, y, tambah, kurang, kali;
	
	// Penjumlahan
	cout<<"Nomer 1 - penjumlahan"<<endl;
	cout<<"Masukan 2 angka"<<endl;
	cout<<"A + "; 
	cin >> x;
	cout<<"B + "; 
	cin >> y;
	
	tambah = x + y;
	
	cout<<"A + B = " <<tambah<< endl;
	cout<<"Hasil pertambahan A + B = "<<x+y<<endl;
	
	
	// Pengurangan
	cout<<"Nomer 2 - pengurangan"<<endl;
	cout<<"Masukan 2 angka"<<endl;
	cout<<"C - ";
	cin>> x;
	cout<<"D - ";
	cin>> y;
	
	kurang = x - y;
	
	cout<<"C - D = " <<kurang<<endl;
	cout<<"Hasil pengurangan C - D = "<<x-y<<endl;
	
	// Perkalian
	cout<<"Nomer 3 - perkalian"<<endl;
	cout<<"Masukan 2 angka"<<endl;
	cout<<"E * ";
	cin>> x;
	cout<<"F * ";
	cin>> y;
	
	kali = x * y;
	
	cout<<"E * F = "<<kali<<endl;
	cout<<"Hasil perkalian E * F = "<<x*y<<endl;
	
	return 0;
	
	
}
