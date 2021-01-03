#include <iostream>
#include <iomanip>

using namespace std;

// Procedure garis
void makeLine(int length) {
	for (int i = 0; i < length; i++){
		cout << "=";
    }
	cout << "\n";
}

int main(){
    
    // Declaration
    int jumMatKul;
    int jumSemester;
    int nilai_mutu;
    int jumNilaiMutu;
    int jumSKS;
    int totalSKS_Sem = 0;
    int SKS_MatKul[50][50];
    int SKS_sem[14];

    char namaMatKul[50][50][50];
    char nilaiHuruf[50][50];
    char namaMK[50];

    float IPK;
    float IPS[14];
    float total_nilai_rata = 0;

    makeLine(45);
    cout << "\tProgram Menghitung IPK Mahasiswa\n";
    makeLine(45);

    cout << "Masukkan Jumlah Semester: ";
    cin >> jumSemester;
    makeLine(45);

    // Pengecekan input jika semester kurang dari 2
    // atau semester lebih dari 14, maka jumlah semester salah
    if ( jumSemester < 2 || jumSemester > 14 ){
        cout << "Jumlah Semester Salah!\n";
        return 0;
    }

    else{
        for( int i = 0; i < jumSemester; i++ ) {
        // selama i kurang dari jumlah semester, i terus iterasi    
            jumNilaiMutu = 0;
            jumSKS = 0;

            cout << "Masukkan Jumlah Mata Kuliah Semester Ke-" << i + 1 << ": ";
            cin >> jumMatKul;
            makeLine(45);

            if( jumMatKul < 2 ) {
                cout << "Jumlah mata kuliah kurang dari 2 tiap semester!!\n";
                return 0;
            }

            else {
                for( int j = 0; j < jumMatKul; j++ ) {
                    input:
                    cout << "Masukkan mata kuliah ke-" << j + 1 << endl << endl;

                    cout << "Nama Mata Kuliah: ";
                    cin >> namaMatKul[i][j];

                    cout << "Jumlah SKS: ";
                    cin >> SKS_MatKul[i][j];

                    cout << "Masukkan nilai mata kuliah: ";
                    cin >> nilaiHuruf[i][j];

                    makeLine(45);
                    
                    if( nilaiHuruf[i][j] == 'A' || nilaiHuruf[i][j] == 'a' ){
                        nilai_mutu = 4 * SKS_MatKul[i][j];
                    }

                    else if( nilaiHuruf[i][j] == 'B' || nilaiHuruf[i][j] == 'b' ){
                        nilai_mutu = 3 * SKS_MatKul[i][j];
                    }

                    else if( nilaiHuruf[i][j] == 'C' || nilaiHuruf[i][j] == 'c' ){
                        nilai_mutu = 2 * SKS_MatKul[i][j];
                    }

                    else if( nilaiHuruf[i][j] == 'D' || nilaiHuruf[i][j] == 'd'){
                        nilai_mutu = 1 * SKS_MatKul[i][j];
                    }

                    else if( nilaiHuruf[i][j] == 'E' || nilaiHuruf[i][j] == 'e'){
                        nilai_mutu = 0 * SKS_MatKul[i][j];
                    }
                    
                    else{
                        cout << "Input Salah!!\n";
                        goto input;
                        return 0;
                    }

                    jumNilaiMutu += nilai_mutu;
                    jumSKS += SKS_MatKul[i][j];
                }

                if( jumSKS > 24 ) {
                    cout << "Jumlah SKS Semester Lebih Dari 24!\n";
                    return 0;
                }
                
                else{
                    SKS_sem[i] = jumSKS;
                    IPS[i] = jumNilaiMutu / jumSKS;
                }
            }
        }
    }

    cout << "\t\tTranskrip Nilai\n";
    makeLine(45);

    for( int i = 0; i < jumSemester; i++ ) {

        cout << "\nHasil Semester" << i + 1 << ":\n";
        cout << endl << setw(12) << "Mata Kuliah" << setw(12) << "SKS" << setw(12) << "Nilai\n";

        for( int j = 0; j < jumMatKul; j++ ){
            cout << endl << setw(12) << namaMatKul[i][j] << setw(12) << SKS_MatKul[i][j] << setw(12) << nilaiHuruf[i][j] << endl;
        }

        cout << "\n\nSKS\t: " << SKS_sem[i] << endl;
        cout << fixed << setprecision(2) << "IPS\t: " << IPS[i] << endl;
        totalSKS_Sem += SKS_sem[i];
        total_nilai_rata += IPS[i];

        makeLine(45);
    }

    IPK = total_nilai_rata/jumSemester;
    cout << "\nTotal SKS\t: " << totalSKS_Sem << endl;
    cout << fixed << setprecision(2) << "IPK\t\t: " << IPK << endl;

    makeLine(45);

    return 0;
}