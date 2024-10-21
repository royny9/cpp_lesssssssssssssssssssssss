#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    cout << "Введите строку: ";
    getline(cin, userInput);

    // Проверяем, достаточно ли символов в строке для извлечения подстроки
    if (userInput.length() >= 4) {
        string substring = userInput.substr(1, 3);
        cout << "Подстрока от 2-го до 4-го символа: " << substring << endl;
    }
    else {
        cout << "Ошибка: строка слишком короткая!" << endl;
    }

    size_t index = userInput.find('a');  // Используем метод find

    // Проверяем, было ли найдено вхождение
    if (index != string::npos) {
        cout << "Индекс первого вхождения символа 'a': " << index << endl;
    }
    else {
        cout << "Символа 'a' не найдено" << endl;
    }
    return 0;
}