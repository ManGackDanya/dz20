#include <iostream>
#include<windows.h>
#include "classs.h"
using namespace std;

template <typename T1, typename T2>

T1& max1(T1& a, T2& b) {
    return (a > b) ? a : b;
}
   

int main()
{
    
        classs<int> intArray(10);
        classs<double> doubleArray(10);
        classs<char> charArray(10);

        for (int i = 0; i < intArray.getLength(); ++i)
        {
            intArray.putNamber(i * 2, i);
            doubleArray.putNamber ( i * 2.1, i );
            charArray.putNamber(_getch(), i);
        }

        intArray.getArray();
        cout << endl;
        doubleArray.getArray();

     /*   for (int count = intArray.getLength() - 1; count >= 0; --count)
            std::cout << intArray[count] << "\t" << doubleArray[count] << '\n';*/

    
/*
    int a1, a2;

    float f1, f2;

    cout << "Vvedite a1\n";
    cin >> a1;
    cout << "Vvedite a2\n";
    cin >> a2;

    cout << "Max = " << max1(a1, 'g') << endl;

    cout << "Vvedite f1:\n";
    cin >> f1;
    cout << "Vvedite f2:\n";
    cin >> f2;

    cout << "Max = " << max1(f1, 'h') << endl;

    cout << "Max = " << max1('a', 'h') << endl;
    */
    return 0;
}

