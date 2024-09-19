

#include <iostream> // библиотека дял работы с потоками ввода вывода 
using namespace std;// избавляемся от stg::


//int main()// обозначение главной функции
//{
//    setlocale(LC_ALL, "Rus");// боюавляем русский язык
//    cout << "first string" << endl; // задание 1 
//
//    cout << "Первая строка \n Вторая строка\n"; // задание 2
//    string s = "спецсимовлы \"\\\""; //задание 3
//    cout << s << endl; // вывод задания 
//    int a = 150;
//    float b = 15.933;
//    int c = 250;
//    cout << "a = " << a << "b = " << b << "c = " << c << endl;
//    int d = 3;
//    int m = 3;
//    int g = 2005;
//    cout << "моя дата рождения: " << d << m << g << endl;
// 
//} //конец 

//int main() {
//	int y;
//	cout << "vvedite chisllo: ";
//	cin >> y;
//	/*if (y < 10) {
//		cout << (y * 2);
//	}
//	else {
//		cout << (y / 10);
//	}*/ // ОБЫЧНЫЙ УСЛОВНЫЙ ОПЕРАТОР 
//	y = (y < 10) ? (y * 2) : (y / 10); // ТЕРНАРНЫЙ УСЛОВНЫЙ ОТПЕРАТОР
//	cout << y;
//}

// ЛАБ РАБОТА 2
// _________________задание 1_____________
//int main() {
//	cout << "enter 2 nums: ";
//	int num_1;
//	int num_2;
//	cin >> num_1 >> num_2;
//	cout << "sr_znach = " << ((num_1 + num_2) / 2)<< endl;
//	string operation;
//	cout << "enter operation: (*,/,+,-)" << endl;
//	cin >> operation;
//	if (operation == "*") {
//		cout << (num_1 * num_2);
//	}
//	else if (operation == "/") {
//		cout << (num_1 / num_2);
//	}
//	else if (operation == "+") {
//		cout << (num_1 + num_2);
//	}
//	else {
//		cout << (num_1 - num_2);
//	}
//}

/*int main() {
	cout << "enter 2 nums: ";
	int num_1;
	int num_2;
	cin >> num_1 >> num_2;
	cout << "sr_znach = " << ((num_1 + num_2) / 2)<< endl;
	char operation;
	cout << "enter operation: (*,/,+,-)" << endl;
	cin >> operation;
	switch (operation) {
	case '+': {
		cout << (num_1 + num_2) << endl;
		break;
	}
	case '-': {
		cout << (num_1 - num_2) << endl;
		break;
	}
	case '*': {
		cout << (num_1 * num_2) << endl;
		break;
	}
	case '/': {
		cout << (num_1 / num_2) << endl;
		break;
	}
	 }
}*/
//____________________задание 2____________
//int main() {
//	bool flag = true;
//	int num_1;
//	while (flag) {
//		cout << "enter num > 0\n";
//		cin >> num_1;
//		if (num_1 > 0) {
//			flag = false;
//		}
//	}
//	int sum_list = 0;
//	int list[]{ 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i < num_1; i++) {
//		sum_list += list[i];
//	}
//	cout << "vot summa chisel: " << sum_list << endl;
//	for (int i = 0; i < 10; i++) {
//		cout << list[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i ++) {
//		if (list[i] % 2 == 0) {
//			cout << list[i] << " ";
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++) {
//		if (list[i] % 2 == 1) {
//			cout << list[i] << " ";
//		}
//	}
//}

