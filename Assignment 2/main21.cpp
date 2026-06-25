#include <iostream>

int main() {
    int choice;
    double primaryTurns = 0.0, secondaryTurns = 0.0;
    double primaryVoltage = 0.0, secondaryVoltage = 0.0;
    double result = 0.0;

    // Display the calculation menu
    std::cout << "==================================================" << std::endl;
    std::cout << "          TRANSFORMER PARAMETER CALCULATOR" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "1. Calculate turns ratio" << std::endl;
    std::cout << "2. Calculate secondary voltage" << std::endl;
    std::cout << "3. Calculate primary voltage" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Accept user choice
    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;
    std::cout << "--------------------------------------------------" << std::endl;

    // Use a switch statement to perform the selected calculation
    switch (choice) {
        case 1:
            std::cout << "Enter Primary Turns (Np): ";
            std::cin >> primaryTurns;
            std::cout << "Enter Secondary Turns (Ns): ";
            std::cin >> secondaryTurns;

            // Zero-division check for technical accuracy
            if (secondaryTurns == 0) {
                std::cout << ">> Error: Secondary turns cannot be zero." << std::endl;
            } else {
                result = primaryTurns / secondaryTurns;
                std::cout << ">> Calculated Turns Ratio (Np/Ns): " << result << std::endl;
            }
            break;

        case 2:
            std::cout << "Enter Primary Voltage (Vp): ";
            std::cin >> primaryVoltage;
            std::cout << "Enter Secondary Turns (Ns): ";
            std::cin >> secondaryTurns;
            std::cout << "Enter Primary Turns (Np): ";
            std::cin >> primaryTurns;

            if (primaryTurns == 0) {
                std::cout << ">> Error: Primary turns cannot be zero." << std::endl;
            } else {
                result = (primaryVoltage * secondaryTurns) / primaryTurns;
                std::cout << ">> Calculated Secondary Voltage: " << result << " V" << std::endl;
            }
            break;

        case 3:
            std::cout << "Enter Secondary Voltage (Vs): ";
            std::cin >> secondaryVoltage;
            std::cout << "Enter Primary Turns (Np): ";
            std::cin >> primaryTurns;
            std::cout << "Enter Secondary Turns (Ns): ";
            std::cin >> secondaryTurns;

            if (secondaryTurns == 0) {
                std::cout << ">> Error: Secondary turns cannot be zero." << std::endl;
            } else {
                result = (secondaryVoltage * primaryTurns) / secondaryTurns;
                std::cout << ">> Calculated Primary Voltage: " << result << " V" << std::endl;
            }
            break;

        default:
            std::cout << "Invalid selection! Please choose an option from 1 to 3." << std::endl;
            break;
    }

    std::cout << "==================================================" << std::endl;
    return 0;
}
