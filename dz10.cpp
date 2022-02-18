#include <iostream>
#include <windows.h>

using namespace std;

struct Person {
    char Name[10];
    char Surname[20];
    int  Age = 1;
    char school[15];
};

void olimpiada(Person person, int number) {
    SetConsoleCP(866);
    SetConsoleOutputCP(866);

    cout << "\nі";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %1i ", number);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %10s ", person.Name);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %12s ", person.Surname);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %10i ", person.Age);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf(" %9s ", person.school);

    SetConsoleCP(866);
    SetConsoleOutputCP(866);
    cout << "і";
}

void tablica() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Person str[5];

    for (int i = 0; i < 5; i++) {
        cout << "Ученик " << i << ":\n";
        cout << "Введите имя: ";
        cin >> str[i].Name;
        cout << "Введите фамилию: ";
        cin >> str[i].Surname;
        cout << "Введите возвраст: ";
        cin >> str[i].Age;
        cout << "Введите школу: ";
        cin >> str[i].school;
    }
    SetConsoleCP(866);
    SetConsoleOutputCP(866);

    cout << "\nЪДДД" << (char)194 << "ДДДДДДДДДДДД" << (char)194 << "ДДДДДДДДДДДДДД" << (char)194 << "ДДДДДДДДДДДД" << (char)194 << "ДДДДДДДДДДДї";

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    for (int i = 0; i < 5; i++) {
        olimpiada(str[i], i);
    }
    SetConsoleCP(866);
    SetConsoleOutputCP(866);

    cout << "\n";

    cout << (char)192 << "ДДД" << (char)193 << "ДДДДДДДДДДДД" << (char)193 << "ДДДДДДДДДДДДДД" << (char)193 << "ДДДДДДДДДДДД" << (char)193 << "ДДДДДДДДДДД" << (char)217;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    tablica();
}
