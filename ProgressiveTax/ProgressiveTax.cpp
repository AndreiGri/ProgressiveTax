#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки терминала:
    system("chcp 1251 > nul");

    int const limit1 = 10000;
    int const limit2 = 50000;
    int salary = 0;
    int const tax1 = 13;
    int const tax2 = 20;
    int const tax3 = 30;
    int tax;

    cout << endl;
    cout << " Введите вашу зароботную плату: ";
    cin >> salary;
    cout << " ------------Вычисляем налог-----------" << endl;

    if (salary == 0) {
        cout << " А если проверим?!" << endl;
    }
    else {
        if (salary < 0) {
            cout << "Зарплата не может быть отрицательной!!!" << endl;
        }
        else {
            if (salary > limit2) {
                tax = limit1 / 100 * tax1 + limit2 / 100 * tax2 + (salary - limit2) / 100 * tax3;
            }
            else {
                if (salary > limit1) {
                    tax = limit1 / 100 * tax1 + (salary - limit1) / 100 * tax2;
                }
                else {
                    tax = salary / 100 * tax1;
                }
            }
            cout << " После вычета налога в сумме " << tax << " рублей," << endl;
            cout << " Ваша зарплата составляет " << salary - tax << " рублей." << endl;
        }
    }

    // Задержка окна консоли:
    system("pause > nul");

    return 0;
}