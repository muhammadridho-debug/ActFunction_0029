#include <iostream>
using namespace std;

int panjang, lebar;

void input()
{
    cout << "Masukkan Panjang : ";
    cin >> panjang;
    cout << "Masukkan Lebar : ";
    cin >> lebar;
}

int kelilingPersegi(int a, int b)
{
    return 2 * (a + b);
}

int luasPersegi(int a, int b)
{
    return a * b;
}