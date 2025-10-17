#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    float n1, n2, n3,rata;
    int kategori;

    cout << "PROGRAM HITUNG NILAI RATA-RATA\n";
    cout << "Nama Siswa: ";
    getline(cin, nama);
    cout << "Nilai Pertandingan I: ";
    cin >> n1;
    cout << "Nilai Pertandingan II: ";
    cin >> n2;
    cout << "Nilai Pertandingan III: ";
    cin >> n3;

    rata = (n1 + n2 + n3) / 3;

    cout << "\nRata-rata: " << rata << endl;

    if (rata >= 85)
        kategori = 3;
    else if (rata >= 70)
        kategori = 2;
    else
        kategori = 1;

    switch (kategori) {
        case 3:
            cout << "Hadiah: Komputer Core i5\n";
            break;
        case 2:
            cout << "Hadiah: Uang Rp.2,500,000\n";
            break;
        case 1:
            cout << "Hadiah: Hadiah Hiburan\n";
            break;
        default:
            cout << "Data tidak valid.\n";
    }

    return 0;
}
