#include <iostream>

int main() {
    // Define the constant number of iterations
    const int TOTAL_APPLIANCES = 8;
    
    // Declare and initialize variables
    double power = 0.0;
    double time = 0.0;
    double energy = 0.0;
    double totalEnergy = 0.0;

    std::cout << "==================================================" << std::endl;
    std::cout << "        APPLIANCE ENERGY CONSUMPTION TRACKER" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Please input parameters for all " << TOTAL_APPLIANCES << " appliances." << std::endl;

    // Use a for loop to accept power rating and usage time for 8 appliances
    for (int i = 1; i <= TOTAL_APPLIANCES; ++i) {
        std::cout << "\n--- Appliance #" << i << " ---" << std::endl;
        std::cout << "Enter Power Rating (Watts): ";
        std::cin >> power;
        std::cout << "Enter Usage Time (Hours): ";
        std::cin >> time;

        // Calculate Energy = Power * Time
        energy = power * time;
        
        // Accumulate to total energy consumption
        totalEnergy += energy;
    }

    std::cout << "\n--------------------------------------------------" << std::endl;
    
    // Display the total power/energy consumed by all appliances in watt-hours
    std::cout << ">> Total Energy Consumed: " << totalEnergy << " Wh" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
