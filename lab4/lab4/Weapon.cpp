#include "Weapon.h"
using namespace std;

// ����������� � �����������
Weapon::Weapon(string g_name, int g_damage, float g_weigh)
    : name(g_name), damage(g_damage), weight(g_weigh) {
    cout << "Weapon has been created: " << name << endl;
}

// ����������� ��� ����������
Weapon::Weapon() : Weapon("Default Weapon", 10, 1.0) {}

// ����������
Weapon::~Weapon() {
    cout << "Deleting Weapon: " << name << std::endl
        << "Damage: " << damage << endl;
}

// ����� ��� ������ ���������� �� ������
void Weapon::display() const {
    cout << "Weapon Name: " << name
        << ", Damage: " << damage
        << ", Weight: " << weight
        << endl;
}

// ����� ��� ��������, ����� �� ������� ������
bool Weapon::canLift(float maxWeight) const {
    return weight <= maxWeight;
}

// GET-������
string Weapon::getName() const {
    return name;
}

int Weapon::getDamage() const {
    return damage;
}

float Weapon::getWeight() const {
    return weight;
}

// SET-����� ��� �����
void Weapon::setDamage(int new_damage) {
    damage = new_damage;
}