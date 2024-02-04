#include <iostream>
#include "sunsettime.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

    int h, m, s;
    cout << "Пожалуйста, введите часы: ";
    cin >> h;
    cout << "Пожалуйста, введите минуты: ";
    cin >> m;
    cout << "Пожалуйста, введите секунды: ";
    cin >> s;

    cout << getTimeUntilSunset(h, m, s) << " минут." << endl;
    cout << getTimeUntilSunset(h, m) << " минут." << endl;
	return 0;
}