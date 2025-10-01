/*
Nama: Salsabila Wiryawan
NPM: 140810250022
Nama Program: Membalikan kata
Deskripsi: Membalikan string yang di input oleh user
Timestamp: 22 Menit 19 detik
*/

#include <iostream>
using namespace std;

void balikString(string str, int index){
    if (index < 0) return;
    cout << str[index];
    balikString (str, index-1);
}

int main(){
    string kata;

    cout << "Masukan kata: ";
    cin >> kata;

    cout << "Kebalikannya: ";
    balikString(kata, kata.length()-1);

    return 0;
}
