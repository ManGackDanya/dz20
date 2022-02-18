#pragma once
#include "Engine.h"
#include<iostream>
#include<Windows.h>
#include<string.h>

class student {
private:
    int klass = 8;
    int age = 15;
    string name = "Name";
    string surname = "Surname";
    string message = "Message";

public:
    // Возварщение данных
    int getKlass() {
        return klass;
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
    void putKlass(int a) {
        klass = a;
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
    student(int a, int b, string c, string d, string e) {
        putKlass(a);
        putAge(b);
        putName(c);
        putSurname(d);
        putMessage(e);
    }

    student() {
    };
};