#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
    std::string name;   // �������� ������
    int damage;         // ��������� ����
    float weight;       // ��� ������

public:
    // ����������� � �����������
    Weapon(std::string g_name, int g_damage, float g_weigh);

    // ����������� ��� ����������
    Weapon(); // ������������� ���������� �� ���������

    // ����������
    ~Weapon();

    // ����� ��� ������ ���������� �� ������
    void display() const;

    // ����� ��� ��������, ����� �� ������� ������
    bool canLift(float maxWeight) const;

    // GET-������
    std::string getName() const;
    int getDamage() const;
    float getWeight() const;

    // SET-����� ��� �����
    void setDamage(int new_damage);
};
