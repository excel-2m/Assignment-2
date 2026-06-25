#include <iostream>

int main() {
    // 1. Declare a suitable variable for voltage
    double voltage;

    std::cout << "==================================================" << std::endl;
    std::cout << "        SOLAR INVERTER OPERATIONS MONITOR" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Monitoring active. Minimum operating threshold: 18.0 V." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Prompt and read initial entry to establish loop condition
    std::cout << "Enter initial solar panel voltage (V): ";
    std::cin >> voltage;

    // 2. Use a while loop to continue reading values while voltage is 18 V or above
    while (voltage >= 18.0) {
        // 3. Display each safe/operational voltage reading
        std::cout << ">> Status: OPERATIONAL (" << voltage << " V)" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
        
        // Collect the next repeating stream measurement
        std::cout << "Enter next solar panel voltage (V): ";
        std::cin >> voltage;
    }

    // 4. Stop when the voltage drops below 18 V and display low operating message
    std::cout << "\n==================================================" << std::endl;
    std::cout << "ALERT: Drop-off voltage threshold reached (" << voltage << " V)!" << std::endl;
    std::cout << "Solar panel voltage below operating level." << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
