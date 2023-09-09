#include <iostream>
using namespace std;


void findLargest(int* num1, int* num2, int* num3) {
    int largest = *num1;
    if (*num2 > largest) {
        largest = *num2;
    }
    if (*num3 > largest) {
        largest = *num3;
    }
    cout << "The largest number is: " << largest << endl;
}

int main() {
    int num1, num2, num3;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin>> num2 ;
    cout << "Enter third number: ";
    cin>> num3;

    findLargest(&num1, &num2, &num3);

    getchar();
    return 0;
}