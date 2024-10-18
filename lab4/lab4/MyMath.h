#define MYMATH_H

class MyMath {
private:
    static int callCount; // Статическая переменная для хранения количества вызовов методов

public:
    // Статический метод сложения
    static int Add(int a, int b);

    // Статический метод вычитания
    static int Sub(int a, int b);

    // Статический метод умножения
    static int Mult(int a, int b);

    // Статический метод деления
    static double Div(int a, int b);

    // Статический метод для получения количества вызовов
    static int GetCallCount() { return callCount; }
};
