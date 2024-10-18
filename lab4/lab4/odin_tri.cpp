//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Weapon {
//private:
//    string name;   // Название оружия
//    int damage;    // Наносимый урон
//    float weight;  // Вес оружия
//
//public:
//    // Конструктор с параметрами
//    Weapon(string g_name, int g_damage, float g_weigh) {
//        name = g_name;
//        damage = g_damage;
//        weight = g_weigh;
//        cout << "Weapon has been created: " << name << endl;
//    }
//
//    // Конструктор без параметров
//    Weapon() : Weapon("Default Weapon", 10, 1.0) {} // Инициализация значениями по умолчанию
//
//    // Деструктор
//    ~Weapon() {
//        cout << "Deleting Weapon: " << name << endl
//            << "Damage: " << damage << endl
//            << "Weight: " << weight << " kg" << endl
//            << "Weapon has been deleted." << endl << endl;
//    }
//
//    // Метод для вывода информации об оружии
//    void display() const {
//        cout << "Weapon Name: " << name << endl
//            << "Damage: " << damage << endl
//            << "Weight: " << weight << " kg" << endl << endl;
//    }
//
//    // Метод для проверки, можно ли поднять оружие
//    bool canLift(float maxWeight) const {
//        if (weight <= maxWeight) {
//            cout << "You can lift the weapon: " << name << endl;
//            return true; // Можно поднять
//        }
//        else {
//            cout << "The weapon is too heavy to lift: " << name << endl;
//            return false; // Слишком тяжело
//        }
//    }
//
//    // Метод для вычисления суммарного веса с другим объектом оружия
//    float totalWeight(const Weapon& other) const {
//        return weight + other.weight; // Возвращает сумму весов двух оружий
//    }
//};
//
//int main() {
//    Weapon sword("Sword", 15, 3.0);
//    sword.display();
//
//    // Проверка возможности поднять меч
//    float maxLiftWeight = 4.0;
//    bool canLiftSword = sword.canLift(maxLiftWeight);
//
//    cout << (canLiftSword ? "The sword can be lifted." : "The sword cannot be lifted.") << endl;
//
//    return 0;
//}