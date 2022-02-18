#include <iostream>
#include <math.h>

using namespace std;


int main()
{
   
    int a , x = 0;
      
    do{
    cout << "Попробуйте угадать случайное число от 1 - 15:";
    cin >> a;

    srand(time(NULL));
    cout <<rand() % 15 << endl;

    if (a == rand() % 15) {
        cout << "Вы победили, поздравляю";
    }
    else {
        cout << "Вы проиграли, хотите начать заново введите 1:";
        cin >> x;
    }

    } while (x == 1);
}

