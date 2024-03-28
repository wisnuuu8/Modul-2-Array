#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    
    // Meminta pengguna untuk memasukkan jumlah elemen array
    std::cout << "Masukkan jumlah elemen array: ";
    std::cin >> n;

    // Deklarasi array dengan ukuran yang dimasukkan oleh pengguna
    std::vector<int> array(n);

    // Input elemen array
    std::cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Array[" << i << "]: ";
        std::cin >> array[i];
    }

    // Menampilkan menu
    std::cout << "\nMenu:\n";
    std::cout << "1. Cari nilai maksimum\n";
    std::cout << "2. Cari nilai minimum\n";
    std::cout << "3. Cari nilai rata-rata\n";

    int pilihan;
    std::cout << "Pilih menu (1/2/3): ";
    std::cin >> pilihan;

    // Melakukan operasi sesuai dengan pilihan pengguna
    switch (pilihan) {
        case 1:
            // Mencari nilai maksimum
            std::cout << "Nilai maksimum: " << *std::max_element(array.begin(), array.end()) << std::endl;
            break;
        case 2:
            // Mencari nilai minimum
            std::cout << "Nilai minimum: " << *std::min_element(array.begin(), array.end()) << std::endl;
            break;
        case 3:
            // Menghitung nilai rata-rata
            double total = 0;
            for (int i = 0; i < n; ++i) {
                total += array[i];
            }
            std::cout << "Nilai rata-rata: " << total / n << std::endl;
            break;
        
            std::cout << "Pilihan tidak valid!\n";
            break;
    }

    return 0;
}

