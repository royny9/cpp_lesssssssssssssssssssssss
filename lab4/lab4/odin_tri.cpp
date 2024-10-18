//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Weapon {
//private:
//    string name;   // �������� ������
//    int damage;    // ��������� ����
//    float weight;  // ��� ������
//
//public:
//    // ����������� � �����������
//    Weapon(string g_name, int g_damage, float g_weigh) {
//        name = g_name;
//        damage = g_damage;
//        weight = g_weigh;
//        cout << "Weapon has been created: " << name << endl;
//    }
//
//    // ����������� ��� ����������
//    Weapon() : Weapon("Default Weapon", 10, 1.0) {} // ������������� ���������� �� ���������
//
//    // ����������
//    ~Weapon() {
//        cout << "Deleting Weapon: " << name << endl
//            << "Damage: " << damage << endl
//            << "Weight: " << weight << " kg" << endl
//            << "Weapon has been deleted." << endl << endl;
//    }
//
//    // ����� ��� ������ ���������� �� ������
//    void display() const {
//        cout << "Weapon Name: " << name << endl
//            << "Damage: " << damage << endl
//            << "Weight: " << weight << " kg" << endl << endl;
//    }
//
//    // ����� ��� ��������, ����� �� ������� ������
//    bool canLift(float maxWeight) const {
//        if (weight <= maxWeight) {
//            cout << "You can lift the weapon: " << name << endl;
//            return true; // ����� �������
//        }
//        else {
//            cout << "The weapon is too heavy to lift: " << name << endl;
//            return false; // ������� ������
//        }
//    }
//
//    // ����� ��� ���������� ���������� ���� � ������ �������� ������
//    float totalWeight(const Weapon& other) const {
//        return weight + other.weight; // ���������� ����� ����� ���� ������
//    }
//};
//
//int main() {
//    Weapon sword("Sword", 15, 3.0);
//    sword.display();
//
//    // �������� ����������� ������� ���
//    float maxLiftWeight = 4.0;
//    bool canLiftSword = sword.canLift(maxLiftWeight);
//
//    cout << (canLiftSword ? "The sword can be lifted." : "The sword cannot be lifted.") << endl;
//
//    return 0;
//}