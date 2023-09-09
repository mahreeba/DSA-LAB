#include <iostream>
using namespace std;

int sumOfEvenNumbers(int* arr, int size) {
    int sum = 0;
    int* ptr = arr;

    for (int i = 0; i < size; i++) {
        if (*ptr % 2 == 0) {
            sum += *ptr;
        }
        ptr++;
    }

    return sum;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the element of the array: ";

        cin >> arr[i];
    }

    int sum = sumOfEvenNumbers(arr, size);
    cout << "The sum of even numbers in the array is: " << sum << endl;

    delete[] arr;

    getchar();
    return 0;
}