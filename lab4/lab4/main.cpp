//#include "Weapon.h"
//using namespace std;
//int main() {
//    // ������� ������ ������ Weapon
//    Weapon sword("Sword", 15, 1.5);
//
//    // ������� ���������� �� ������
//    sword.display();
//
//    // ��������� GET-������
//    cout << "Name: " << sword.getName() << endl;
//    cout << "Damage: " << sword.getDamage() << endl;
//    cout << "Weight: " << sword.getWeight() << endl;
//
//    // �������� �������� �����
//    sword.setDamage(20);
//    cout << "Updated Damage: " << sword.getDamage() << endl;
//
//    // ��������� ����������� ��������
//    cout << "Can lift (max weight 2.0): " << (sword.canLift(2.0) ? "Yes" : "No") << endl;
//
//
//}

// -------------------��� ����� c ������-------------------
// 
//#include <iostream>
//#include "Weapon.h"
//#include "Characteristic.h"
//using namespace std;
//int main() {
//    // ������� ������
//    Weapon sword("Sword", 10, 3.5);
//
//    // ������� �������������� � ����� 5
//    Characteristic warrior(5);
//
//    // �������� ����� ����� ���� � �����
//    int totalDamage = warrior.GetDamage(sword);
//
//    cout << "Total Damage: " << totalDamage << endl; // ��������� 15 (10 ����� �� ���� + 5 ����)
//
//}
// main.cpp


// --------------------��� ����� Mymath--------------------
#include <iostream>
#include "MyMath.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // �������� ������� ��������, ���������, ��������� � �������
    int sum = MyMath::Add(5, 10);
    int difference = MyMath::Sub(10, 5);
    int product = MyMath::Mult(5, 10);
    double quotient = MyMath::Div(10, 2);

    // ����� �����������
    cout << "�����: " << sum << endl;
    cout << "��������: " << difference << endl;
    cout << "������������: " << product << endl;
    cout << "�������: " << quotient << endl;

    // ����� ���������� ������� �������
    cout << "���������� ������� �������: " << MyMath::GetCallCount() << endl;

}