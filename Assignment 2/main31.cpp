#include <iostream>

int main() {
    // Variable declarations
    double voltage = 0.0;
    double current = 0.0;
    double power = 0.0;
    char userChoice;

    std::cout << "==================================================" << std::endl;
    std::cout << "              DC POWER CALCULATOR" << std::endl;
    std::cout << "==================================================" << std::endl;

    // 1. Use a do...while loop to repeat the core calculation process
    do {
        std::cout << "\nEnter Circuit Parameters:" << std::endl;
        std::cout << "Enter Voltage (V): ";
        std::cin >> voltage;
        std::cout << "Enter Current (A): ";
        std::cin >> current;

        // Apply structural formula: Power = Voltage * Current
        power = voltage * current;
        std::cout << ">> Calculated Power: " << power << " Watts (W)" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
        
        // 2. Ask the user whether to perform another calculation
        std::cout << "Do you want to perform another calculation? (Y/N): ";
        std::cin >> userChoice;
        std::cout << "--------------------------------------------------" << std::endl;

    // 3. The programme continues while the user enters Y or y
    } while (userChoice == 'Y' || userChoice == 'y');

    std::cout << "\nCalculations finalized. System exiting. Goodbye!" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
