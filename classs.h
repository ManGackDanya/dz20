#pragma once
#include<iostream>
using namespace std;

template <class T>
class classs
{
private:
    int m_length;
    T* m_data;

public:
    classs() {
        m_length = 0;
        m_data = nullptr;
    }
    classs(int length) {
        m_length = length;
        m_data = new T[length];
    }
    int getLength() {
        return m_length;
    }
    void putNamber(T a,int i) {
        m_data[i] = a;
    }
    void getArray() {
        for (int i = 0; i < m_length; i++) {
            cout << m_data[i] << " | ";
        }
    }
};

