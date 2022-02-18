#include <iostream>
#include <ctime>                          //библиотеки
#include <windows.h>
using namespace std;                      // БОГ// макаронный

int DropTheCube();
void printingCubes(int a);
void printingCubes(int c);

int main() {

    SetConsoleCP(1251);                           // русификаторы
    SetConsoleOutputCP(1251);

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
            system("pause");
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

