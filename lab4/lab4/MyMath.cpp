#include "MyMath.h"
#include <iostream> // ���������� ��� ������ � �������
using namespace std;

// ������������� ����������� ����������
int MyMath::callCount = 0;

// ���������� ������ ��������
int MyMath::Add(int a, int b) {
    callCount++; // ����������� ������� �������
    cout << "Add(" << a << ", " << b << ") = " << (a + b) << endl; // ����� ����������
    return a + b;
}

// ���������� ������ ���������
int MyMath::Sub(int a, int b) {
    callCount++; // ����������� ������� �������
    cout << "Sub(" << a << ", " << b << ") = " << (a - b) << endl; // ����� ����������
    return a - b;
}

// ���������� ������ ���������
int MyMath::Mult(int a, int b) {
    callCount++; // ����������� ������� �������
    cout << "Mult(" << a << ", " << b << ") = " << (a * b) << endl; // ����� ����������
    return a * b;
}

// ���������� ������ �������
double MyMath::Div(int a, int b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl; // ����� ��������� �� ������
        return 0; // ���������� 0 ��� ����� ��������� ����������
    }
    callCount++; // ����������� ������� �������
    double result = static_cast<double>(a) / b;
    cout << "Div(" << a << ", " << b << ") = " << result << endl; // ����� ����������
    return result;
}