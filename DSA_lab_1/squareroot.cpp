#include <iostream>
#include<math.h>
using namespace std;


void squareRoot(double* num, double* result) {
    *result = sqrt(*num);
}

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    
    double result;
    squareRoot(&num, &result);
    
    cout << "The square root of " << num << " is: " << result << endl;

    getchar();
    return 0;
}