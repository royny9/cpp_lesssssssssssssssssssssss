

#include <iostream> // библиотека дял работы с потоками ввода вывода 
#include "staticfunction.h"
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
// --------------задание 3---------------
//int function_10(int num) {
//	int sum_nums = 0;
//	if (num <= 0) {
//		return 0;
//	}
//	else {
//		for (int i = 0; i <= num; i++) {
//			sum_nums += i;
//		}
//		return sum_nums;
//	}
//}
//
//int test_func(int par) {
//	par = 1;
//	if (par <= 0) {
//		return 0;
//	}
//	else {
//		int sum = 0;
//		for (int i = 0; i <= par; i++) {
//			sum += i;
//		}
//		return sum;
//	}
//}
//
//int funcref(int a, int b, int& c, int& d)
//{
//	c = a + b;
//	d = a * b;
//	return c, d;
//}
//int main() {
//	setlocale(LC_ALL, "Russian");
//	int sum_array = 0;
//	int A[2][3] = { {0,1,2},
//					{3,4,5}};
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			sum_array += A[i][j];
//		}
//	}
//	cout << sum_array << endl;
//	int sec_list[3];
//	sec_list[0] = A[0][0] + A[1][0];
//	sec_list[1] = A[0][1] + A[1][1];
//	sec_list[2] = A[0][2] + A[1][2];
//	for (int i = 0; i < 3; i++) {
//		cout << sec_list[i];
//	}
//	float num = 20.84;
//	float &rnum = num;
//	float &lnum = num;
//	rnum = 32;
//	cout << endl;
//	cout << num << " " << rnum << " " << lnum << " " << endl;
//
//	int number_for_10;
//	cout << "Enter your num: ";
//	cin >> number_for_10;
//	int fnc_10 = function_10(number_for_10);
//	int test_f = test_func(number_for_10);
//	cout << "resoult: " << fnc_10 << "\n" << "test whith per 1: " << test_f << endl;
//
//
//	int num1, num2, sum_nums, mn;
//	cout << "Введите число a: ";
//	cin >> num1;
//	cout << "Введите число b: ";
//	cin >> num2;
//	funcref(num1, num2, sum_nums, mn);
//
//	cout << "c = a + b = " << sum_nums << endl;
//	cout << "d = a * b = " << mn << endl;
//
//	string st = "pisyatdva";
//	for (int i = 0; i < 3; i++) {
//		string st_sec = "RAZYEZD_CHUSHPANI";
//		cout << st << endl;
//		cout << st_sec << endl;
//	}
//}
//_____________________задание 4_______________

//1.   Создайте функцию с одним параметром, внутри которой объявите статическую переменную с начальным значением равным 0.
//
//2.   Внутри функции выведите в консоль сумму переданного числа и статической переменной.После этого статической переменной присвойте значение переданного числа.
//
//3.   Вызовите функцию несколько раз с разными параметрами и проанализируйте полученный результат.
//
//4.   Добавьте пространства имён, чтобы избавиться в коде от std::cout и std::endl, используемых в функции
//
//5.   Создайте макрос, который будет вычислять сумму двух переданных чисел.
//
//6.   Перенесите функцию(со статической переменной) в отдельные файлы(.h и.cpp).
//
//7.   Объявите пространство имён для этой функции.
//
//8.   Добейтесь того, чтобы функция main заработала корректно после переноса.
//
//9.   Сделайте релизную сборку созданного проекта.

int main() {
	staticfunc::staticfunc(52);
	staticfunc::staticfunc(53);
	staticfunc::staticfunc(54);



	#define SUM(n1,n2) ((n1)+(n2))
	int res = SUM(52, 53);
	cout << "macros resoult: " << res << endl;

}