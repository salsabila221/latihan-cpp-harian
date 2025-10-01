/*
Nama: Salsabila Wiryawan
NPM: 140810250022
Nama Program: Hitung mundur
Deskripsi: Menghitung mundur dari suku ke-n mencapai angka 1
Timestamp: 15 menit 37 detik
*/

#include <iostream>
using namespace std;

void hitungMundur(int n){
    if (n==0) return;
    cout << n << " ";
    hitungMundur (n - 1);
}

int main(){
    int angka;

    cout << "Masukan angka: ";
    cin >> angka;

    cout << "Hasil cetak mundur: ";
    hitungMundur(angka);

    return 0;
}
