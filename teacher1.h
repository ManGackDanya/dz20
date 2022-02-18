#pragma once
#include<iostream>
#include<windows.h>
#include<string>

class teacher1 :
    public student
{
private:
    string doljnost = "Doljnost";
    int age = 34;
    string name = "Name";
    string surname = "Surname";
    string message = "Message";

public:
    // Возварщение данных
    string getDoljnost() {
        return doljnost;
    }

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }

    string getSurname() {
        return surname;
    }

    string getMessage() {
        return message;
    }
    // Занесения данных
    void putDoljnost(string a) {
        doljnost = a;
    }

    void putAge(int b) {
        age = b;
    }

    void putName(string c) {
        name = c;
    }

    void putSurname(string d) {
        surname = d;
    }

    void putMessage(string e) {
        message = e;
    }
    //конструктор
    teacher(string a, int b, string c, string d, string e) {
        putDoljnost(a);
        putAge(b);
        putName(c);
        putSurname(d);
        putMessage(e);
    }

    teacher() {
    };
};

