#include <iostream>
using namespace std;

int main () {
    int pilihan;
    int jumlahPakaian, beratKilo;
    int costPerPakaian = 9000;
    int costPerKilo = 11000;
    int total = 0;
    
    cout << "=== Program Laundry ===" << endl;
    cout << "Pilih jenis layanan : " << endl;
    cout << "1. Laundry per satuan" << endl;
    cout << "2.Laundry per kilo " << endl;
    cout << "Masukan pilihan (1/2): ";
    cin >> pilihan;
    
    if (pilihan == 1) {
        cout << "Masukkan jumlah pakaian: ";
        cin >> jumlahPakaian;
        total =jumlahPakaian * costPerPakaian;
        
        cout << "\nJumlah pakaian : " << jumlahPakaian << endl;
        cout << "Harga per satuan: Rp" << costPerPakaian << endl;
    }
    else if (pilihan == 2) {
        cout << "Masukkan berat cucian (kg): ";
        cin >> beratKilo;
        total = beratKilo * costPerKilo;
        
        cout << "\nBerat cucian     : " << beratKilo << " kg" << endl;
        cout << " Harga per kilo : Rp" << costPerKilo << endl;
    }
    else {
        cout << "Pilihan tidak valid" << endl;
        return 0;
    }
    cout << "Total biaya         :Rp" << total << endl;
    
    return 0;
}