//#include <iostream>
//
//using namespace std;
////----------------задание 1-------------
////class Gun {
////public:
////	string name;
////	int damage;
////	float weight;
////	void print()
////	{
////		cout << "Name: " << name << "\nAge: " << damage << "\nweigh: " << weight << endl;
////	}
////	Gun(string g_name, int g_damage, float g_weigh)
////	{
////		name = g_name;
////		damage = g_damage;
////		weight = g_weigh;
////		cout << "gun has deen created" << endl;
////	}
////	Gun() : Gun("ak", 150, 12.5) {};
////};
////int main()
////{
////	Gun ak("ak", 50, 2.5);
////	
////	ak.print();
////	cout << endl;
////	Gun defultGun;
////	defultGun.print();
////}
////class Gun {
////public:
////	string name;
////	int damage;
////	float weight;
////	void print()
////	{
////		cout << "Name: " << name << "\nAge: " << damage << "\nweigh: " << weight << endl;
////	}
////	Gun(string g_name, int g_damage, float g_weigh)
////	{
////		name = g_name;
////		damage = g_damage;
////		weight = g_weigh;
////		cout << "gun has deen created" << endl;
////	}
////	Gun() : Gun("ak", 150, 12.5) {};
////	~Gun()
////	{
////		cout << "Removing weapons: " << name << endl;
////		cout << "Damage dealt: " << damage << endl;
////		cout << "weight: " << weight << " кг" << endl;
////		cout << "The weapon was successfully removed." << endl;
////		cout << "-------------------------" << endl;
////	}
////	bool canCarry(float maxWeight) const {
////		return weight > maxWeight; // Если вес оружия больше допустимого, возвращаем true
////	}
////};
////int main()
////{
////	Gun ak("ak", 50, 2.5);//статический обьект
////	ak.print();
////	float maxCarryWeight = 2;
////	if (ak.canCarry(maxCarryWeight)) {
////		cout << "False " << ak.name << "." << endl;
////	}
////	else {
////		cout << "true " << ak.name << "." << endl;
////	}
////	cout << "-------------------------" << endl;
////	Gun defGun;
////	defGun.print();
////	cout << "-------------------------" << endl;
////
////	Gun* bow = new Gun("bow", 30, 1.2);// динамиеский обьект
////	cout << "Information about the dynamic weapon object:" << endl;
////	bow->print();
////	delete bow;
////
////	maxCarryWeight = 2.0;
////	if (bow->canCarry(maxCarryWeight)) {
////		cout << "False " << bow->name << "." << endl;
////	}
////	else {
////		cout << "True " << bow->name << "." << endl;
////	}
////	cout << "-------------------------" << endl;
////} 
//#include <iostream>
//#include <string>
//
//class Weapon {
//private:
//    std::string name; // Название оружия
//    int damage;       // Наносимый урон
//    float weight;     // Вес
//
//public:
//    // Конструктор с параметрами
//    Weapon(string g_name, int g_damage, float g_weigh)
//    {
//        name = g_name;
//        damage = g_damage;
//        weight = g_weigh;
//        cout << "gun has deen created" << endl;
//    }
//
//    // Метод для отображения информации об оружии
//    void displayInfo() const {
//        cout << "Название оружия: " << name << endl;
//        cout << "Наносимый урон: " << damage << endl;
//        cout << "Вес: " << weight << " кг" << endl;
//    }
//
//    // Новый метод для вычисления суммарного веса текущего объекта и переданного
//    //--------
//    //float totalWeight(const Weapon& other) const {
//    //    return weight + other.weight; // Возвращаем суммарный вес
//    //}
//    //float totalWeight(float otherWeight) const {
//    //    return weight + otherWeight; // Возвращаем суммарный вес
//    //}
//    //--------
//    // Метод для вычисления суммарного веса текущего объекта и переданного объекта Weapon,
//    // используя перегруженный метод
//    float totalWeight(const Weapon& other) const {
//        return totalWeight(other.weight); // Вызываем перегруженный метод
//    }
//
//    // Перегруженный метод для вычисления суммарного веса текущего объекта и переданного веса
//    float totalWeight(float otherWeight) const {
//        return weight + otherWeight; // Возвращаем суммарный вес
//    }
//};
//
//
//int main() {
//    setlocale(LC_ALL, "Russian");
//    // Создание статического объекта оружия
//    Weapon sword("Меч", 50, 3.5);
//    Weapon axe("Топор", 40, 5.0);
//
//    cout << "Информация о мече:" << endl;
//    sword.displayInfo();
//
//    cout << "\nИнформация о топоре:" << endl;
//    axe.displayInfo();
//
//    // Пример использования метода totalWeight с другим объектом Weapon
//    //float combinedWeightWithAxe = sword.totalWeight(axe);
//    //cout << "\nСуммарный вес меча и топора: " << combinedWeightWithAxe << " кг" << endl;
//
//    //// Пример использования перегруженного метода totalWeight с весом
//    //float additionalWeight = 2.0; // Дополнительный вес
//    //float combinedWeightWithAdditional = sword.totalWeight(additionalWeight);
//    //cout << "Суммарный вес меча и дополнительного веса: " << combinedWeightWithAdditional << " кг" << endl;
//   
//    cout << "Суммарный вес меча и топора: " << sword.totalWeight(axe) << " кг" << endl;
//}