// Characteristic.h
#ifndef CHARACTERISTIC_H
#define CHARACTERISTIC_H

#include "Weapon.h"

class Characteristic {
private:
    int strength;  // ����

public:
    // ����������� ��� ������������� ����
    Characteristic(int g_strength);

    // ������������� ����� Weapon ��� ������� � ��� ��������� �����
    friend class Weapon;

    // ����� ��� ��������� ����� ����� ���� � ����� �� ������
    int GetDamage(const Weapon& weapon) const;
};

#endif // CHARACTERISTIC_H