#include <iostream>
#include <string>
using namespace std;

int main (){
    string customer;
    int kilogram;
    double harga ;
    
    cout << "===Laundry Bersih===" << endl;
    cout << "Masukkan Nama Customer                 : " ;
    getline (cin, customer) ;
    cout << "Masukkan Jumlah berat cucian (kilogram): " ;
    cin >> kilogram;
    cout << "tarif per kilogram                     : Rp. " ;
    cin >> harga;
    
    double total = kilogram * harga ;
    
    cout << "\n ===Laundry Bersih===" << endl;
    cout << "Nama Customer       : "<< customer<< endl ;
    cout << "jumlah berat cucian :"<< kilogram << "kg" << endl;
    cout << "total               :Rp. " <<total <<endl;
    
    return 0;
}
