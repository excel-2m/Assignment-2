#include <iostream>

int main() {
    // 1. Declare suitable variables for the currents
    double ratedCurrent;
    double measuredCurrent;

    // 2. Accept the rated current from the user
    std::cout << "Enter the rated current of the circuit breaker (A): ";
    std::cin >> ratedCurrent;

    // 3. Accept the measured current from the user
    std::cout << "Enter the measured current in the circuit (A): ";
    std::cin >> measuredCurrent;

    std::cout << "------------------------------------------------" << std::endl;

    // 4. Compare the measured current with the rated current using if...else
    if (measuredCurrent > ratedCurrent) {
        std::cout << "Overload detected. Circuit breaker should trip." << std::endl;
    } 
    else {
        std::cout << "Current is within safe limit." << std::endl;
    }

    return 0;
}
