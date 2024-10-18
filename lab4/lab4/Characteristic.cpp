// Characteristic.cpp
#include "Characteristic.h"

// Конструктор для инициализации силы
Characteristic::Characteristic(int g_strength) : strength(g_strength) {}

// Метод для получения общей суммы силы и урона от оружия
int Characteristic::GetDamage(const Weapon& weapon) const {
    return strength + weapon.getDamage(); // Доступ к приватному полю урона
}