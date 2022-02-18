#include <iostream>
#include <ctime>
#include "windows.h"
using namespace std;

int DropTheCube();
void printingCubes(int a);

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
        srand(time(NULL));
        bool playerGoesFirst{ false };
        int moveNumber{ 1 },
            playerScore{},
            compScore{};

        playerScore =1+ rand() % 100;

        while (moveNumber <= 12) {
            cout << "\nОчередь компьютера" << '\n';
            compScore += DropTheCube();

            cout << "\nТвоя очередь!" << '\n';
            system("pause");
            playerScore += DropTheCube();

            moveNumber++;
        }

        if (playerScore > compScore)
        {
            cout << playerScore << ">" << compScore;
            cout << "\nТы победил!";
        }
        else
        {
            cout << "\n" << playerScore << "<" << compScore;
            cout << "\nТы проиграл!";
        }                    
        
    return 0;
}

int DropTheCube() {                                  
    int score{};
    int k{};    

    k = 1+ rand() % 6;   

    score = k;
  
    cout << "\nСчет сейчас : " << score << '\n';

    printingCubes(k);

    return score;
}

void printingCubes(int a) {
   
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
