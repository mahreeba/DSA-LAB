#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5] = {5, 6, 7, 8, 9}, result[5];
    int *pta1 = &arr1[0], *pta2 = &arr2[0], *ptres = &result[0];

    for (int i = 0; i < 5; i++) {
        *ptres = *pta1 + *pta2;
        ptres++;
        pta1++;
        pta2++;
    }

    cout << "First array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Second array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    cout << "Resulting array is: ";
    for (int i = 0; i < 5; i++) {
        cout << result[i] << " ";
    }
    cout << endl;


    getchar();
    return 0;
}