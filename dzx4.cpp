#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    
    int a = 0;
    int c = 5;
    do{
    cout << "1.Кто первый полетел в космос?\n";
    cout << "1 вариант-Юрий Гагарин\n";
    cout << "2 вариант-Алексей Леонов\n";
    cout << "3 вариант-Нил Армстронг\n";
    cin >> a;



    switch (a) {
    case 1:
        cout << "Правильный ответ\n";
        while (a==1) { 
            a++;
            c++; c++; c++; c++; c++;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
    case 2:
        cout << "Не правильный ответ\n";
        while (a == 2) {
            a++;
            c--; c--; c--; c--; c--;
           
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
    case 3:
        cout << "Не правильный ответ\n";
        while (a == 3) {
            a++;
            c--; c--; c--; c--; c--;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
        cout << c;
    default:
        cout << "\n Нету такого варианта ответа";
        break;
       
    }

  
    a = 0;
   
    cout << "2.Кто создал первый компьютер?\n";
    cout << "1 вариант-Лавлейс Августа Ада\n";
    cout << "2 вариант-Чарльз Бэббидж\n";
    cout << "3 вариант-Билл Гейтс\n";
    cin >> a;


    switch (a) {
    case 1:
        cout << "Не правильный ответ\n";
        while (a == 1) {
            a++;
            c--; c--; c--; c--; c--;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
    case 2:
        cout << "Правильный ответ\n";
        while (a == 2) {
            a++;
            c++; c++; c++; c++; c++;
            
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
    case 3:
        cout << "Не правильный ответ\n";
        while (a == 3) {
            a++;
            c--; c--; c--; c--; c--;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;

    default:
        cout << "\n Нету такого варианта ответа";
        break;
    }
    a = 0;

    cout << "2.Кто создал первую видео игру?\n";
    cout << "1 вариант-Нолан Бушнелл\n";
    cout << "2 вариант-Баер Ральф\n";
    cout << "3 вариант-Билл Хариссон\n";
    cin >> a;


    switch (a) {
    case 1:
        cout << "Правильный ответ\n";
        while (a == 1) {
            a++;
            c++; c++; c++; c++; c++;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
    case 2:
        cout << "Не правильный ответ\n";
        while (a == 2) {
            a++;
            c--; c--; c--; c--; c--;
            cout << c;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;
    case 3:
        cout << "Не правильный ответ\n";
        while (a == 3) {
            a++;
            c--; c--; c--; c--; c--;
            cout << "Ваш счет:";
            cout << c << endl;
        }
        break;

    default:
        cout << "\n Нету такого варианта ответа";
        break;
        
    }
   
    while (c == 20) {  
        cout << "Поздравляю вы победили";
        c++;
        cout << "\nЕсли вы хотите повторить введите 1:";
        cin >> a;
    }
    }while (a==1)
    return 0;
}

