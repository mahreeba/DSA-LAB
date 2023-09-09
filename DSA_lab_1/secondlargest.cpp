#include <iostream>
using namespace std;

int findSecondLargest(int* arr, int size) {
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout<<"Enter element of array: ";
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, size);
    cout << "The second largest element in the array is: " << secondLargest << endl;

    delete[] arr;

    getchar();

    return 0;
}