#include <iostream>
using namespace std;


//___________________________задание 1-7 до переработки_______________________
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int choice;
//
//	cout << "Введите число 1, 2 или 3" << endl;
//	cin >> choice;
//    try {
//        switch (choice) {
//        case 1:
//            cout << "Один" << endl;
//            break;
//        case 2:
//            cout << "Два" << endl;
//            break;
//        case 3:
//            cout << "Три" << endl;
//            break;
//        default:
//            throw runtime_error("Некорректное значение");
//        }
//    }
//    catch (const runtime_error& e) {
//        cout << e.what() << endl;
//        return 1;
//    }
//    int birthYear;
//    cout << "Введите год вашего рождения: ";
//    cin >> birthYear;
//    try {
//        if (birthYear < 0) {
//            throw runtime_error("Вы ввели отрицательное число");
//        }
//        else if (birthYear < 1850) {
//            throw runtime_error("Что то не верится");
//        }
//        else if (birthYear > 2024) {
//            throw runtime_error("Вы еще не родились");
//        }
//        
//        cout << "Вы ввели год рождения: " << birthYear << endl;
//
//    
//    }
//    catch (const runtime_error& e) {
//        cout << e.what() << endl;
//        return 1;
//    }
//    cout << "Спасибо!" << endl;
//    return 0;
//}


enum ErrorCode {
    NegativeYear,
    FutureYear,
    YearTooOld 
};

class BirthYearException : public runtime_error {
public:
    ErrorCode code;

    BirthYearException(const string& message, ErrorCode errCode)
        : runtime_error(message), code(errCode) {}
};

int main() {
    int birthYear;
    setlocale(LC_ALL, "Russian");
    cout << "Введите год вашего рождения: ";
    cin >> birthYear;

    try {
        if (birthYear < 0) {
            throw BirthYearException("Год рождения не может быть отрицательным.", ErrorCode::NegativeYear);
        }
        if (birthYear < 1850) {
            throw BirthYearException("Год рождения не может быть меньше 1850.", ErrorCode::YearTooOld);
        }
        if (birthYear > 2024) {
            throw BirthYearException("Год рождения не может быть в будущем.", ErrorCode::FutureYear);
        }

        cout << "Ваш год рождения: " << birthYear << endl;

    }
    catch (const BirthYearException& e) {
        cout << e.what() << endl;

        // Дополнительная обработка по коду ошибки
        switch (e.code) {
        case ErrorCode::NegativeYear:
            cout << "Ошибка: Введите корректный год." << endl;
            break;
        case ErrorCode::YearTooOld:
            cout << "Ошибка: Введите год, который не меньше 1850." << endl;
            break;
        case ErrorCode::FutureYear:
            cout << "Ошибка: Введите год, который уже прошел." << endl;
            break;
        }
        return 1;
    }

    return 0;
}