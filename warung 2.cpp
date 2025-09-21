#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "=== Total Belanja Warung ===" << endl;
    cout << "Masukkan jumlah barang : ";
    cin >> n;
    
    string namaBarang[50];
    int jumlah[50];
    int harga[50];
    int total = 0;
    
    for (int i = 0; i < n; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Nama Barang : ";
        cin >> namaBarang[i];
        cout << "jumlah       : ";
        cin >> jumlah[i];
        cout << "Harga satuan: Rp ";
        cin >> harga[i];
        
        total += jumlah[i] * harga[i];
    }
    
    cout << "\n=== Struk Belanja ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << namaBarang[i] << " x " << jumlah[i] << " = Rp" << jumlah[i] * harga[i] << endl;
    }
    cout << "--------------------------" << endl;
    cout << "Total Belanja: Rp" << total << endl;
    return 0;
}