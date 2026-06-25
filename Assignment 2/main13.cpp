#include <iostream>

using namespace std;

int main() {
    float voltage;
    int n;

    cout << "Enter number of battery readings: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Enter battery voltage " << i << " (V): ";
        cin >> voltage;

        if (voltage >= 10.5) {
            cout << "Battery voltage normal" << endl;
        }
        else {
            cout << "Low battery detected" << endl;
        }
    }

    return 0;
}
