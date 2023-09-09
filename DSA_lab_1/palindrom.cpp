#include <iostream>
using namespace std;

bool isPalindrome(int* num) {
    int originalNum = *num;
    int reversedNum = 0;
    while (*num != 0) {
        int digit = *num % 10;
        reversedNum = reversedNum * 10 + digit;
        *num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int num,onum;
    cout << "Enter a number: ";
    cin >> num;
    onum = num;

    if (isPalindrome(&num)) {
        cout << onum << " is a palindrome." << endl;
    } else {
        cout << onum << " is not a palindrome." << endl;
    }


    getchar();
    return 0;
}