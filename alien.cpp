    #include <iostream>
    using namespace std;


    int main() {
    char huruf_sebelumnya;
    char huruf_sekarang;
    char huruf_baru;
    int hasil;
    cout << "Masukkan huruf pertama: ";
        cin >> huruf_sebelumnya;

        cout << "Huruf baru: " << huruf_sebelumnya << endl;
        cout << "Masukkan huruf berikutnya: ";

        while (cin >> huruf_sekarang) {
            int nilai_sebelumnya = huruf_sebelumnya - 'A'+ 1;
            int nilai_sekarang = huruf_sekarang - 'A' + 1;

            hasil= nilai_sebelumnya + nilai_sekarang;
            if (hasil > 26) {
                hasil = hasil - 26;
            }
            huruf_baru = 'A' + hasil - 1;
            cout << "Huruf baru: " << huruf_baru << endl;
            huruf_sebelumnya = huruf_sekarang;
             cout << "Masukkan huruf berikutnya: ";
        }
    return 0;
    }
