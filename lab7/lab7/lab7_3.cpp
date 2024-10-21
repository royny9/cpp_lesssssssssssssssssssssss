#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;
    ofstream outFile("output.txt", ios::app);  // ��������� ���� ��� ���������� 

    // �������� �� �������� �������� �����
    if (!outFile) {
        cerr << "������ ��� �������� �����!" << endl;
        return 1;
    }

    while (true) {
        cout << "������� ������ (��� 'read' ��� ������, 'erase' ��� �������, 'exit' ��� ������): ";
        getline(cin, input);

        if (input == "read") {
            // ������ ����������� �����
            ifstream inFile("output.txt");
            if (inFile) {
                string line;
                cout << "���������� �����:" << endl;
                while (getline(inFile, line)) {
                    cout << line << endl;
                }
                inFile.close();
            }
            else {
                cerr << "������ ��� �������� ����� ��� ������!" << endl;
            }
        }
        else if (input == "erase") {
            // ������� �����
            outFile.close();  // ��������� ���� ��� ������
            ofstream clearFile("output.txt", ios::trunc);  // ��������� ���� � ������ �������
            clearFile.close(); // ��������� ����� ��������� ���������
            cout << "���� ������." << endl;
            outFile.open("output.txt", ios::app); // ����� ��������� ���� ��� ����������
        }
        else if (input == "exit") {
            // ����� �� ���������
            break;
        }
        else {
            // ������ ��������� ������ � ����
            outFile << input << endl;
        }
    }

    outFile.close();  // ��������� ���� ����� �����������
    return 0;
}