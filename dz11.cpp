#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int** mat;
int str, stb;
int poz_x = 1, poz_y = 1;
int poz_x_end, poz_y_end;
int i , j , poz_x_stenka , poz_y_stenka;




void matvivod() {

    system("cls");

    for (int i = 0; i < stb; i++)
    {
        for (int j = 0; j < str; j++)
        {
            cout << char(mat[i][j]);
        }
        cout << '\n';
    }
}
char stenka;

void stenki() {
    do{
    for (int a = 0; a < stb; a++)
    {
        for (int b = 0; b < str; b ++)
        {
            srand(time(NULL));
            poz_x_stenka = rand() % (stb - 3) + 2;
            poz_y_stenka = rand() % (str - 3) + 2;
            if (poz_x_stenka == a and poz_y_stenka == b) {
                mat[i][j] = 219;
                poz_x_stenka++;
                poz_y_stenka++;
            }
        }
    }
   

    switch (stenka) {
    case 80:
        if (poz_x == poz_x_stenka)
            poz_x --;

        break;
    case 77:
        if (poz_y == poz_y_stenka)
            poz_y --;
        break;
    case 75:
        if (poz_y == poz_y_stenka)
            poz_y--;
        break;
    case 72:
        if (poz_x == poz_x_stenka)
            poz_x --;
        break;
    }
    } while (poz_x_stenka != 10 and poz_y_stenka != 10);
}

int main()
{
    cout << "\n koll strok== ";
    cin >> stb;
    stb += 2;
    cout << " koll stolb == ";
    cin >> str;
    str += 2;

    srand(time(NULL));
    poz_x_end = rand() % (stb - 3) + 2;
    poz_y_end = rand() % (str - 3) + 2;

    mat = new int* [stb];

    for (int i = 0; i < stb; i++)
    {
        mat[i] = new int[str];
    }

    for (int i = 0; i < stb; i++)
    {
        for (int j = 0; j < str; j++)
        {
            if (j == 0 or i == 0 or j == str - 1 or i == stb - 1) {
                mat[i][j] = 219;
            }
            else {
                mat[i][j] = ' ';
            }
            if (poz_x == i and poz_y == j) {
                mat[i][j] = '*';
            }
            if (poz_x_end == i and poz_y_end == j) {
                mat[i][j] = 176;
            }
        }
    }

    char hod;
    
    do {
        stenki();
        
        matvivod();
        
        if (poz_x_end == poz_x and poz_y_end == poz_y) {
            break;
        }

        hod = _getch();
        mat[poz_x][poz_y] = ' ';
        switch (hod) {
        case 80:
            if (poz_x != stb - 2)
                poz_x++;
           
            break;
        case 77:
            if (poz_y != str - 2)
                poz_y++;
            break;
        case 75:
            if (poz_y != 1)
                poz_y--;
            break;
        case 72:
            if (poz_x != 1)
                poz_x--;
            break;
        }
        mat[poz_x][poz_y] = '*';



    } while (hod != 27);

    if (poz_x_end == poz_x and poz_y_end == poz_y) {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        cout << "\nПоздравляю вы победили!";
    }

    return 0;
}