#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main() {
    ifstream file("example.txt");
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    map<string, int> wordCount;
    string line, word;

    while (getline(file, line)) {
        stringstream ss(line);
        while (ss >> word) {
            wordCount[word]++;
        }
    }

    file.close();

    for (const auto& pair : wordCount) {
        cout << "Word: " << pair.first << ", Count: " << pair.second << endl;
    }

    return 0;
}
