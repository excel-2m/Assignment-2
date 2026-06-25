#include <iostream>

int main() {
    // 1. Declare a suitable variable for resistance
    double resistance;

    std::cout << "==================================================" << std::endl;
    std::cout << "        ELECTRICAL EARTHING SYSTEM MONITOR" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Monitoring active. Maximum safe ground limit: 5.0 \u2126." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Prompt and read initial entry to establish loop condition
    std::cout << "Enter initial earth resistance reading (\u2126): ";
    std::cin >> resistance;

    // 2. Use a while loop to continue reading values while resistance is 5 Ohms or below
    while (resistance <= 5.0) {
        // 3. Display each safe resistance reading
        std::cout << ">> Status: COMPLIANT Safe (" << resistance << " \u2126)" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
        
        // Collect the next repeating stream measurement
        std::cout << "Enter next earth resistance reading (\u2126): ";
        std::cin >> resistance;
    }

    // 4. Stop when the resistance is greater than 5 Ohms and display unsafe error message
    std::cout << "\n==================================================" << std::endl;
    std::cout << "CRITICAL ALERT: Ground path fault detected (" << resistance << " \u2126)!" << std::endl;
    std::cout << "Earth resistance too high. Improve earthing system." << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
