#include <iostream>
using namespace std;

class MyClass {
public:

    void greet() {
        cout << "Hello, welcome to MyClass!" << endl;
    }


    int add(int a, int b) {
        return a + b;
    }
};

int main() {

    MyClass obj;


    obj.greet();


    int result = obj.add(5, 3);
    cout << "The result of addition is: " << result << endl;

    return 0;
}
