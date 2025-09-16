#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaBarang;
    int stock;
    double harga = 0; 

    cout << "=== Daftar Barang di Waroeng ===\n";
    cout << "minuman bersoda : Rp 5000\n";
    cout << "kacang pilus    : Rp 1000\n";
    cout << "tahu bulat      : Rp 500\n";
    cout << "susu UHT        : Rp 7000\n";
    cout << "teh celup       : Rp 1000\n";
    cout << "kopi susu       : Rp 3000\n\n";

    cout << "=== Waroeng Kita Bersama ===\n";
    cout << "Masukkan Nama Barang  : ";
    getline(cin, namaBarang);  

    cout << "Masukkan jumlah stock : ";
    cin >> stock;

    
    if (namaBarang == "minuman bersoda") {
        harga = 5000;
    } else if (namaBarang == "kacang pilus") {
        harga = 1000;
    } else if (namaBarang == "tahu bulat") {
        harga = 500;
    } else if (namaBarang == "susu UHT") {
        harga = 7000;
    } else if (namaBarang == "teh celup") {
        harga = 1000;
    } else if (namaBarang == "kopi susu") {
        harga = 3000;
    } else {
        cout << "\n⚠️ Maaf,\"" << namaBarang << "\" tidak ada di warung." << endl;
        return 0;
    }

    double total = stock * harga;

    cout << "\n=== Data Waroeng Kita ===" << endl;
    cout << "Nama Barang   : " << namaBarang << endl;
    cout << "Jumlah Stock  : " << stock << endl;
    cout << "Tarif Per pcs : Rp " << harga << endl;
    cout << "Total         : Rp " << total << endl;

    return 0;
}
