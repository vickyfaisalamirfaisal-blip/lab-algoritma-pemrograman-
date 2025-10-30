#include <iostream>
using namespace std;

int main()
{
	int nilai[5];
	int tertinggi, terendah;
	float rata = 0;
	
	cout <<"Masukan nilai 5 mahasiswa:\n ";
	for (int i = 0; i < 5; i++){
		cout<<"Nilai mahasiswa ke-" << i + 1 << " : ";
		cin>>nilai[i];
		rata += nilai[i];
	}
	
	tertinggi = nilai{0};
	terendah = nilai{0};
	
	for (int i = 1; i < 5; i++){
		if (nilai{i} > tertinggi)
		    tertinggi = nilai{i};
		if(nilai{i}  < terendah)
		    terendah = nilai{i};
	}
	
	rata = rata / 5;
	
	cout<<"\n=== Hasil ===\n";
	cout<<"Nilai rata-rata :";<<rata <<endl;
	cout<<"Nilai tertingi :";<<tertingi <<endl;
	cout<<"Nilai terendah ";terendah <<endl;
	
    cout <<"Kategori rata-rata : ";
    if (rata >=85)
        cout<<"Sangat baik";
    else if (rata >=70 )
        cout<<"baik";
    else if (rata >=55 )
        cout<<"cukup";
    else (rata >=)
        cout<<"kurang";
	
	
	cout<< " . " << endl;
	
	return 0;
}
