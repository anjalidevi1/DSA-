#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string username, password;

    // Take user input for username and password
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    // Open the file to write
    ofstream file("credentials.txt");
    if (!file.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    // Write username and password to the file
    file << "Username: " << username << endl;
    file << "Password: " << password << endl;

    file.close();

    // Inform the user that credentials have been saved
    cout << "Credentials saved to credentials.txt" << endl;

    // Read and display the content of the file
    ifstream infile("credentials.txt");
    if (!infile.is_open()) {
        cerr << "Error opening file" << endl;
        return 1;
    }

    string line;
    cout << "Stored credentials:" << endl;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
    return 0;
}
