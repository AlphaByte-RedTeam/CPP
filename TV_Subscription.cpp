#include <iostream>
#include <conio.h>

using namespace std;

void Makeline(int len)
{
    for( int i = 0; i < len; i++ )
    {
        cout << "=";
    }

    cout << "\n";
}

int main()
{
    int jum_anggota;
    int jum_akun_anak;
    int jum_akun_dewasa;
    int jum_biaya_normal;
    int jum_biaya_diskon;
    int jum_diskon_total;
    int harga_akun_anak = 50000;
    int harga_akun_dewasa = 100000;
    int sisa_akun1;
    int sisa_akun2;

    float diskon = 0.2;

    Makeline(60);
    cout << "\tPROGRAM BERLANGGANAN TV!\n";
    Makeline(60);

    cout << "Tipe akun anak-anak (Rp. 50.000)\n"
         << "Tipe akun orang dewasa (Rp. 100.000)\n";

    Makeline(60);

    cout << "Berapa jumlah akun anak yang ingin di subscribe?: ";
    cin >> jum_akun_anak;


    Makeline(60);

    cout << "Berapa jumlah akun orang dewasa yang ingin di subscribe?: ";
    cin >> jum_akun_dewasa;

    if( (jum_akun_anak + jum_akun_dewasa) <= 4 )
    {
        jum_biaya_normal = ( jum_akun_anak * harga_akun_anak ) + ( jum_akun_dewasa * harga_akun_dewasa );
        cout << "Jumlah biaya yang harus dibayarkan Rp. " << jum_biaya_normal << endl;

        Makeline(60);

        cout << "Terima kasih telah berlangganan!\n";
        cout << "Selamat menonton!\n";
    }

    else if( (jum_akun_anak + jum_akun_dewasa) > 4 )
    {
        Makeline(60);
        cout << "Selamat! Anda mendapatkan diskon 20%\n";
        jum_biaya_normal = ( jum_akun_anak * harga_akun_anak ) + ( jum_akun_dewasa * harga_akun_dewasa );
        jum_biaya_diskon = jum_biaya_normal * diskon;
        jum_diskon_total = jum_biaya_normal - jum_biaya_diskon; 
        cout << "Jumlah biaya yang harus dibayarkan setelah diskon Rp. " << jum_diskon_total << endl;

        Makeline(60);

        cout << "Terima kasih telah berlangganan!\n";
        cout << "Selamat menonton!\n";
    }
    
    else
    {
        cout << "ERROR!\n";
    }

    Makeline(60);

    getch();
    return 0;
}