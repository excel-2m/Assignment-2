#include <iostream>

int main() {
    // Define the constant number of fixtures
    const int TOTAL_POINTS = 12;
    
    // Declare and initialize variables
    double totalLoad = 0.0;
    double wattage = 0.0;

    std::cout << "==================================================" << std::endl;
    std::cout << "        BUILDING LIGHTING LOAD CALCULATOR" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Please enter the wattage for all " << TOTAL_POINTS << " lighting points." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // 1. Use a for loop to accept 12 lighting points
    for (int i = 1; i <= TOTAL_POINTS; ++i) {
        std::cout << "Enter wattage for Lighting Point #" << i << " (W): ";
        std::cin >> wattage;

        // 2. Add each resistor/load value to the total resistance/load
        totalLoad += wattage;
    }

    std::cout << "--------------------------------------------------" << std::endl;
    
    // 3. Display the total power in watts
    std::cout << ">> Total Calculated Lighting Load: " << totalLoad << " W" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
