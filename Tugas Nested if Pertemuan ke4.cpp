#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "Nama Siswa: ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I: ";
    cin >> n1;
    cout << "Nilai Pertandingan II : ";
    cin >> n2;
    cout << "Nilai Pertandingan III: ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    cout << "\nRata-rata: " << rata << endl;

    if (rata>= 70) {
        if ( rata >= 85) {
            cout << "hadiah: Komputer Core i5\n";
        } else {
            cout << "Hadiah: Uang Rp.2,500,000\n";
        }
    } else {
        cout << "Hadiah: Hadiah Hiburan\n";
    }

    return 0;
}
