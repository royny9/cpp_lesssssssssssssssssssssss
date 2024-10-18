#include "Weapon.h"
using namespace std;

// Конструктор с параметрами
Weapon::Weapon(string g_name, int g_damage, float g_weigh)
    : name(g_name), damage(g_damage), weight(g_weigh) {
    cout << "Weapon has been created: " << name << endl;
}

// Конструктор без параметров
Weapon::Weapon() : Weapon("Default Weapon", 10, 1.0) {}

// Деструктор
Weapon::~Weapon() {
    cout << "Deleting Weapon: " << name << std::endl
        << "Damage: " << damage << endl;
}

// Метод для вывода информации об оружии
void Weapon::display() const {
    cout << "Weapon Name: " << name
        << ", Damage: " << damage
        << ", Weight: " << weight
        << endl;
}

// Метод для проверки, можно ли поднять оружие
bool Weapon::canLift(float maxWeight) const {
    return weight <= maxWeight;
}

// GET-методы
string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

float Weapon::getWeight() const {
    return weight;
}

// SET-метод для урона
void Weapon::setDamage(int new_damage) {
    damage = new_damage;
}