#include <iostream>
#include "func.h"
using namespace std;

struct Time {
    int h; int m; int s;
};

int main()
{
    setlocale(LC_ALL, "ru");
    int h, m, s;
    cout << "Введите часы: ";
    cin >> h;
    cout << "\nВведите минуты: ";
    cin >> m;
    cout << "\nВведите секунды: ";
    cin >> s;
    
    cout << "Структура «время» (часы, минуты, секунды): " << getTimeUntilSunset(h, m, s, true) << " минут" << endl;
    cout << "Три целочисленных параметра: часы, минуты, секунды: " << getTimeUntilSunset(h, m, s) << " минут" << endl;
    cout << "Два целочисленных параметра: часы, минуты: " << getTimeUntilSunset(h, m) << " минут" << endl;
}