﻿#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int const limit1 = 10000;                                                                     //Объявляем переменные пределов прогрессивного налога
    int const limit2 = 50000;
    int salary = 0;                                                                               //Объявляем переменную для записи зарплаты
    int const tax1 = 13;                                                                          //Объявляем переменные процентов налога
    int const tax2 = 20;
    int const tax3 = 30;
    int tax;                                                                                      //Объявляем переменную для записи суммы налога

    cout << endl;
    cout << " Введите вашу зароботную плату: ";                                                   //Запрашиваем зарплату до вычета
    cin >> salary;
    cout << " ------------Вычисляем налог-----------" << endl;

    if (salary == 0) {
        cout << " А если проверим?!" << endl;                                                     //Проверка на введение нулевого дохода
    }
    else {
        if (salary < 0) {
            cout << "Зарплата не может быть отрицательной!!!" << endl;                            //Проверка на введение отрицательного числа
        }
        else {
            if (salary > limit2) {
                tax = limit1 / 100 * tax1 + limit2 / 100 * tax2 + (salary - limit2) / 100 * tax3; //Вычисляем налог с дохода свыше 50000 рублей
            }
            else {
                if (salary > limit1) {
                    tax = limit1 / 100 * tax1 + (salary - limit1) / 100 * tax2;                   //Вычисляем налог с дохода свыше 10000 рублей
                }
                else {
                    tax = salary / 100 * tax1;                                                    //Вычисляем налог с дохода до 10000 рублей
                }
            }
            cout << " После вычета налога в сумме " << tax << " рублей," << endl;                 //Выводим сообщение о сумме налога и зарплате
            cout << " Ваша зарплата составляет " << salary - tax << " рублей." << endl;           //после вычета
        }
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}