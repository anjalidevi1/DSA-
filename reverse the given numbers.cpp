#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    cout << "Numbers in reverse order: ";
    for (int i = n - 1; i >= 0; --i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
