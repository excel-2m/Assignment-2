#include <iostream>

int main() {
    // Variable declarations
    double voltage = 0.0;
    double current = 0.0;
    double resistance = 0.0;
    char userChoice;

    std::cout << "==================================================" << std::endl;
    std::cout << "        OHM'S LAW RESISTANCE CALCULATOR" << std::endl;
    std::cout << "==================================================" << std::endl;

    // 1. Use a do...while loop to repeat the core calculation process
    do {
        std::cout << "\nEnter Circuit Parameters:" << std::endl;
        std::cout << "Enter Voltage (V): ";
        std::cin >> voltage;
        std::cout << "Enter Current (A): ";
        std::cin >> current;

        // 2. Validate current value to prevent division by zero math errors
        if (current == 0.0) {
            std::cout << ">> Error: Indeterminate system. Current cannot be 0 A." << std::endl;
        } else {
            // Apply structural formula: Resistance = Voltage / Current
            resistance = voltage / current;
            std::cout << ">> Calculated Resistance: " << resistance << " Ohms (\u2126)" << std::endl;
        }

        std::cout << "--------------------------------------------------" << std::endl;
        
        // 3. Ask the user whether they want to continue
        std::cout << "Do you want to perform another calculation? (Y/N): ";
        std::cin >> userChoice;
        std::cout << "--------------------------------------------------" << std::endl;

    // 4. The programme stops when the user enters N or n
    } while (userChoice != 'N' && userChoice != 'n');

    std::cout << "\nCalculations finalized. System exiting. Goodbye!" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
