//------------------------------1-6----------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////Создаем структуру Player
//struct Player {
//    int id;              
//    string username;     
//    string password;    
//
//    void displayInfo() const {
//        cout << "ID: " << id << endl;
//        cout << "Логин: " << username << endl;
//        cout << "Пароль: " << password << endl;
//    }
//};
//
////Создаем перечисление для типов оружия
//enum WeaponType {
//    ONEHANDED,  
//    TWOHANDED,  
//    BOW,       
//    CROSSBOW   
//};
//
////Создаем класс Weapon
//class Weapon {
//private:
//    string name;         
//    int damage;          
//    WeaponType type;     
//
//public:
//  
//    Weapon(string weaponName, int weaponDamage, WeaponType weaponType)
//        : name(weaponName), damage(weaponDamage), type(weaponType) {}
//
//    // GET-метод для получения типа оружия
//    WeaponType getType() const {
//        return type;
//    }
//
//    // Метод для отображения информации об оружии
//    void displayInfo() const {
//        cout << "Название: " << name << ", Урон: " << damage << ", Тип: ";
//
//        switch (type) {
//        case ONEHANDED:
//            cout << "Одноручное";
//            break;
//        case TWOHANDED:
//            cout << "Двуручное";
//            break;
//        case BOW:
//            cout << "Лук";
//            break;
//        case CROSSBOW:
//            cout << "Арбалет";
//            break;
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    // Создаем и инициализируем игрока
//    Player player;
//    player.id = 1;
//    player.username = "hero123";
//    player.password = "strong_password";
//
//    cout << "Информация о игроке:" << endl;
//    player.displayInfo();
//
//    Weapon weapon("Длинный меч", 50, ONEHANDED);
//
//    cout << "Информация об оружии:" << endl;
//    weapon.displayInfo();
//
//    return 0;
//}

//___________________________________________7-11_____________________________
//#include <iostream>
//#include <string>
//
//using namespace std;
//
////Основной класс Weapon
//class Weapon {
//private:
//    string name;        
//    int damage;         
//
//public:
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage) {}
//
//    int getDamage() const {
//        return damage;
//    }
//
//    virtual void displayInfo() const {
//        cout << "Название оружия: " << name << endl;
//        cout << "Базовый урон: " << damage << endl;
//    }
//
//    // Виртуальный деструктор
//    virtual ~Weapon() {}
//};
//
////Дочерний класс MagicalWeapon
//class MagicalWeapon : public Weapon {
//private:
//    int additionalDamage; // Дополнительный урон от магии
//
//public:
//    MagicalWeapon(string weaponName, int weaponDamage, int extraDamage)
//        : Weapon(weaponName, weaponDamage), additionalDamage(extraDamage) {}
//
//    MagicalWeapon()
//        : Weapon("Магическое Оружие", 10), additionalDamage(5) {}
//
//    int getAdditionalDamage() const {
//        return additionalDamage;
//    }
//
//    int getTotalDamage() const {
//        return getDamage() + additionalDamage; // Общий урон = базовый урон + дополнительный
//    }
//
//    // Переопределяем метод для отображения информации
//    void displayInfo() const override {
//        Weapon::displayInfo(); // Вызываем метод родительского класса
//        cout << "Дополнительный урон: " << additionalDamage << endl;
//        cout << "Общий урон: " << getTotalDamage() << endl;
//    }
//};
//
//int main() 
//{
//    setlocale(LC_ALL, "Russian");
//
//    // Тестирование конструктора с параметрами
//    MagicalWeapon fireSword("Меч огня", 15, 10);
//    fireSword.displayInfo();
//    cout << endl;
//
//    // Тестирование конструктора без параметров
//    MagicalWeapon defaultWeapon;
//    defaultWeapon.displayInfo();
//
//    return 0;
//}
//__________________________2 задание 1-2___________________
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Основной класс Weapon
//class Weapon {
//private:
//    string name;         // Название оружия
//    int damage;          // Базовый урон, который наносит оружие
//
//public:
//    // Параметризованный конструктор
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage) {}
//
//    // Виртуальный метод для получения урона (должен быть переопределён в дочернем классе)
//    virtual int getDamage() const {
//        return damage;
//    }
//
//    // Метод для отображения информации об оружии
//    virtual void displayInfo() const {
//        cout << "Название оружия: " << name << endl;
//        cout << "Базовый урон: " << damage << endl;
//    }
//
//    // Виртуальный деструктор
//    virtual ~Weapon() {}
//};
//
//// Дочерний класс MagicalWeapon
//class MagicalWeapon : public Weapon {
//private:
//    int additionalDamage; 
//
//public:
//    MagicalWeapon(string weaponName, int weaponDamage, int extraDamage)
//        : Weapon(weaponName, weaponDamage), additionalDamage(extraDamage) {}
//
//    MagicalWeapon()
//        : Weapon("Магическое Оружие", 10), additionalDamage(5) {}
//
//    int getDamage() const override {
//        return Weapon::getDamage() + additionalDamage;
//    }
//
//    void displayInfo() const override {
//        Weapon::displayInfo();
//        cout << "Дополнительный урон: " << additionalDamage << endl;
//        cout << "Общий урон: " << getDamage() << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    Weapon normalSword("Обычный Меч", 15);
//    normalSword.displayInfo();
//    cout << "Урон: " << normalSword.getDamage() << endl;
//
//    MagicalWeapon magicStaff("Магический Посох", 8, 12);
//    magicStaff.displayInfo();
//    cout << "Урон: " << magicStaff.getDamage() << endl;
//
//    MagicalWeapon defaultMagicWeapon; // Используем конструктор по умолчанию
//    defaultMagicWeapon.displayInfo();
//    cout << "Урон: " << defaultMagicWeapon.getDamage() << endl;
//
//    return 0;
//}
#include <iostream>
#include <string>

