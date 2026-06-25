#include <iostream>

using namespace std;

int main() {
    float temperature, sum = 0, average;
    int count = 0;

    // Loop for 10 readings
    for (int i = 1; i <= 10; i++) {
        cout << "Enter temperature " << i << " (°C): ";
        cin >> temperature;

        // Check invalid reading
        if (temperature < 0) {
            cout << "Invalid reading" << endl;
            continue;
        }

        sum += temperature;
        count++;
    }

    // Avoid division error (optional safety)
    if (count > 0) {
        average = sum / count;
        cout << "Average temperature = " << average << " °C" << endl;
    } else {
        cout << "No valid readings to calculate average" << endl;
    }

    return 0;
}
