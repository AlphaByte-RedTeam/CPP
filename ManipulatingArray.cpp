#include <iostream>
using namespace std;

int main()
{
    int array[8];

    for( int i = 0; i < 8; i++ )
    {
        cout << "Enter number: ";
        cin >> array[i];
    }

    for( int i = 0; i < 8; i++ )
    {
        cout << array[i] << endl;
    }

    return 0;
}