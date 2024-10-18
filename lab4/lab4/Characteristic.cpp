// Characteristic.cpp
#include "Characteristic.h"

// ����������� ��� ������������� ����
Characteristic::Characteristic(int g_strength) : strength(g_strength) {}

// ����� ��� ��������� ����� ����� ���� � ����� �� ������
int Characteristic::GetDamage(const Weapon& weapon) const {
    return strength + weapon.getDamage(); // ������ � ���������� ���� �����
}