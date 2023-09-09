#include <iostream>
using namespace std;

void factorial(int* num, int* result) {
    *result = 1;
    
    for (int i = 1; i <= *num; i++) {
        *result *= i;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int result;
    factorial(&num, &result);
    
    cout << "The factorial of " << num << " is: " << result << endl;

    getchar();
    return 0;
}