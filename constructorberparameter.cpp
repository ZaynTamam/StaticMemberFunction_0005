#include <iostream>
using namespace std;

class mahasiswa {
public:
    mahasiswa(); // Constructor
};

mahasiswa::mahasiswa() {
    cout << "Constructor Terpanggil" << endl; // Definisi Constructor
}

// Definisi constructor dengan parameter
mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
}