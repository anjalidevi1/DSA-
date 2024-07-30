#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    unsigned long long fact = factorial(number);
    cout << "Factorial of " << number << " is " << fact << endl;

    return 0;
}
