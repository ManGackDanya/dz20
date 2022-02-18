
#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char e[10];
    cout << "Введите число: ";
    cin >> e;
    cout << "Ваше число " << e << endl;
   
    int a = 5;
    double d = 12.6;
    float d1 = 12.6;
    char c = 'z';
    bool b = true; 

    cout << a << endl;
    cout << d << endl;
    cout << d1 << endl;
    cout << c << endl;
    cout << b << endl;
}

