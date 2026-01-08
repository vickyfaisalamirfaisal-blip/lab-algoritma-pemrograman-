#include<iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string kelas;
	int npm;
	float ipk;
}Helena, Anton;

int main(){
//	Mahasiswa Joshua;
//  Joshua.nama = "Joshua";
//  Joshua.npm = 232310012;
//  
//  cout<<Joshua.nama<<endl<<Joshua.npm;

//    Mahasiswa Daffa{"Daffa W", "TI-23-PA", 232310027, 38.9};
//    cout<<Daffa.nama;

Mahasiswa TI[3];
TI[0].nama = "Suyou";
TI[0].npm = 252310022;

TI[1].nama = "Ujang";
TI[1].npm = 252310034;

TI[2].nama = "Hanabi";
TI[2].npm = 252310067;

for(int i = 0; i < 3; i++){
	cout<<TI[i].nama<<endl<<TI[i].npm<<endl<<endl;
}

    
    return 0;
}
  
