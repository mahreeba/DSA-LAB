#include <iostream>
using namespace std;

void sumDigits(int* number, int* digitSum) {
    int temp = *number;
    *digitSum = 0;

    while (temp != 0) {
        *digitSum += temp % 10;
        temp /= 10;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int digitSum;
    sumDigits(&number, &digitSum);

    cout << "The sum of the digits in " << number << " is: " << digitSum << endl;

    getchar();
    return 0;
}