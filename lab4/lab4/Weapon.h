#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
    std::string name;   // Название оружия
    int damage;         // Наносимый урон
    float weight;       // Вес оружия

public:
    // Конструктор с параметрами
    Weapon(std::string g_name, int g_damage, float g_weigh);

    // Конструктор без параметров
    Weapon(); // Инициализация значениями по умолчанию

    // Деструктор
    ~Weapon();

    // Метод для вывода информации об оружии
    void display() const;

    // Метод для проверки, можно ли поднять оружие
    bool canLift(float maxWeight) const;

    // GET-методы
    std::string getName() const;
    int getDamage() const;
    float getWeight() const;

    // SET-метод для урона
    void setDamage(int new_damage);
};
