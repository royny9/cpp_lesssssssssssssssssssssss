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
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Основной класс Weapon
//class Weapon {
//private:
//    string name;         
//    int damage;          
//
//public:
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage) {}
//
//    virtual int getDamage() const {
//        return damage;
//    }
//
//    virtual void displayInfo() const {
//        cout << "Название оружия: " << name << endl;
//        cout << "Базовый урон: " << damage << endl;
//    }
//
//    virtual ~Weapon() {}
//
//    // Переопределение операторов > и <
//    bool operator>(const Weapon& other) const {
//        return this->getDamage() > other.getDamage();
//    }
//
//    bool operator<(const Weapon& other) const {
//        return this->getDamage() < other.getDamage();
//    }
//};
//
//// Дочерний класс MagicalWeapon
//class MagicalWeapon : public Weapon {
//private:
//    int additionalDamage; // Дополнительный урон от магии
//
//public:
//
//    MagicalWeapon(string weaponName, int weaponDamage, int extraDamage)
//        : Weapon(weaponName, weaponDamage), additionalDamage(extraDamage) {}
//
//    MagicalWeapon()
//        : Weapon("Магическое Оружие", 10), additionalDamage(5) {}
//
//    // Переопределение метода получения урона
//    int getDamage() const override {
//        return Weapon::getDamage() + additionalDamage;
//    }
//
//    void displayInfo() const override {
//        Weapon::displayInfo();
//        cout << "Дополнительный урон: " << additionalDamage << endl;
//    }
//};
//
//// Тестирование функциональности
//int main() {
//    setlocale(LC_ALL, "Russian");
//    // Создаем объекты обычного и магического оружия
//    Weapon sword("Меч", 15);
//    MagicalWeapon magicSword("Магический меч", 10, 8);
//    MagicalWeapon defaultMagicSword; // Используем конструктор по умолчанию
//
//    // Показываем информацию о каждом объекте
//    sword.displayInfo();
//    cout << endl;
//    magicSword.displayInfo();
//    cout << endl;
//    defaultMagicSword.displayInfo();
//    cout << endl;
//
//    // Сравнение оружий
//    cout << "Сравнение меча и магического меча: " << endl;
//    if (sword > magicSword) {
//        cout << "Меч сильнее магического меча." << endl;
//    }
//    else if (sword < magicSword) {
//        cout << "Магический меч сильнее обычного меча." << endl;
//    }
//    else {
//        cout << "Оба меча наносят одинаковый урон." << endl;
//    }
//
//    cout << "Сравнение магического меча и стандартного магического меча: " << endl;
//    if (magicSword > defaultMagicSword) {
//        cout << "Магический меч сильнее стандартного магического меча." << endl;
//    }
//    else if (magicSword < defaultMagicSword) {
//        cout << "Стандартный магический меч сильнее." << endl;
//    }
//    else {
//        cout << "Оба меча наносят одинаковый урон." << endl;
//    }
//
//    return 0;
//}
//____________________ задание 3 1-5_____________
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Абстрактный класс Weapon
//class Weapon {
//private:
//    string name;         
//    int damage;          
//
//public:
//    // Параметризованный конструктор
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage) {}
//
//    // Чисто виртуальная функция для атаки
//    virtual void Attack() const = 0; // Делает класс абстрактным
//
//    // Виртуальный метод для получения урона
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
//
//    // Переопределение операторов > и <
//    bool operator>(const Weapon& other) const {
//        return this->getDamage() > other.getDamage();
//    }
//
//    bool operator<(const Weapon& other) const {
//        return this->getDamage() < other.getDamage();
//    }
//};
//
//// Дочерний класс MagicalWeapon
//class MagicalWeapon : public Weapon {
//private:
//    string magicEffect; // Эффект магии
//
//public:
//    // Параметризованный конструктор
//    MagicalWeapon(string weaponName, int weaponDamage, string effect)
//        : Weapon(weaponName, weaponDamage), magicEffect(effect) {}
//
//    // Реализация метода Attack
//    void Attack() const override {
//        cout << "Атака магическим оружием: " << magicEffect << endl;
//    }
//
//    // Переопределение метода для отображения информации
//    void displayInfo() const override {
//        Weapon::displayInfo();
//        cout << "Магический эффект: " << magicEffect << endl;
//    }
//};
//
//// Дочерний класс OneTimeWeapon
//class OneTimeWeapon : public Weapon {
//public:
//    // Параметризованный конструктор
//    OneTimeWeapon(string weaponName, int weaponDamage)
//        : Weapon(weaponName, weaponDamage) {}
//
//    // Реализация метода Attack
//    void Attack() const override {
//        cout << "Одноразовая атака с оружием: " << this->getDamage() << " урона!" << endl;
//    }
//
//    // Переопределение метода для отображения информации
//    void displayInfo() const override {
//        Weapon::displayInfo();
//        cout << "Эта оружие одноразового использования!" << endl;
//    }
//};
//
//int main() {
//    // Создаем экземпляр магического оружия
//    MagicalWeapon fireStaff("Огненный посох", 30, "Огненный шар");
//
//    // Вызываем метод Attack
//    fireStaff.Attack();
//
//    // Отображаем информацию об оружии
//    fireStaff.displayInfo();
//
//    // Создаем экземпляр одноразового оружия
//    OneTimeWeapon explosiveArrow("Взрывная стрела", 50);
//
//    // Вызываем метод Attack
//    explosiveArrow.Attack();
//
//    // Отображаем информацию об оружии
//    explosiveArrow.displayInfo();
//
//    return 0;
//}
// __________________задание 6-7_____________
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Абстрактный класс Weapon
//class Weapon {
//protected: // Изменено на protected для доступа в дочерних классах
//    string name;         // Название оружия
//    int damage;          // Базовый урон
//    bool used;           // Флаг для отслеживания использования оружия
//
//public:
//    // Параметризованный конструктор
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage), used(false) {}
//
//    // Чисто виртуальная функция для атаки
//    virtual void Attack() = 0; // Делает класс абстрактным
//
//    // Виртуальный метод для получения урона
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
//
//    // Переопределение операторов > и <
//    bool operator>(const Weapon& other) const {
//        return this->getDamage() > other.getDamage();
//    }
//
//    bool operator<(const Weapon& other) const {
//        return this->getDamage() < other.getDamage();
//    }
//
//    // Метод для проверки, использовано ли оружие
//    bool isUsed() const {
//        return used;
//    }
//
//    // Метод для установки флага использования
//    void setUsed(bool status) {
//        used = status;
//    }
//};
//
//// Дочерний класс MagicalWeapon
//class MagicalWeapon : public Weapon {
//public:
//    string magicEffect; // Эффект магии
//
//    // Параметризованный конструктор
//    MagicalWeapon(string weaponName, int weaponDamage, string effect)
//        : Weapon(weaponName, weaponDamage), magicEffect(effect) {}
//
//    // Метод атаки
//    void Attack() override {
//        if (isUsed()) { // Используем метод isUsed() для проверки
//            cout << "Оружие уже было использовано" << endl;
//        }
//        else {
//            cout << "Атакуем с помощью магического оружия: " << magicEffect << endl;
//            setUsed(true); // Устанавливаем флаг использования
//        }
//    }
//
//    // Переопределение метода для отображения информации об оружии
//    void displayInfo() const override {
//        Weapon::displayInfo();
//        cout << "Эффект магии: " << magicEffect << endl;
//    }
//};
//
//int main() {
//    // Создаём магическое оружие
//    MagicalWeapon wand("Волшебная палочка", 50, "Огненный шар");
//
//    // Отображаем информацию об оружии
//    wand.displayInfo();
//
//    // Атакуем с использованием оружия
//    wand.Attack(); // Ожидается атака
//    wand.Attack(); // Пытаемся атаковать снова
//
//    return 0;
//}
// __________________задание 8-9_____________
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//// Абстрактный класс Weapon
//class Weapon {
//protected:
//    string name;         // Название оружия
//    int damage;          // Базовый урон
//    bool used;           // Флаг для отслеживания использования оружия
//
//public:
//    // Параметризованный конструктор
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage), used(false) {}
//
//    // Чисто виртуальная функция для атаки
//    virtual void Attack() = 0;
//
//    // Виртуальный метод для получения урона
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
//    // Метод для получения имени оружия
//    string getName() const {
//        return name;
//    }
//
//    // Виртуальный деструктор
//    virtual ~Weapon() {}
//
//    // Переопределение операторов > и <
//    bool operator>(const Weapon& other) const {
//        return this->getDamage() > other.getDamage();
//    }
//
//    bool operator<(const Weapon& other) const {
//        return this->getDamage() < other.getDamage();
//    }
//};
//
//// Класс для одноразового оружия
//class SingleUseWeapon : public Weapon {
//public:
//    SingleUseWeapon(string weaponName, int weaponDamage)
//        : Weapon(weaponName, weaponDamage) {}
//
//    void Attack() override {
//        if (used) {
//            cout << "Оружие " << getName() << " уже использовано!" << endl;
//        }
//        else {
//            used = true; // Помечаем оружие как использованное
//            cout << "Атака с использованием " << getName() << " с уроном " << getDamage() << "!" << endl;
//        }
//    }
//};
//
//// Основная функция для тестирования
//int main() {
//    SingleUseWeapon sword("Меч", 50);
//
//    // Первый вызов атаки
//    sword.Attack(); // Оружие использовано
//
//    // Второй вызов атаки
//    sword.Attack(); // Оружие уже использовано
//
//    return 0;
//}
// __________________________10-11_____________
//#include <iostream>
//#include <string>
//#include <typeinfo>
//
//using namespace std;
//
//// Базовый класс Weapon
//class Weapon {
//protected:
//    string name;    // Название оружия
//    int damage;     // Базовый урон
//
//public:
//    // Конструктор
//    Weapon(string weaponName, int weaponDamage)
//        : name(weaponName), damage(weaponDamage) {}
//
//    // Метод для получения урона
//    virtual int getDamage() const {
//        return damage;
//    }
//
//    // Метод для получения названия оружия
//    string getName() const {
//        return name;
//    }
//
//    // Метод для установки урона
//    void setDamage(int weaponDamage) {
//        damage = weaponDamage;
//    }
//
//    // Метод для установки имени оружия
//    void setName(const string& weaponName) {
//        name = weaponName;
//    }
//
//    // Виртуальный метод для атаки
//    virtual void Attack() = 0;
//
//    // Виртуальный деструктор
//    virtual ~Weapon() {}
//};
//
//// Класс для однократного использования
//class SingleUseWeapon : public Weapon {
//private:
//    bool used;  // Флаг использования
//
//public:
//    // Конструктор
//    SingleUseWeapon(string weaponName, int weaponDamage)
//        : Weapon(weaponName, weaponDamage), used(false) {}
//
//    // Реализация метода атаки
//    void Attack() override {
//        if (!used) {
//            cout << getName() << " атакует, нанося " << getDamage() << " урона!\n";
//            used = true;  // Помечаем как использованное
//        }
//        else {
//            cout << getName() << " уже использовано!\n";
//        }
//    }
//
//    // Метод для проверки состояния
//    bool isUsed() const {
//        return used;
//    }
//};
//
//// Шаблонный класс для хранения оружия с использованием id
//template <typename T>
//class WeaponStore {
//private:
//    T weaponId;
//    Weapon* weapon;  // Указатель на объект оружия
//
//public:
//    // Конструктор
//    WeaponStore(T id, Weapon* w) : weaponId(id), weapon(w) {}
//
//    // Метод для получения id оружия
//    T getWeaponId() const {
//        return weaponId;
//    }
//
//    // Метод для установки id оружия
//    void setWeaponId(T id) {
//        weaponId = id;
//    }
//
//    // Метод для выполнения атаки
//    void attack() {
//        if (weapon) {
//            weapon->Attack();
//        }
//    }
//
//    // Деструктор
//    ~WeaponStore() {
//        delete weapon;  // Удаляем объект оружия
//    }
//};
//
//int main() {
//    // Работа с объектом SingleUseWeapon
//    SingleUseWeapon* sword = new SingleUseWeapon("Меч", 50);
//
//    // Проверка работы шаблона с целым числом как id оружия
//    WeaponStore<int> store1(101, sword);
//    cout << "ID оружия: " << store1.getWeaponId() << endl;
//    store1.attack();  // Первая атака
//    store1.attack();  // Повторная атака (должна показать, что уже использовано)
//
//    // Работа с объектом SingleUseWeapon с id в виде строки
//    SingleUseWeapon* bow = new SingleUseWeapon("Лук", 30);
//    WeaponStore<string> store2("Bow_1234", bow);
//    cout << "ID оружия: " << store2.getWeaponId() << endl;
//    store2.attack();  // Первая атака
//    store2.attack();  // Повторная атака (должна показать, что уже использовано)
//
//    return 0;
//}