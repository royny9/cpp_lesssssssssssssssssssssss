// Characteristic.h
#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

#include "Weapon.h"

class Characteristic {
private:
    int strength;  // Сила

public:
    // Конструктор для инициализации силы
    Characteristic(int g_strength);

    // Дружественный класс Weapon для доступа к его приватным полям
    friend class Weapon;

    // Метод для получения общей суммы силы и урона от оружия
    int GetDamage(const Weapon& weapon) const;
};

#endif // CHARACTERISTIC_H