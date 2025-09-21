#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string namaObat;
    int jumlah;
    float harga, total, diskon = 0, bayar;

    cout << "=== Apotek ===" << endl;
    cout << "Nama obat: ";
    cin >> namaObat;
    cout << "Harga per unit: Rp ";
    cin >> harga;
    cout << "Jumlah obat: ";
    cin >> jumlah;

    total = harga * jumlah;

    // diskon kalau beli lebih dari 20 pcs
    if (jumlah > 20) {
        diskon = total * 0.2; // 20%
    }

    bayar = total - diskon;

    cout << fixed << setprecision(2);
    cout << "\n=== Struk Pembelian Obat ===" << endl;
    cout << "Obat        : " << namaObat << endl;
    cout << "Jumlah      : " << jumlah << endl;
    cout << "Total       : Rp " << total << endl;
    cout << "Diskon      : Rp " << diskon << endl;
    cout << "Total Bayar : Rp " << bayar << endl;

    return 0;
}