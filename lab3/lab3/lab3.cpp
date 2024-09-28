#include <iostream>


using namespace std;

void printArr(int* begin, int* end);
void diff(int a, int d);
void summ(int a, int d);
void chfunc(char ch);

typedef int (*FuncPtr)(int, int);

FuncPtr getOperation(char fyn) {
	if (fyn == '+') {
		return &sum;
	}
	else if (fyn == '-') {
		return &raznost;
	}
	else {
		return nullptr;
	}
}


int main() {
	int* point;
	int x = 52;
	point = &x;


	cout << "point = " << point<< endl;
	cout << "*point = " << *point << endl;

	*point = 1488;
	cout << "x = " << x << "point = " << *point << endl;
	
	
	int array[5] = { 1,2,3,4,5 };
	for (int* i = array; i != array + 5; i++) {
		cout << *i << endl;
	}


	int num2 = 5;
	const int* point1;
	point1 = &num2;
	
	cout << point1 << " " << *point1 << endl;
	num2 = 10;
	cout << point1 << " " << *point1 << endl;
	//point1 = &x;// ошибка
	
	int array1[5] = { 1,2,3,4,5 };
	printArr(begin(array1), end(array1));
	cout << "____________" << endl;
	
	int a = 15;
	int b = 10;
	diff(a, b);
	summ(a, b);

	myFunc = getOperation('-');
	res = myFunc(5, 3);
	cout << "diff: " << res << endl;

	cout << "summ2: " << sum(5, 3) << endl;

	cout << "diff2: " << raznost(5, 3) << endl;


	float* myFloat = new float;
	*myFloat = 3.14;
	cout << "myFloat: " << *myFloat << endl;
	delete myFloat;
}

void diff(int a, int d) {
	cout << (a - d) << endl;
}

void summ(int a, int d) {
	cout << (a + d) << endl;
}

void printArr(int* begin, int* end) {
	int sum_array = 0;
	for (int* i = begin; i < end; i++) {
		sum_array += *i;
	}
	cout << sum_array << endl;
}