#include <windows.h>
#include <iostream>
using namespace std;







int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n = 10;

    int a [10];

    int x ,v;
    int summNegativeNumber;
    
    cout << "Введите 1 если хотите чтоб вы загадали число: ";
    cin >> v;


    if (v == 1) {
        for (x = 0; x < n; x++) {
            cout << "\nВведите " << x << " -ое число: ";
            cin >> a[x];

        }



        for (x = 0; x < n; x++) {

            cout << "\n -a[" << x << "] = " << a[x];
        }
    }
    else {
        srand(time(NULL));
        for (x = 0; x < n; x++) {   //случайные числа от компьютера
           
           a[x] = (1+rand() % 100) - 50;
           

            cout << "\n a[" << x << "] = " << a[x];

    
        }

    }
    summNegativeNumber = 0;
    for (x = 0; x < n; x++) {

        if (a[x] < 0)
        {
    
            summNegativeNumber += a[x];
        }

    }

    if (summNegativeNumber == 0) {
        cout << "\nНет отрицательных числел";
    }
    else
    {
        cout << "\nСумма = " << summNegativeNumber;
    }


        
    
   
    
 
    
    

    
   






    return 0;

}

