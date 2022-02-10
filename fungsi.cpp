#include <iostream>

// pass by value
int f( int x )
{
    return x;
}

// pass by reference
// & (ampersand) symbol is used to pass the address of the variable
int g( int& x )
{
    return x;
}

// pass by pointer
// \* (asterisk) symbol is used to pass the address of the variable
int h( int* x )
{
    return *x;
}

std::string tambah( std::string a, std::string b )
{
    return a + b;
}

int main() // function yang spesial
{
    std::string k1 = "Hello";
    std::string k2 = "World";

    std::string hasil = tambah( k1, k2 );
    std::cout << hasil << std::endl;

    return 0;
}