#include <iostream>
#include <vector>

int main() {
    int panjang, lebar, tinggi;

    // Meminta pengguna untuk memasukkan panjang, lebar, dan tinggi array
    std::cout << "Masukkan panjang array: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar array: ";
    std::cin >> lebar;
    std::cout << "Masukkan tinggi array: ";
    std::cin >> tinggi;

    // Deklarasi array tiga dimensi sesuai dengan input pengguna
    std::vector < std::vector < std::vector < int >  > > array(panjang, std::vector < std::vector < int > > (lebar, std::vector < int > (tinggi)));

    // Input elemen array
    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < panjang; ++i) {
        for (int j = 0; j < lebar; ++j) {
            for (int k = 0; k < tinggi; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: ";
                std::cin >> array[i][j][k];
            }
        }
    }

    // Menampilkan elemen-elemen array
    std::cout << "\nElemen-elemen array:\n";
    for (int i = 0; i < panjang; ++i) {
        for (int j = 0; j < lebar; ++j) {
            for (int k = 0; k < tinggi; ++k) {
                std::cout << "Array[" << i << "][" << j << "][" << k << "]: " << array[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}

