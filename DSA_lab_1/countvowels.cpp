#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& str) {
    int count = 0;
    const char* ptr = str.c_str();

    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;
    }

    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int vowelCount = countVowels(str);
    cout << "The number of vowels in the string is: " << vowelCount << endl;

    getchar();
    return 0;
}