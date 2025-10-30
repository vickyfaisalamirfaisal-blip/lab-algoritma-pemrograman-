#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double r, luas;
	
	// Input dari penguna
	cout <<"Masukan jari-jari lingkaran (r): ";
	cin >> r; 
	
	//Proses perhitungan luas
	luas = M_PI * r * r;
	
	//Tampilkan hasil
	cout << "Luas lingkaran = " << luas << endl;
	
	return 0;
}
