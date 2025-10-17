#include <iostream>
using namespace std;

int main(){
	
	//variabel
	const double pi=3.14;
	double r,luas;
	
	//progres
	cout<<"Program Menghitung Luas Lingkaran"<<endl;
	cout<<"\nMasukan jari-jari : ";
	cin>>r;
	luas = pi*r*r;
	
	//output
	cout<<"Luas lingkaran = PI x r x r "<<endl;
	cout<<"PI = "<<pi<<endl;
	cout<<"r = "<<r<<endl;
	cout<<"Luas = "<<pi<<"x"<<r<<"x"<<r<<endl;
	cout<<"Hasil Luas Lingkaran Adalah = "<<luas;
	
	getchar;
	
	
}
