#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama, kdmatkul, nama_matkul;
    float quiz, kehadiran, tugas, keaktifan, UTS, UAS, tugas_akhir;
    char nilai_akhir;
};

void input_data(Mahasiswa& mhs) {
    cout << "Masukkan data mahasiswa:\n";
    cout << "Nama: "; getline(cin, mhs.nama);
    cout << "Kode mata kuliah: "; getline(cin, mhs.kdmatkul);
    cout << "Nama mata kuliah: "; getline(cin, mhs.nama_matkul);
}

void input_nilai(Mahasiswa& mhs) {
    cout << "Masukkan komponen nilai:\n";
    cout << "Quiz: "; cin >> mhs.quiz;
    cout << "Kehadiran: "; cin >> mhs.kehadiran;
    cout << "Tugas: "; cin >> mhs.tugas;
    cout << "Keaktifan: "; cin >> mhs.keaktifan;
    cout << "UTS: "; cin >> mhs.UTS;
    cout << "UAS: "; cin >> mhs.UAS;
}

void hitung_nilai(Mahasiswa& mhs) {
    mhs.tugas_akhir = ((mhs.quiz * 10) + (mhs.kehadiran* 10) + (mhs.tugas* 10) + (mhs.keaktifan * 10) + (mhs.UTS * 30) + (mhs.UAS* 30)) / 100;
    if (mhs.tugas_akhir > 80)      mhs.nilai_akhir = 'A';
    else if (mhs.tugas_akhir > 70) mhs.nilai_akhir = 'B';
    else if (mhs.tugas_akhir > 60) mhs.nilai_akhir = 'C';
    else if (mhs.tugas_akhir > 50) mhs.nilai_akhir = 'D';
    else if (mhs.tugas_akhir > 40) mhs.nilai_akhir = 'E';
    else                           mhs.nilai_akhir = 'F';
}

void tampilkan_data(Mahasiswa mhs) {
    cout << "\n\n[DATA MAHASISWA DAN NILAI]\n";
    cout << "Nama: " << mhs.nama << endl;
    cout << "Kode mata kuliah: " << mhs.kdmatkul << endl;
    cout << "Nama mata kuliah: " << mhs.nama_matkul << endl;
    cout << "Tugas akhir: " << mhs.tugas_akhir << endl;
    cout << "Nilai akhir: " << mhs.nilai_akhir << endl;
}

int main() {
    Mahasiswa mhs;
    input_data(mhs);
    input_nilai(mhs);
    hitung_nilai(mhs);
    tampilkan_data(mhs);
    return 0;
}
