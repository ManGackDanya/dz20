#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char e [10];
    cout << "Введите ваше имя: ";
    cin >> e;
    cout <<"Привет "<< e;
    /*
    int i = 9;

    cout << i << endl;
    cout << pow(i,2) << endl;
    cout << pow(i, 3) << endl;
    cout << pow(i, 1/2.) << endl;

    
    setlocale(0, "");
    cout << "Hello World!\n";
    cout << "Привееет мір!\n";
    int a = 5;
    double d = 12.6;
    float d1 = 12.6;
    char c = 'z';//1 символ
    bool b = true; //false,1,0


    cout << a << endl;
    cout << d << endl;
    cout << d1 << endl;
    cout << c << endl;
    cout << b << endl;


    cout << "Введите число: ";
    cin >> d; 
    cout << d+a+d1;
 

    /*
    int x = 9;
    cout << x << "\n";
    x = 7;
    cout << x << "\n";
    cin >> x;
    */
}
