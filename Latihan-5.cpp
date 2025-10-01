/*
Nama: Salsabila Wiryawan
NPM: 140810250022
Nama program: Angka palindrom
Deskripsi: Cek apakah angka yang di input itu palindrom atau bukan
Timestamp: 32 menit 37 detik
*/

#include <iostream>
using namespace std;

int balikAngka(int n, int balik = 0){
    if (n==0) return balik;
    balik = balik * 10 + (n % 10);  
    return balikAngka (n/10, balik);
}

bool isPalindrom(int n){
    return n == balikAngka(n);
}

int main (){
    int angka;

    cout << "Masukan angka: ";
    cin >> angka;

    if (isPalindrom(angka)){
        cout << angka << " adalah palindrom" << endl;
    }
    else {
        cout << angka << " bukan palindrom" << endl;
    }

    return 0;
}