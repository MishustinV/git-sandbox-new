// Лабораторная работа № 1. Вариант 20.


#include <iostream>
#include <cmath>

using namespace std;

// ===== Расчётные функции варианта =====

// Объём пирамиды: V = a^2 * h / 3
double pyramidVolume(double a, double h) {
    return a * a * h / 3.0;
}

// Апофема: m = sqrt(h^2 + (a/2)^2)
double pyramidApothem(double a, double h) {
    return sqrt(h * h + (a / 2.0) * (a / 2.0));
}

// ===== Главная функция: меню =====
int main() {
    int choice;
    double a, h;

    do {
        cout << "\n== Вариант 20: расчёты для пирамиды ==\n";
        cout << "1. Объём пирамиды\n";
	cout << "2. Апофема пирамиды\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ошибка: введите число.\n";
            continue;
        }

        switch (choice) {
        case 1:
            cout << "Введите сторону основания a и высоту h: ";
            cin >> a >> h;
            if (a <= 0 || h <= 0) {
                cout << "Ошибка: a и h должны быть положительными.\n";
                break;
            }
            cout << "Объём = " << pyramidVolume(a, h) << "куб. ед.\n";
            break;
	case 2:
    	    cout << "Введите сторону основания a и высоту h: ";
            cin >> a >> h;
            if (a <= 0 || h <= 0) {
        	cout << "Ошибка: a и h должны быть положительными.\n";
        	break;
    	    }
    	    cout << "Апофема = " << pyramidApothem(a, h) << " ед.\n";
            break;
        case 0:
            cout << "Работа завершена.\n";
            break;

        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}