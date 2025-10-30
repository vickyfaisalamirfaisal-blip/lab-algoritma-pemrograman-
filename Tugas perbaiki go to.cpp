#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
	int a,b;
	char lagi;
	do{
	cout<<"Program pernyataan go to"<<endl;
	
	cout<<"Masukan Bilangan = ";
	cin>> a;
	
	b = a % 2;
	cout<<"Nilai" << a << " % 2 adalah = " << b << endl;
	
	cout<<"\nIngin hitung lagi{Y/T}:";
	lagi = getche();
	   
	}while (lagi == 'Y'|| lagi == 'y');
	
	getch();
	
	return 0;
}
