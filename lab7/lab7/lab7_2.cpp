
// ______________________1-2________________
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string name;
    cout << "Введите ваше имя: ";
    getline(cin, name);

    // 2. Регулярное выражение для проверки корректности имени
    // Имя должно начинаться с заглавной буквы, содержать только буквы и быть длиной от 2 до 32 символов
    regex pattern("^[A-Z][a-zA-Zа-яА-ЯёЁ]{1,31}$");

    // Проверяем корректность имени
    if (regex_match(name, pattern)) {
        cout << "Имя корректно!" << endl;
    }
    else {
        cout << "Имя некорректно! Убедитесь, что имя начинается с заглавной буквы, содержит только буквы и длиной от 2 до 32 символов." << endl;
    }
    return 0;
}

//_________________________3-4_____________

#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    // 3. Создаём строковую переменную с произвольным текстом, содержащим e-mail адреса
    string text = "e-mail адреса: aliceasd@example.com, bob.smith@domain.org, charasdlie@gmail.com. "
        "Также учтите, что test-asdemail@company.com и hello+wasdorld@mail.co.uk также валидны.";

    // 4. Регулярное выражение для извлечения e-mail адресов
    regex email_pattern(R"(([\w\.-]+@[\w\.-]+\.[a-zA-Z]{2,6}))");

    // Вектор для хранения найденных email адресов
    vector<string> emails;

    // Используем итератор для поиска всех совпадений в исходной строке
    auto it = sregex_iterator(text.begin(), text.end(), email_pattern);
    auto it_end = sregex_iterator();

    // Выводим найденные email адреса
    cout << "Найденные e-mail адреса:" << endl;
    for (; it != it_end; ++it) {
        emails.push_back(it->str()); // Сохраняем найденный адрес в вектор
        cout << it->str() << endl;    // Выводим на консоль
    }
}