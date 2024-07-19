#include <iostream>
using namespace std;

class MyVector {
private:
    int* data;
    size_t size;
    size_t capacity;

    void resize() {
        capacity *= 2;
        int* newData = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

public:
    MyVector(size_t initialCapacity = 10) : size(0), capacity(initialCapacity) {
        data = new int[capacity];
    }

    ~MyVector() {
        delete[] data;
    }

    void push_back(int value) {
        if (size == capacity) resize();
        data[size++] = value;
    }

    size_t getSize() const {
        return size;
    }

    int operator[](size_t index) const {
        return data[index];
    }
};

int main() {
    MyVector vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    for (size_t i = 0; i < vec.getSize(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
