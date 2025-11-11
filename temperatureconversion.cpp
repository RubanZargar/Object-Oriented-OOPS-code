#include <iostream>
using namespace std;

int main() {
    double temp;
    int choice;

    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    cout << "1. To Fahrenheit\n2. To Kelvin\nChoice: ";
    cin >> choice;

    if (choice == 1)
        cout << "Fahrenheit = " << (temp * 9.0/5.0 + 32) << endl;
    else if (choice == 2)
        cout << "Kelvin = " << (temp + 273.15) << endl;
    else
        cout << "Invalid choice!" << endl;

    return 0;
}
