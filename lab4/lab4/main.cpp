//#include "Weapon.h"
//using namespace std;
//int main() {
//    // Создаем объект класса Weapon
//    Weapon sword("Sword", 15, 1.5);
//
//    // Выводим информацию об оружии
//    sword.display();
//
//    // Проверяем GET-методы
//    cout << "Name: " << sword.getName() << endl;
//    cout << "Damage: " << sword.getDamage() << endl;
//    cout << "Weight: " << sword.getWeight() << endl;
//
//    // Изменяем значение урона
//    sword.setDamage(20);
//    cout << "Updated Damage: " << sword.getDamage() << endl;
//
//    // Проверяем возможность поднятия
//    cout << "Can lift (max weight 2.0): " << (sword.canLift(2.0) ? "Yes" : "No") << endl;
//
//
//}

// -------------------для файла c уроном-------------------
// 
//#include <iostream>
//#include "Weapon.h"
//#include "Characteristic.h"
//using namespace std;
//int main() {
//    // Создаем оружие
//    Weapon sword("Sword", 10, 3.5);
//
//    // Создаем характеристику с силой 5
//    Characteristic warrior(5);
//
//    // Получаем общую сумму силы и урона
//    int totalDamage = warrior.GetDamage(sword);
//
//    cout << "Total Damage: " << totalDamage << endl; // Ожидается 15 (10 урона от меча + 5 силы)
//
//}
// main.cpp


// --------------------для файла Mymath--------------------
#include <iostream>
#include "MyMath.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Проверка методов сложения, вычитания, умножения и деления
    int sum = MyMath::Add(5, 10);
    int difference = MyMath::Sub(10, 5);
    int product = MyMath::Mult(5, 10);
    double quotient = MyMath::Div(10, 2);

    // Вывод результатов
    cout << "Сумма: " << sum << endl;
    cout << "Разность: " << difference << endl;
    cout << "Произведение: " << product << endl;
    cout << "Частное: " << quotient << endl;

    // Вывод количества вызовов методов
    cout << "Количество вызовов методов: " << MyMath::GetCallCount() << endl;

}