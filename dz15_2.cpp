#include <iostream>
#include<Windows.h>
#include<cctype>
#include<ctime>
#include<cstring>
#include<stdio.h>
#include<cstdlib>
using namespace std;

void f1() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[100];
    cout << "Stroka: ";
    gets_s(str);

    cout << endl << strlen(str);
}

void f2() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s1[40];
    char s2[30];
    cout << "Введите строку 1: ";
    cin >> s1;
    cout << "Введите строку 2: ";
    cout << endl << strcpy_s(s1, s2);
}

void f4() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s1[30];
    char s2[30];
    cout << "Введите строку 1: ";
    cin >> s1;
    cout << "Введите строку 2: ";
    cin >> s2;
    cout << endl << strcmp(s1, s2);
}

void f3() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s1[30];
    char s2[30];
    cout << "Введите строку 1: ";
    cin >> s1;
    cout << "Введите строку 2: ";
    cin >> s2;
    cout << endl << strcat_s(s1, s2);
}

void f5() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int s1;
    cout << "Введите строку 1: ";
    cin >> s1;    
    cout << endl << isalnum(s1);
}

void f6() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[] = "This is bad string";
    char* pch;
    printf("Ищем 's' в строке \"%s\"...\n", str);
    pch = strchr(str, 's');
    while (pch != NULL)
    {
        printf("Найдено на %d\n", pch - str + 1);
        pch = strchr(pch + 1, 's');
    }
}

void f7() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char s1[150];
    cout << "Введите строку: ";
    cin >> s1;
    int peremenaya = atoi(s1);
    cout << "Вы ввели число - " << peremenaya << endl << "Поделим его на два = " << (peremenaya / 2);
}

int main()
{
    //f1();
     //f2();
    //f3();
    // f4();
    //f5();
    //f6();
    //f7();
}