#include <iostream>
using namespace std;

int main(){
	
	//variabel
	const double pi = 3.14;
	double r,t,volume;
	
	//proses
	cout<<"Program menghitung  volume tabung "<<endl;
	cout<<"\nMasukan jari-jari : ";
	cin>>r;
	cout<<"Masukan tinggi : ";
	cin>>t;
	volume = pi*r*r*t;
	
	//output
    cout<<"\nVolume tabung = PI*r*r*t"<<endl;
	cout<<"PI = "<<pi<<endl;
	cout<<"r = "<<r<<endl;
	cout<<"Volume = "<<pi<<"x"<<r<<"x"<<r<<"x"<<t<<endl;
	cout<<"Hasil volume tabung adalah = "<<volume;
	
	return 0;
	
	
}
