#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int jum_bulan[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };     // menginisialisasikan total hari dalam 12 bulan
    int bulan;
    int tahun;
    int jum_hari;

    cout << "Bulan (dengan angka) = ";
    cin >> bulan;           // Di input dengan menggunakan angka

    if( bulan > 12 )
    {
        cout << "Angka yang dimasukkan invalid!\n";
    }

    cout << "\n";

    cout << "Tahun = ";
    cin >> tahun;

    cout << "\n\n";

    if( bulan == 2 )
    {
        if(tahun % 400 == 0)
        {
            jum_hari = 29;
            cout << "Tahun Kabisat\n";
        }

        else if(tahun % 100 == 0)
        {
            jum_hari = 29;
            cout << "Tahun Kabisat\n";
        }

        else if(tahun % 4 == 0)
        {
            jum_hari = 29;
            cout << "Tahun Kabisat\n";
        }

        else
        {
            jum_hari = 28;
            cout << "Tahun Biasa\n";
        }
    }

    else
    {
        jum_hari = jum_bulan[bulan];
        // jumlah bulan akan mengikuti index input bulan, kemudian dimasukkan ke dalam
        // variable jumlah hari
    }

    cout << "Bulan ke-" << bulan << " tahun " << tahun << " jumlah hari = " << jum_hari << " hari.\n";

    getch();
    return 0;
}