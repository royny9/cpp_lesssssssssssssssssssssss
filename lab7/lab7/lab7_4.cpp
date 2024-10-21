#include <iostream>
#include <vector>

using namespace std;

// Функция для вывода вектора в консоль
void printVector(const vector<float>& vec) {
    cout << "Содержимое вектора: ";
    for (const float& element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    // 1. Создаем пустой вектор с типом float.
    vector<float> myVector;

    // 2. Добавляем 5 элементов в вектор.
    myVector.push_back(1.1);
    myVector.push_back(2.2);
    myVector.push_back(3.3);
    myVector.push_back(4.4);
    myVector.push_back(5.5);
    // 5. 
    myVector.insert(myVector.begin() + 3, 3.75); 

    // 7. 
    myVector.pop_back(); 

    // 8. Проверяем правильность сделанного, выводим вектор в консоль.
    printVector(myVector);

    return 0;
}

#include <iostream>
#include <map>
#include <string>

using namespace std;

class Settings {
private:
    static map<string, string> settingsMap;

public:
    // Статическая функция для добавления новой пары ключ-значение
    static void Add(const string& key, const string& value) {
        settingsMap[key] = value;
    }

    // Статическая функция для получения значения по ключу
    static string Get(const string& key) {
        if (settingsMap.find(key) != settingsMap.end()) {
            return settingsMap[key]; // Возвращаем значение
        }
        else {
            return "Ключ не найден"; // Сообщение об отсутствии ключа
        }
    }

    //  функция для вывода содержимого карты в консоль
    static void Print() {
        cout << "Содержимое настройки:" << endl;
        for (const auto& pair : settingsMap) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
};

// Инициализируем статическое поле
map<string, string> Settings::settingsMap;

int main() {
    setlocale(LC_ALL, "Russian");
    // Добавляем настройки
    Settings::Add("Resolution", "есть");
    Settings::Add("Volume", "сделай побольше волюме");
    Settings::Add("Language", "руски");

    // Проверяем получение настроек
    cout << "Язык: " << Settings::Get("Language") << endl; // English
    cout << "Параметр несуществующего ключа: " << Settings::Get("не православный") << endl; // Ключ не найден

    // Выводим все настройки
    Settings::Print();

    return 0;
}