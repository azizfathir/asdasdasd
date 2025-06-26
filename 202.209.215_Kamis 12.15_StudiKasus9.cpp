#include <iostream>
using namespace std;

class Siswa {
public:
    string nim;
    float mapel1;
    float mapel2;
    float mapel3;
};

class UAD {
private:
    Siswa siswa[100];
    int n;

public:
    void input() {
        cout << "Masukkan jumlah siswa: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
        	cout<<"\nSiswa "<<i+1;
            cout << "\nNim " << (i + 1) << ": ";
            cin >> siswa[i].nim;
            cout << "Masukkan nilai Mapel 1: ";
            cin >> siswa[i].mapel1;
            cout << "Masukkan nilai Mapel 2: ";
            cin >> siswa[i].mapel2;
            cout << "Masukkan nilai Mapel 3: ";
            cin >> siswa[i].mapel3;
        }
    }

    void tampilkanNilai() {
        cout << "\n+==============================================================+" << endl;
        cout << "| No\t| NIM\t|Mapel 1 | Mapel 2 | Mapel 3 |  Rata-rata |" << endl;
        cout << "+==============================================================+" << endl;
        for (int i = 0; i < n; i++) {
            float rata = (siswa[i].mapel1 + siswa[i].mapel2 + siswa[i].mapel3) / 3.0;
            cout << "| " << i + 1 << "\t| " << siswa[i].nim << "\t| " << siswa[i].mapel1 << "\t | " << siswa[i].mapel2 << "\t   | " << siswa[i].mapel3 << "\t     | " << rata << "\t  |" << endl;
        }
        cout << "+==============================================================+\n" << endl;
    }

    void sortingAscending() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                float rata1 = (siswa[j].mapel1 + siswa[j].mapel2 + siswa[j].mapel3) / 3.0;
                float rata2 = (siswa[j + 1].mapel1 + siswa[j + 1].mapel2 + siswa[j + 1].mapel3) / 3.0;

                if (rata1 > rata2) {
                    Siswa temp = siswa[j];
                    siswa[j] = siswa[j + 1];
                    siswa[j + 1] = temp;
                }
            }
        }
        cout << "\nData berhasil diurutkan secara ASCENDING berdasarkan rata-rata.\n";
    }

    void sortingDescending() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                float rata1 = (siswa[j].mapel1 + siswa[j].mapel2 + siswa[j].mapel3) / 3.0;
                float rata2 = (siswa[j + 1].mapel1 + siswa[j + 1].mapel2 + siswa[j + 1].mapel3) / 3.0;

                if (rata1 < rata2) {
                    Siswa temp = siswa[j];
                    siswa[j] = siswa[j + 1];
                    siswa[j + 1] = temp;
                }
            }
        }
        cout << "\nData berhasil diurutkan secara DESCENDING berdasarkan rata-rata.\n";
    }
};

int main() {
    UAD u;
    int pilihan;

    do {
        cout << "\n========== MENU ==========\n";
        cout << "1. Input Nilai Siswa\n";
        cout << "2. Tampilkan Nilai dan Rata-rata\n";
        cout << "3. Sorting rata-rata secara ascending\n";
        cout << "4. Sorting rata-rata secara descending\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            u.input();
            break;
        case 2:
            u.tampilkanNilai();
            break;
        case 3:
            u.sortingAscending();
            u.tampilkanNilai();
            break;
        case 4:
            u.sortingDescending();
            u.tampilkanNilai();
            break;
        case 5:
            cout << "Terima kasih!\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
            break;
        }

    } while (pilihan != 5);

    return 0;
}
