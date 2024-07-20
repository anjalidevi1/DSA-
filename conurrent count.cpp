#include <iostream>
using namespace std;

void countConsecutiveNumbers(int arr[], int n) {
    if (n == 0) return;

    int currentCount = 1;
    int currentValue = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] == currentValue) {
            currentCount++;
        } else {
            cout << "Consecutive " << currentValue << "s count: " << currentCount << endl;
            currentValue = arr[i];
            currentCount = 1;
        }
    }
    cout << "Consecutive " << currentValue << "s count: " << currentCount << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (0s and 1s) of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    countConsecutiveNumbers(arr, n);

    return 0;
}
