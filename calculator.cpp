// calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер операции: \n";
    cout << "1. Сложение \n";
    cout << "2. Вычитание \n";
    cout << "3. Частное \n";
    cout << "4. Произведение \n";
    cout << "5. Возведение в степень \n";
    cout << "6. Нахождение квадратного корня \n";
    cout << "7. Нахождение 1% от числа \n";
    cout << "8. Найти факториал числа \n";
    cout << "9. Выйти из программы \n";
    int c;
    float a, b, res;
    cin >> c;
    switch (c) {
        case 1:
            cout << "Введите первое число: \n";
            cin >> a;
            cout << "Введите второе число: \n";
            cin >> b;
            res = a + b;
            cout << "Результат: " << res << "\n";
            break;
        case 2:
            cout << "Введите первое число: \n";
            cin >> a;
            cout << "Введите второе число: \n";
            cin >> b;
            res = a - b;
            cout << "Результат: " << res << "\n";
            break;
        case 3:
            cout << "Введите первое число: \n";
            cin >> a;
            cout << "Введите второе число: \n";
            cin >> b;
            res = a / b;
            cout << "Результат: " << res << "\n";
            break;
        case 4:
            cout << "Введите первое число: \n";
            cin >> a;
            cout << "Введите второе число: \n";
            cin >> b;
            res = a * b;
            cout << "Результат: " << res << "\n";
            break;
        case 5:
            cout << "Введите первое число: \n";
            cin >> a;
            cout << "Введите второе число: \n";
            cin >> b;
            res = pow(a, b);
            cout << "Результат: " << res << "\n";
            break;
        case 6:
            cout << "Введите число: \n";
            cin >> a;
            res = sqrt(a);
            cout << "Результат: " << res << "\n";
            break;
        case 7:
            cout << "Введите число: \n";
            cin >> a;
            res = a / 100;
            cout << "Результат: " << res << "\n";
            break;
        case 8:
            cout << "Введите число: \n";
            cin >> a;
            res = 1;
            for (b = 1; b <= a; b++) {
                res = res * b;
            }
            cout << "Результат: " << res << "\n";
            break;
        case 9:
            break;
        default:
            break;
    }
}

