#include <iostream>
using namespace std;

void getASCII(char* character, int* asciiValue) {
    *asciiValue = static_cast<int>(*character);
}

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    int asciiValue;
    getASCII(&character, &asciiValue);

    cout << "The ASCII value of " << character << " is: " << asciiValue << endl;


    getchar();
    return 0;
}