#include <iostream>

int main() {
    // 1. Declare a suitable variable for voltage (double handles decimals)
    double voltage;

    // 2. Accept voltage input from the user
    std::cout << "Enter the voltage reading (V): ";
    std::cin >> voltage;

    // 3. Use if...else if...else statements to classify the voltage
    // 4. Display the correct voltage classification with units
    std::cout << "Classification for " << voltage << " V: ";

    if (voltage < 0.0) {
        std::cout << "Invalid voltage reading" << std::endl;
    } 
    else if (voltage <= 50.0) {
        std::cout << "Low voltage" << std::endl;
    } 
    else if (voltage <= 240.0) {
        std::cout << "Normal voltage" << std::endl;
    } 
    else if (voltage <= 415.0) {
        std::cout << "High voltage" << std::endl;
    } 
    else {
        std::cout << "Dangerous voltage" << std::endl;
    }

    return 0;
}
