#include <iostream>
using namespace std;

int main() {
    int carCount = 0;
    int bikeCount = 0;
    int rickshawCount = 0;
    int choice;

    do {
        cout << "Parking Menu:" << endl;
        cout << "1. Park a car" << endl;
        cout << "2. Park a bike" << endl;
        cout << "3. Park a rickshaw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                carCount++;
                break;
            case 2:
                bikeCount++;
                break;
            case 3:
                rickshawCount++;
                break;
            case 4:
                cout << "Exiting the parking menu." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    cout << "Total vehicles parked:" << endl;
    cout << "Cars: " << carCount << endl;
    cout << "Bikes: " << bikeCount << endl;
    cout << "Rickshaws: " << rickshawCount << endl;

    return 0;
}
