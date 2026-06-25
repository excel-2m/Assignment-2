#include <iostream>

using namespace std;

int main() {
    int choice;
    float voltage, current, time;
    float power, resistance, energy;

    do {
        cout << "\nElectrical Calculator Menu" << endl;
        cout << "1. Calculate Power" << endl;
        cout << "2. Calculate Resistance" << endl;
        cout << "3. Calculate Energy" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter voltage (V): ";
                cin >> voltage;
                cout << "Enter current (A): ";
                cin >> current;

                power = voltage * current;
                cout << "Power = " << power << " Watts" << endl;
                break;

            case 2:
                cout << "Enter voltage (V): ";
                cin >> voltage;
                cout << "Enter current (A): ";
                cin >> current;

                resistance = voltage / current;
                cout << "Resistance = " << resistance << " Ohms" << endl;
                break;

            case 3:
                cout << "Enter voltage (V): ";
                cin >> voltage;
                cout << "Enter current (A): ";
                cin >> current;
                cout << "Enter time (s): ";
                cin >> time;

                power = voltage * current;
                energy = power * time;

                cout << "Energy = " << energy << " Joules" << endl;
                break;

            case 4:
                cout << "Exiting calculator..." << endl;
                break;

            default:
                cout << "Invalid selection" << endl;
        }

    } while (choice != 4);

    return 0;
}
