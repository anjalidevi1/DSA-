#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// Function to check if a character is a consonant
bool isConsonant(char ch) {
    ch = tolower(ch);
    return (ch >= 'a' && ch <= 'z' && !isVowel(ch));
}

int main() {
    ifstream file("example.txt");
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name;
        int age;

        ss >> name >> age;
        if (ss.fail()) {
            cerr << "Invalid data format in line: " << line << endl;
            continue;
        }

        int vowelCount = 0, consonantCount = 0;
        for (char ch : name) {
            if (isVowel(ch)) {
                vowelCount++;
            } else if (isConsonant(ch)) {
                consonantCount++;
            }
        }

        cout << "Name: " << name << ", Vowels: " << vowelCount << ", Consonants: " << consonantCount << endl;
    }

    file.close();
    return 0;
}
