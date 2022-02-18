#include<windows.h>
#include <iostream>
using namespace std;
void random();
void viktorina();
void kosti();
int lobbi;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int igra;
    do{
        system("cls");
    cout << "--------------------------МЕНЮ ИГРЫ--------------------------\n";
    cout << endl;
   
     cout << "+---------------------+-------------+-------------------+\n";
     cout << "|         Угадай число        |    Викторина    | Кости |\n";
     cout << "+---------------------+-------------+-------------------+\n";
     cout << "\nЕсли хотите ссыграть в |Угадай число| введите 1";
     cout << "\nЕсли хотите ссыграть в |Викторину| введите 2";
     cout << "\nЕсли хотите ссыграть в |Кости| введите 3";

     cout << endl;

     cin >> igra;
     system("cls");
     if(igra==1) {
         random();
     }
     else {
         if(igra==2){
             viktorina();
         }
         else {
             if (igra==3) {
                 kosti();
             }
         }
     }
    } while (lobbi==1);
     system("cls");
     system("pause");
    
    return 0;
}

void random(){
    int a, x = 0;
    int r = rand() % 15;
    do {
        cout << "Попробуйте угадать случайное число от 1 - 15:";
        cin >> a;

        srand(time(NULL));
        cout << rand() % 15 << endl;

        if (a == r) {
            cout << "Вы победили, поздравляю";
            cout << "Хотите вернуться в меню введите 1:";
            cin >> lobbi;
            if (lobbi == 1) {
                main();

            }
            else {
                system("pause");
            }
        }
        else {
            cout << "Вы проиграли, хотите начать заново введите 1:";
            cin >> x;
            cout << "Хотите вернуться в меню введите 1:";
            cin >> lobbi;
            if (lobbi == 1) {
                main();
                
            }           
            else {
                system("pause");
            }
            system("cls");
        }
        

    } while (x == 1);

}

void viktorina() {

    int a = 0;
    int c = 5;
    do {
        cout << "1.Кто первый полетел в космос?\n";
        cout << "1 вариант-Юрий Гагарин\n";
        cout << "2 вариант-Алексей Леонов\n";
        cout << "3 вариант-Нил Армстронг\n";
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
            cout << "Хотите вернуться в меню введите 1:";
            cin >> lobbi;
            if (lobbi == 1) {
                main();

            }
            else {
                system("pause");
            }
        }
    } while (a == 1);
}

int kosti() {

    srand(time(NULL));
    bool playerGoesFirst{ false };          //переменные
    int moveNumber{ 1 },
        playerScore{},
        compScore{};
    do {
        playerGoesFirst = rand() % 2;

        while (moveNumber <= 5) {
            cout << "\nОчередь компьютера" << '\n';     //основная штука//очень полезная
            compScore += DropTheCube();

            cout << "\nТвоя очередь!" << '\n';            
            playerScore += DropTheCube();

            moveNumber++;
            if (playerScore >= 45) {
                cout << "\nТвой счет: " << playerScore;
                cout << "\nТы победил!";
                break;
            }
            else {
                if (compScore >= 45) {
                    cout << "\nСчет компьютера: " << compScore;
                    cout << "\nТы проиграл!";
                }
                else {
                    cout << "\n" << playerScore << "|" << compScore;
                    cout << "\nОба проиграли";
                }
            }

        }

        cout << "Хотите вернуться в меню введите 1:";
        cin >> lobbi;
        if (lobbi == 1) {
            main();

        }
        else {
            system("pause");
        }

    } while (playerScore < 45 or compScore < 45);

    

    return 0;             //почему не один? просто так


}
int DropTheCube() {          //кубико бросание
    int score{};
    int k{};       //кубик 1
    int l{};      //кубик 2

    k = 1 + rand() % 6;
    l = 1 + rand() % 6;
    score = k + l;

    cout << "\nСчет сейчас : " << score << '\n';

    printingCubes(k);
    cout << endl;
    printingCubes(l);

    return score;
}

void printingCubes(int a) {            //ввывод символа кубика

    switch (a) {
    case 1:
        cout << "\n       ";
        cout << "\n   *   ";
        cout << "\n       ";
        break;
    case 2:
        cout << "\n      *";
        cout << "\n       ";
        cout << "\n*      ";
        break;
    case 3:
        cout << "\n      *";
        cout << "\n   *   ";
        cout << "\n*      ";
        break;
    case 4:
        cout << "\n*     *";
        cout << "\n       ";
        cout << "\n*     *";
        break;
    case 5:
        cout << "\n*      *";
        cout << "\n    *   ";
        cout << "\n*      *";
        break;
    case 6:
        cout << "\n*      *";
        cout << "\n*      *";
        cout << "\n*      *";
        break;
    }

}
