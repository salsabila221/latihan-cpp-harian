/*
Nama: Salsabila Wiryawan
NPM: 140810250022
Nama Program: Menghitung hasil faktorial
Deskripsi: Menjumlahkan faktorial dari angka yang diinput oleh user
*/

#include <iostream>
using namespace std;

int faktorial (int n){
    if (n <= 1){
        return 1;
    } else {
        return n * faktorial(n-1);
    }
}
int main(){
    int angka;

    cout << "Input angka: ";
    cin >> angka;

    int hasil = faktorial(angka);
    cout << "Hasil dari faktorial " << angka << ": " << hasil << endl;

    return 0;
}