using namespace std;

// Основной класс Weapon
class Weapon {
private:
    string name;         
    int damage;          

public:
    Weapon(string weaponName, int weaponDamage)
        : name(weaponName), damage(weaponDamage) {}

    virtual int getDamage() const {
        return damage;
    }

    virtual void displayInfo() const {
        cout << "Название оружия: " << name << endl;
        cout << "Базовый урон: " << damage << endl;
    }

    virtual ~Weapon() {}

    // Переопределение операторов > и <
    bool operator>(const Weapon& other) const {
        return this->getDamage() > other.getDamage();
    }

    bool operator<(const Weapon& other) const {
        return this->getDamage() < other.getDamage();
    }
};

// Дочерний класс MagicalWeapon
class MagicalWeapon : public Weapon {
private:
    int additionalDamage; // Дополнительный урон от магии

public:

    MagicalWeapon(string weaponName, int weaponDamage, int extraDamage)
        : Weapon(weaponName, weaponDamage), additionalDamage(extraDamage) {}

    MagicalWeapon()
        : Weapon("Магическое Оружие", 10), additionalDamage(5) {}

    // Переопределение метода получения урона
    int getDamage() const override {
        return Weapon::getDamage() + additionalDamage;
    }

    void displayInfo() const override {
        Weapon::displayInfo();
        cout << "Дополнительный урон: " << additionalDamage << endl;
    }
};

// Тестирование функциональности
int main() {
    setlocale(LC_ALL, "Russian");
    // Создаем объекты обычного и магического оружия
    Weapon sword("Меч", 15);
    MagicalWeapon magicSword("Магический меч", 10, 8);
    MagicalWeapon defaultMagicSword; // Используем конструктор по умолчанию

    // Показываем информацию о каждом объекте
    sword.displayInfo();
    cout << endl;
    magicSword.displayInfo();
    cout << endl;
    defaultMagicSword.displayInfo();
    cout << endl;

    // Сравнение оружий
    cout << "Сравнение меча и магического меча: " << endl;
    if (sword > magicSword) {
        cout << "Меч сильнее магического меча." << endl;
    }
    else if (sword < magicSword) {
        cout << "Магический меч сильнее обычного меча." << endl;
    }
    else {
        cout << "Оба меча наносят одинаковый урон." << endl;
    }

    cout << "Сравнение магического меча и стандартного магического меча: " << endl;
    if (magicSword > defaultMagicSword) {
        cout << "Магический меч сильнее стандартного магического меча." << endl;
    }
    else if (magicSword < defaultMagicSword) {
        cout << "Стандартный магический меч сильнее." << endl;
    }
    else {
        cout << "Оба меча наносят одинаковый урон." << endl;
    }

    return 0;
}