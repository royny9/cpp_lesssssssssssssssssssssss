#include "MyMath.h"
#include <iostream> // Подключаем для вывода в консоль
using namespace std;

// Инициализация статической переменной
int MyMath::callCount = 0;

// Реализация метода сложения
int MyMath::Add(int a, int b) {
    callCount++; // Увеличиваем счетчик вызовов
    cout << "Add(" << a << ", " << b << ") = " << (a + b) << endl; // Вывод результата
    return a + b;
}

// Реализация метода вычитания
int MyMath::Sub(int a, int b) {
    callCount++; // Увеличиваем счетчик вызовов
    cout << "Sub(" << a << ", " << b << ") = " << (a - b) << endl; // Вывод результата
    return a - b;
}

// Реализация метода умножения
int MyMath::Mult(int a, int b) {
    callCount++; // Увеличиваем счетчик вызовов
    cout << "Mult(" << a << ", " << b << ") = " << (a * b) << endl; // Вывод результата
    return a * b;
}

// Реализация метода деления
double MyMath::Div(int a, int b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl; // Вывод сообщения об ошибке
        return 0; // Возвращаем 0 или можно выбросить исключение
    }
    callCount++; // Увеличиваем счетчик вызовов
    double result = static_cast<double>(a) / b;
    cout << "Div(" << a << ", " << b << ") = " << result << endl; // Вывод результата
    return result;
}