#include <iostream>

int main() {
    const int TOTAL_READINGS = 12;
    double totalValue = 0.0;
    double reading = 0.0;
    int validCount = 0;

    std::cout << "==================================================" << std::endl;
    std::cout << "            AUTOMATED SENSOR DATA LOGGGER" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Processing 12 readings. Faulty flag value [999] will be omitted." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // 1. Use a for loop to accept 12 sensor readings
    for (int i = 1; i <= TOTAL_READINGS; ++i) {
        std::cout << "Enter sensor reading #" << i << ": ";
        std::cin >> reading;

        // 2. Treat readings exactly equal to 999 as faulty
        if (reading == 999) {
            std::cout << ">> WARNING: Faulty sensor reading detected. Skipping..." << std::endl;
            // 3. Use continue to skip faulty readings
            continue;
        }

        // Processing only happens if continue statement is bypassed
        totalValue += reading;
        validCount++;
    }

    std::cout << "--------------------------------------------------" << std::endl;

    // 4. Calculate and display the average of only valid temperature readings
    if (validCount > 0) {
        double averageValue = totalValue / validCount;
        std::cout << "Total Valid Readings Logged: " << validCount << " out of " << TOTAL_READINGS << std::endl;
        std::cout << "Calculated Sensor Average: " << averageValue << std::endl;
    } else {
        std::cout << "Error: No valid data recorded. Cannot compute average." << std::endl;
    }

    std::cout << "==================================================" << std::endl;
    return 0;
}
