#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        string nama, kdmatkul, nama_matkul;
        float quiz, kehadiran, tugas, keaktifan, UTS, UAS, tugas_akhir;
        char nilai_akhir;

    public:
        void input_data_mahasiswa() {
            cout << "DATA MAHASISWA\n";
            cout << "Masukkan nama mahasiswa: ";
            getline(cin, nama);
        }
        void input_data_mata_kuliah() {
            cout << "DATA MATA KULIAH\n";
            cout << "Masukkan kode mata kuliah: ";
            getline(cin, kdmatkul);

            cout << "Masukkan nama mata kuliah: ";
            getline(cin, nama_matkul);
        }
        void input_nilai() {
            cout << "DATA NILAI\n";
            cout << "Masukkan nilai quiz: ";
            cin >> quiz;

            cout << "Masukkan nilai kehadiran: ";
            cin >> kehadiran;

            cout << "Masukkan nilai tugas: ";
            cin >> tugas;

            cout << "Masukkan nilai keaktifan: ";
            cin >> keaktifan;

            cout << "Masukkan nilai UTS: ";
            cin >> UTS;

            cout << "Masukkan nilai UAS: ";
            cin >> UAS;

            cin.ignore();
        }

        void hitungTugasAkhir() {
            tugas_akhir = ((quiz*10) + (kehadiran*10) + (tugas*10) + (keaktifan*10) + (UTS*30) + (UAS*30))/100;
            if (tugas_akhir > 80) {
                nilai_akhir = 'A';
            } else if (tugas_akhir > 70) {
                nilai_akhir = 'B';
            } else if (tugas_akhir > 60) {
                nilai_akhir = 'C';
            } else if (tugas_akhir > 50) {
                nilai_akhir = 'D';
            } else {
                nilai_akhir = 'E';
            }
        }

        void tampilkanData() {
            cout << "Nama Mahasiswa: " << nama << endl;
            cout << "Kode Mata Kuliah: " << kdmatkul << endl;
            cout << "Nama Mata Kuliah: " << nama_matkul << endl;
            cout << "Tugas Akhir: " << tugas_akhir << endl;
            cout << "Nilai Akhir: " << nilai_akhir << endl;
        }
};

int main() {
    Mahasiswa mhs;
    mhs.input_data_mahasiswa();
    mhs.input_data_mata_kuliah();
    mhs.input_nilai();
    mhs.hitungTugasAkhir();
    mhs.tampilkanData();
    return 0;
}
