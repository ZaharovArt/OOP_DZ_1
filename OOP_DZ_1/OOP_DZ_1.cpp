// OOP_DZ_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Decimal.h"
using namespace std;

void showMenu();

int main()
{
    setlocale(LC_ALL, "ru");
    using namespace std;
    int a, b, c, d;

    cout << "Введите числитель: ";
    cin >> a;
    cout << "Введие знаменатель: ";
    cin >> b;

    Decimal drob;
    drob.setNum(a);
    drob.setDeNum(b);

    system("cls");

    drob.show();

    c = 0;

    while (c != 5) {
        system("cls");
        showMenu();
        drob.show();
        cout << "Выберите действие: ";
        cin >> c;

        switch (c)
        {
        case 1:
            cout << "Введите слогаемое: ";
            cin >> d;
            drob.add(d);
            drob.show();
            break;
        case 2:
            cout << "Введите вычитаемое: ";
            cin >> d;
            drob.sub(d);
            drob.show();
            break;
        case 3:
            cout << "Введите множитель: ";
            cin >> d;
            drob.mult(d);
            drob.show();
            break;
        case 4:
            cout << "Введите делитель: ";
            cin >> d;
            drob.div(d);
            drob.show();
            break;
        default:
            break;
        }

    }
  
    cout << "Досвидания!\n";
}

void showMenu() {
    cout << " [1] Прибавить к дроби"<< endl;
    cout << " [2] Отнять от дроби" << endl;
    cout << " [3] Умножить на дробь" << endl;
    cout << " [4] Поделить на дробь" << endl;
    cout << " [5] Выход" << endl;
}