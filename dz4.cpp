#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c;
    
    cout << "Введите число А: \n";
    cin >> a;
    cout << "Введите число Б: \n";
    cin >> b;
    cout << "Введите число С: \n";
    cin >> c;

    if (a > b) {
        if (b >= c) {
            cout << (((c - b) * 5 * a) / b) + pow(c, a) << endl;
        }
        
    }
    else {
        cout << a + b + c << endl;
    }
    /*
        if (a < b) {
            if (b = c) {
                cout << (((c - b * 2) * a - 1) / b) + pow(c, 2) << endl;
            }
            else {
                cout << a + b + c << endl;
            }
  //  if (a < b) {
   //     if (b = c) {
   //         cout << (((c - b * 2) * a - 1) / b) + pow(c,2) << endl;
   //     }
       
  //  }
    




   
    */
    system("pause");
    return 0;
   
}