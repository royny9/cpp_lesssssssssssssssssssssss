#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;
    ofstream outFile("output.txt", ios::app);  // Открываем файл для добавления 

    // Проверка на успешное открытие файла
    if (!outFile) {
        cerr << "Ошибка при открытии файла!" << endl;
        return 1;
    }

    while (true) {
        cout << "Введите строку (или 'read' для чтения, 'erase' для очистки, 'exit' для выхода): ";
        getline(cin, input);

        if (input == "read") {
            // Чтение содержимого файла
            ifstream inFile("output.txt");
            if (inFile) {
                string line;
                cout << "Содержимое файла:" << endl;
                while (getline(inFile, line)) {
                    cout << line << endl;
                }
                inFile.close();
            }
            else {
                cerr << "Ошибка при открытии файла для чтения!" << endl;
            }
        }
        else if (input == "erase") {
            // Очистка файла
            outFile.close();  // Закрываем файл для записи
            ofstream clearFile("output.txt", ios::trunc);  // Открываем файл в режиме очистки
            clearFile.close(); // Закрываем чтобы сохранить изменения
            cout << "Файл очищен." << endl;
            outFile.open("output.txt", ios::app); // Снова открываем файл для добавления
        }
        else if (input == "exit") {
            // Выход из программы
            break;
        }
        else {
            // Запись введенной строки в файл
            outFile << input << endl;
        }
    }

    outFile.close();  // Закрываем файл перед завершением
    return 0;
}