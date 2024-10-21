#include <iostream>
#include <vector>

using namespace std;

// ������� ��� ������ ������� � �������
void printVector(const vector<float>& vec) {
    cout << "���������� �������: ";
    for (const float& element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

int main() {
    // 1. ������� ������ ������ � ����� float.
    vector<float> myVector;

    // 2. ��������� 5 ��������� � ������.
    myVector.push_back(1.1);
    myVector.push_back(2.2);
    myVector.push_back(3.3);
    myVector.push_back(4.4);
    myVector.push_back(5.5);
    // 5. 
    myVector.insert(myVector.begin() + 3, 3.75); 

    // 7. 
    myVector.pop_back(); 

    // 8. ��������� ������������ ����������, ������� ������ � �������.
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
    // ����������� ������� ��� ���������� ����� ���� ����-��������
    static void Add(const string& key, const string& value) {
        settingsMap[key] = value;
    }

    // ����������� ������� ��� ��������� �������� �� �����
    static string Get(const string& key) {
        if (settingsMap.find(key) != settingsMap.end()) {
            return settingsMap[key]; // ���������� ��������
        }
        else {
            return "���� �� ������"; // ��������� �� ���������� �����
        }
    }

    //  ������� ��� ������ ����������� ����� � �������
    static void Print() {
        cout << "���������� ���������:" << endl;
        for (const auto& pair : settingsMap) {
            cout << pair.first << ": " << pair.second << endl;
        }
    }
};

// �������������� ����������� ����
map<string, string> Settings::settingsMap;

int main() {
    setlocale(LC_ALL, "Russian");
    // ��������� ���������
    Settings::Add("Resolution", "����");
    Settings::Add("Volume", "������ �������� ������");
    Settings::Add("Language", "�����");

    // ��������� ��������� ��������
    cout << "����: " << Settings::Get("Language") << endl; // English
    cout << "�������� ��������������� �����: " << Settings::Get("�� ������������") << endl; // ���� �� ������

    // ������� ��� ���������
    Settings::Print();

    return 0;
}