// yrok3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;
    char c;
    cout << "Введите число А: \n";
    cin >> a;   
    cout << "Введите число Б: \n";   
    cin >> b;
    cout << "Введите символ действия (*,/,+,-,^)\n";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << a+b;
        break; // прерывание 
    case '-':
        cout << a-b;
        break;
    case '/':
        cout << a/b;
        break;
    case '*':
        cout << a*b;
        break;
    case '^':
        cout << pow(a, b);
   
    default:
        cout << "Операция небыла найдена ";
    }


    /*
    
    int a , b;

    cout << "Введите число А: ";
    cin >> a;

    cout << "Введите число Б: ";
    cin >> b;
    if (a > b) {
        cout << "А больше Б";
    }
    else {
        if(a<b){
        cout << "А меньше чем Б";
        }
        else {
            cout << "А равно Б";
        }
    }
    /*
    = (присвоение а=8;)
    Условия
    ==(условие if (a==8){...})
    <
    >
    <=
    >=
    != не равно
    */
    system("pause");
    return 0;
}