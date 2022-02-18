#include<iostream>
#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int** mat;
int str, stb;
int tuman = 1;
int poz_x = 1, poz_y = 1;
int poz_x_end, poz_y_end;



void matvivod() {

    system("cls");

    int kvotuman = 2;

    for (int i = 0; i < stb; i++)
    {
        for (int j = 0; j < str; j++)
        {

            if (((i >= poz_x + kvotuman) or i <= poz_x - kvotuman) or (j >= poz_y + kvotuman or j <= poz_y - kvotuman)) {
                if (tuman == 1) {
                    cout << char(176);
                }
                else {
                    cout << char(mat[i][j]);
                }
            }
            else {
                cout << char(mat[i][j]);
            }
        }
        cout << '\n';
    }
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

                if (rand() % 100 > 20) {
                    mat[i][j] = ' ';
                }
                else {
                    mat[i][j] = 219;
                }
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

        matvivod();

        if (poz_x_end == poz_x and poz_y_end == poz_y) {
            break;
        }

        hod = _getch();
        mat[poz_x][poz_y] = ' ';
        switch (hod) {
        case 80:
            if (mat[poz_x + 1][poz_y] != 219)
                poz_x++;
            break;
        case 77:
            if (mat[poz_x][poz_y + 1] != 219)
                poz_y++;
            break;
        case 75:
            if (mat[poz_x][poz_y - 1] != 219)
                poz_y--;
            break;
        case 72:
            if (mat[poz_x - 1][poz_y] != 219)
                poz_x--;
            break;
        case 122:
            if (tuman == 1) {
                tuman = 0;
            }
            else {
                tuman = 1;
            }


            ;
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