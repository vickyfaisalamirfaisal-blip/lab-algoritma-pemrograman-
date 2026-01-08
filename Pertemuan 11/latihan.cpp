#include<iostream>
#include<string>
using namespace std;

struct Buku{
	string judul;
	string penulis;
	string penerbit;
    int tahun;
};
int main(){
	Buku buku1, buku2;
	cout<<"Input buku1"<<endl;
	cout<<"Judul buku :";
	cin>>buku1.judul;
	cout<<"Penulis : ";
	cin>>buku1.penulis;
	cout<<"Penerbit:";
	cin>>buku1.penerbit;
	
	cout<<endl;
	
	buku1, buku2;
	cout<<"Input buku2"<<endl;
	cout<<"Judul buku :";
	cin>>buku2.judul;
	cout<<"Penulis :";
	cin>>buku2.penulis;
	cout<<"Penerbit :";
	cin>>buku2.penerbit;
	
	cout<<endl;
	
	cout<<"=== Data Buku ==="<<endl;
	cout<<"Buku 1"<<endl;
	cout<<"Judul :"<<buku1.judul<<endl;
	cout<<"Penulis :"<<buku1.penulis<<endl;
	cout<<"Penerbit:"<<buku1.penerbit<<endl;
	
	1;
	
	cout<<"=== Data Buku ==="<<endl;
	cout<<"Buku 2"<<endl;
	cout<<"Judul :"<<buku2.judul<<endl;
	cout<<"Penulis :"<<buku2.penulis<<endl;
	cout<<"Penerbit:"<<buku2.penerbit<<endl;
	
    return 0;
}
