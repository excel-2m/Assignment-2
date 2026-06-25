#include <iostream>

int main() {
    // 1. Declare a suitable variable for temperature
    double temperature;

    std::cout << "==================================================" << std::endl;
    std::cout << "        AUTOMATED MOTOR TEMPERATURE MONITOR" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Monitoring active. Critical safety threshold: 90.0\u00B0C." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Prompt and read initial entry to establish loop condition
    std::cout << "Enter initial motor temperature (\u00B0C): ";
    std::cin >> temperature;

    // 2. Use a while loop to continue reading values while temperature is 90°C or below
    while (temperature <= 90.0) {
        // 3. Display each safe temperature reading
        std::cout << ">> Status: OPERATIONAL Safe (" << temperature << "\u00B0C)" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
        
        // Collect the next repeating stream measurement
        std::cout << "Enter next motor temperature (\u00B0C): ";
        std::cin >> temperature;
    }

    // 4. Stop when the temperature is greater than 90°C and display unsafe warning message
    std::cout << "\n==================================================" << std::endl;
    std::cout << "CRITICAL ALERT: Overheating detected (" << temperature << "\u00B0C)!" << std::endl;
    std::cout << "Motor temperature unsafe. Stop motor test." << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
