#include <iostream>

// program kalkulator

// function tambah
int tambah( int num1, int num2 )
{
    int result;
    result = num1 + num2;
    return result;
}

// function kurang
int kurang( int num1, int num2 )
{
    int result;
    result = num1 - num2;
    return result;
}

float bagi( float num1, float num2 )
{
    float result;
    result = num1 / num2;
    return result;
}

int kali( int num1, int num2 )
{
    int result;
    result = num1 * num2;
    return result;
}

void printHasil()
{
    std::cout << "Hasil adalah: ";
}

int main() // function yang special
{
    int a;
    int b;
    int tampungHasil;
    float tampungHasilFloat;
    int pilihan;

    std::cout << "Selamat datang di program kalkulator sederhana\n";
    std::cout << "Masukkan nilai untuk a: ";
    std::cin >> a;
    std::cout << "Masukkan nilai untuk b: ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << "1. Tambah\n";
    std::cout << "2. Kurang\n";
    std::cout << "3. Bagi\n";
    std::cout << "4. Kali\n";
    std::cout << "Pilih operasi yang tersedia diatas: \n";
    std::cin >> pilihan;
    
    switch (pilihan)
    {
    case 1:
        tampungHasil = tambah( a, b );
        std::cout << "Hasilnya pertambahan adalah: " << tampungHasil << "\n";
        break;

    case 2:
        tampungHasil = kurang( a, b );
        std::cout << "Hasilnya pengurangan adalah: " << tampungHasil << "\n";
        break;
    
    case 3:
        tampungHasilFloat = bagi( a, b );
        std::cout << "Hasilnya pembagian adalah: " << tampungHasilFloat << "\n";
        break;

    case 4:
        tampungHasil = kali( a, b );
        std::cout << "Hasilnya perkalian adalah: " << tampungHasil << "\n";
        break;
    
    default:
        std::cout << "Pilihan tidak ada\n";
        break;
    }

    return 0;
}