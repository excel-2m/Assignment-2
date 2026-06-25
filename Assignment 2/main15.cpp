#include <iostream>

using namespace std;

int main() {
    float power, totalLoad = 0;

    // Accept appliance power ratings continuously
    while (totalLoad <= 3000) {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad = totalLoad + power;
    }

    // Output after limit is exceeded
    cout << "Load limit exceeded. Do not add more appliances." << endl;
    cout << "Final total load = " << totalLoad << " W" << endl;

    return 0;
}
