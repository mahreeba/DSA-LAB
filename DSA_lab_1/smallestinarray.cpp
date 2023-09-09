#include <iostream>
using namespace std;

int findSmallest(int* arr, int size) {
    int smallest = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < smallest) {
            smallest = *(arr + i);
        }
    }

    return smallest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
    cout << "Enter the element of the array: ";

        cin >> *(arr + i);
    }

    int smallest = findSmallest(arr, size);
    cout << "The smallest element in the array is: " << smallest << endl;

    delete[] arr;

    getchar();
    return 0;
}