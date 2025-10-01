/*
Nama: Salsabila Wiryawan
NPM: 140810250022
Nama program: Menjumlahkan digit-digit angka
Deskripsi: Penjumlahan digit angka yang di input oleh user
Timestamp: 18 menit 49 detik
*/

#include <iostream>
using namespace std;

int jumlahDigit(int n){
    if (n==0) return 0;
    return (n % 10) + jumlahDigit(n/10);
}

int main(){
    int angka;

    cout << "Masukan angka: ";
    cin >> angka;

    cout << "Hasil penjumlahan digit-digitnya: " << jumlahDigit(angka) << endl;
}
