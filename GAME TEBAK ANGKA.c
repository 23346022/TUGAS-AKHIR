#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inisialisasi generator angka acak
    std::srand(std::time(0));

    // Menghasilkan angka acak antara 1 dan 100
    int angkaTebakan = std::rand() % 100 + 1;

    int tebakan, percobaan = 0;
    const int maksPercobaan = 8;

    std::cout << "Selamat datang di Permainan Tebak Angka!" << std::endl;
    std::cout << "Saya telah memilih sebuah angka antara 1 dan 100. Coba tebak!" << std::endl;

    do {
        std::cout << "Masukkan tebakan Anda: ";
        std::cin >> tebakan;

        percobaan++;

        if (tebakan == angkaTebakan) {
            std::cout << "Selamat! Anda berhasil menebak angka " << angkaTebakan << " dalam " << percobaan << " percobaan." << std::endl;
            break;
        } else if (tebakan < angkaTebakan) {
            std::cout << "Tebakan terlalu rendah. Coba lagi." << std::endl;
        } else {
            std::cout << "Tebakan terlalu tinggi. Coba lagi." << std::endl;
        }

    } while (percobaan < maksPercobaan);

    if (percobaan == maksPercobaan) {
        std::cout << "Maaf, Anda telah menggunakan semua kesempatan. Angka yang benar adalah " << angkaTebakan << "." << std::endl;
    }

    return 0;
}



// Program ini memberikan pemain 5 kesempatan untuk menebak angka 
// yang dihasilkan secara acak antara 1 dan 100. Program memberikan
// petunjuk apakah tebakan terlalu rendah atau terlalu tinggi. 
