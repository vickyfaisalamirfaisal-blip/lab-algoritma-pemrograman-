#include<iostream>
using namespace std;

struct Mahasiswa{
	string nama;
	string kelas;
	int npm;
	float ipk;
}Helena, Anton;

int main(){
	Mahasiswa Joshua;
  Joshua.nama = "Joshua";
  Joshua.npm = 232310012;
  
  cout<<Joshua.nama<<endl<<Joshua.npm;
}
