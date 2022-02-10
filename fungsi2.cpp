#include <iostream>

// pass by value
void swapByValue( int x, int y )
{
    int temp = x;
    x = y;
    y = temp;
}

void swapByReference( int& x, int& y )
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5;
    int b = 2;

    int c = 3;
    int d = 9;

    // Using pass by Value
    std::cout << "Before swap: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swapByValue( a, b ); // call the function
    std::cout << "After swap by Value: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    // Using pass by Reference
    std::cout << "Before swap: " << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swapByReference( c, d );
    std::cout << "After swap by Reference: " << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    return 0;
}