#include <iostream>
#include <conio.h>
using namespace std;

void Makeline( int len )
{
    for( int i = 0; i < len; i++ )
    {
        cout << "=";
    }

    cout << "\n";
}

int main()
{
    string nama_barang;
    int jum_barang;
    int harga;
    int total_harga;
    int sub_total = 0;
    int barang;
    int p;
    char yt;

    awal:
    Makeline(45);

    cout << "Nama barang: ";
    cin.ignore();
    getline( cin, nama_barang );

    cout << "Jumlah barang: ";
    cin >> jum_barang;

    cout << "Harga: Rp. ";
    cin >> harga;

    cout << "\n";

    total_harga = jum_barang * harga;
    cout << "Total harga Rp. " << total_harga << endl;

    cout << "Apakah anda mau membayar sekarang? [Y/T]\n";
    cout << "Input disini: ";
    cin >> yt;

    cout << "\n";

    sub_total += total_harga;

    if( yt=='T' || yt == 't' )
    {
        goto awal;
    }

    else if( yt == 'Y' || yt == 'y' )
    {
        goto selesai;
    }

    else
    {
        cout << "Input invalid!\n";
    }

    selesai:
    cout << "Total belanja yang harus dibayar Rp. " << sub_total << endl;

    getch();
    return 0;
}
