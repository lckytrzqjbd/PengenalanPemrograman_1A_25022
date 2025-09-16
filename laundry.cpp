#include <iostream>
using namespace std;

int main()
{
    //variabel penting
    string namaobat;
    int jumlahstok;
    double tarif;
    
    //input dari user
    cout << "===Apotek Sehat===" << endl ;
    cout << "masukan nama obat : ";
    getline(cin, namaobat);
    cout << "masukan jumlah stok: ";
    cin >> jumlahstok;
    cout << "tarif perobat : Rp ";
    cin >> tarif;
    
    //hitung total biaya
    double total = jumlahstok * tarif ;
    
    // tampilan data awal
    cout << "\n===Data Apotek Sehat===" << endl;
    cout << "nama obat : " << namaobat << endl;
    cout << "jumlah stok : " << jumlahstok << endl;
    cout << "tarif per obat : "<< tarif << endl;
    cout << "total biaya : Rp " << total << endl;
    
    return 0;
}