//HANOI TOWER PROGRAM
//RECURSION

#include <iostream>
using namespace std;

void menara (int , char , char , char ); //function prototyping

int main (){
    
    int n;
    cout << "Masukkan banyaknya Disk : ";
    cin >> n;
    menara (n, 'A', 'C', 'B'); //calling function

    return 0;
}

void menara (int x, char a, char c, char b){
    if (x > 0){
        menara (x-1, a, b, c);
        cout << "Pindahkan disk " << x << " dari " << a << " ke " << c << endl;
        menara (x-1, b, c, a);
    }
}

/*

PROCEDURE :
recursion (int, char, char, char)
{void recursion untuk menara}

DECLARATION :
n : int

MAIN PROGRAM :
write : string text {Masukkan banyaknya Disk : }
read : n : int {membaca nilai N}
menara (n, A, C, B) {memanggil Fungsi}
END

CALLING PROGRAM :
menara (x : int, a : char, c : char, b : char)
if (x > 0){
    menara (x-1, a, b, c)
    write : string {Pindahkan disk (x) dari A ke C}
    menara (x-1, b, c, a)
}
END

*/