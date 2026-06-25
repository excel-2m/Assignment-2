#include <iostream>

int main() {
    // Define evaluation limits and accumulation structures
    const int TOTAL_READINGS = 10;
    double totalPower = 0.0;
    double reading = 0.0;

    std::cout << "==================================================" << std::endl;
    std::cout << "         GRID MONITORING DATA ACQUISITION" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Please enter 10 telemetry power load profiles." << std::endl;
    std::cout << "Note: Erroneous negative values will be skipped." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // 1. Use a for loop to accept 10 power readings
    for (int i = 1; i <= TOTAL_READINGS; ++i) {
        std::cout << "Enter power reading #" << i << " (W): ";
        std::cin >> reading;

        // 2. Check if the reading is negative
        if (reading < 0.0) {
            std::cout << ">> Warning: Invalid reading skipped.\n" << std::endl;
            // 3. Use continue to skip adding the negative value and go to next loop iteration
            continue; 
        }

        // Running aggregation only executed if continue condition is bypassed
        totalPower += reading;
        std::cout << "Running Valid Total: " << totalPower << " W" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
    }

    std::cout << "==================================================" << std::endl;
    // 4. Display the accumulated total of only the valid power readings
    std::cout << ">> SYSTEM DATA ANALYSIS COMPLETED." << std::endl;
    std::cout << ">> Total Valid Power Consumed: " << totalPower << " W" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
