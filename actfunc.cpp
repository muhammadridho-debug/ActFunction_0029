#include <iostream>
using namespace std;

int jarijari;
float phi = 3.14159;

void input()
{
    cout << "Masukkan Jari-Jari :";
    cin >> jarijari;
}

float luasLingkaran(int a, float b)
{
    return a * a * b;
}

void output()
{
    cout << "Hasilnya : " << luasLingkaran(jarijari, phi);
}

int main()
{
    input();
    output();
}