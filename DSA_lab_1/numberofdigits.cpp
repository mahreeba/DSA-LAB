#include <iostream>
using namespace std;


void countDigits(int* number, int* digitCount) {
    int temp = *number;
    *digitCount = 0;

    while (temp != 0) {
        temp /= 10;
        (*digitCount)++;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digitCount;
    countDigits(&number, &digitCount);

    cout << "The number of digits in " << number << " is: " << digitCount << endl;


    getchar();
    return 0;
}