#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// Функція для знаходження індексу третьої крапки
int FindThirdDot(char* s) {
    int dotCount = 0;
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '.') {
            dotCount++;
            if (dotCount == 3) {
                return i; // повертаємо індекс третьої крапки
            }
        }
        i++;
    }
    return -1; // повертаємо -1, якщо третя крапка не знайдена
}

// Функція для заміни кожного четвертого символу на крапку
char* ReplaceEveryFourth(char* s) {
    int i = 0;
    char* result = new char[101]; // виділяємо нову пам'ять для модифікованого рядка
    int j = 0; // індекс для нового рядка

    while (s[i] != '\0') {
        if ((i + 1) % 4 == 0) {
            result[j] = '.'; // замінюємо кожний четвертий символ на крапку
        }
        else {
            result[j] = s[i]; // копіюємо символ з оригінального рядка
        }
        i++;
        j++;
    }
    result[j] = '\0'; // додаємо символ кінця рядка
    return result; // повертаємо модифікований рядок
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    // Знаходимо індекс третьої крапки
    int thirdDotIndex = FindThirdDot(str);
    if (thirdDotIndex != -1) {
        cout << "Index of third dot: " << thirdDotIndex << endl;
    }
    else {
        cout << "The string does not contain three dots." << endl;
    }

    // Замінюємо кожний четвертий символ на крапку
    char* modifiedStr = ReplaceEveryFourth(str);
    cout << "Modified string: " << modifiedStr << endl;

    // Очищаємо пам'ять
    delete[] modifiedStr;

    return 0;
}
