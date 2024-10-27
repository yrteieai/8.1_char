#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// ������� ��� ����������� ������� ������ ������
int FindThirdDot(char* s) {
    int dotCount = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // ��������� ������ ������ ������
            }
        }
        i++;
    }
    return -1; // ��������� -1, ���� ����� ������ �� ��������
}

// ������� ��� ����� ������� ���������� ������� �� ������
char* ReplaceEveryFourth(char* s) {
    int i = 0;
    char* result = new char[101]; // �������� ���� ���'��� ��� �������������� �����
    int j = 0; // ������ ��� ������ �����

    while (s[i] != '\0') {
        if ((i + 1) % 4 == 0) {
            result[j] = '.'; // �������� ������ ��������� ������ �� ������
        }
        else {
            result[j] = s[i]; // ������� ������ � ������������ �����
        }
        i++;
        j++;
    }
    result[j] = '\0'; // ������ ������ ���� �����
    return result; // ��������� ������������� �����
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    // ��������� ������ ������ ������
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "The string does not contain three dots." << endl;
    }

    // �������� ������ ��������� ������ �� ������
    char* modifiedStr = ReplaceEveryFourth(str);
    cout << "Modified string: " << modifiedStr << endl;

    // ������� ���'���
    delete[] modifiedStr;

    return 0;
}
