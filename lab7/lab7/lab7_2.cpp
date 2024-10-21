
// ______________________1-2________________
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string name;
    cout << "������� ���� ���: ";
    getline(cin, name);

    // 2. ���������� ��������� ��� �������� ������������ �����
    // ��� ������ ���������� � ��������� �����, ��������� ������ ����� � ���� ������ �� 2 �� 32 ��������
    regex pattern("^[A-Z][a-zA-Z�-��-߸�]{1,31}$");

    // ��������� ������������ �����
    if (regex_match(name, pattern)) {
        cout << "��� ���������!" << endl;
    }
    else {
        cout << "��� �����������! ���������, ��� ��� ���������� � ��������� �����, �������� ������ ����� � ������ �� 2 �� 32 ��������." << endl;
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
    // 3. ������ ��������� ���������� � ������������ �������, ���������� e-mail ������
    string text = "e-mail ������: aliceasd@example.com, bob.smith@domain.org, charasdlie@gmail.com. "
        "����� ������, ��� test-asdemail@company.com � hello+wasdorld@mail.co.uk ����� �������.";

    // 4. ���������� ��������� ��� ���������� e-mail �������
    regex email_pattern(R"(([\w\.-]+@[\w\.-]+\.[a-zA-Z]{2,6}))");

    // ������ ��� �������� ��������� email �������
    vector<string> emails;

    // ���������� �������� ��� ������ ���� ���������� � �������� ������
    auto it = sregex_iterator(text.begin(), text.end(), email_pattern);
    auto it_end = sregex_iterator();

    // ������� ��������� email ������
    cout << "��������� e-mail ������:" << endl;
    for (; it != it_end; ++it) {
        emails.push_back(it->str()); // ��������� ��������� ����� � ������
        cout << it->str() << endl;    // ������� �� �������
    }
}