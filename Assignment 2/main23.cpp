#include <iostream>

int main() {
    // Define the fixed number of phase measurement sets
    const int TOTAL_SETS = 6;
    
    // Declare phase lines and result variables
    double line1 = 0.0, line2 = 0.0, line3 = 0.0;
    double averageCurrent = 0.0;

    std::cout << "==================================================" << std::endl;
    std::cout << "      BEE 208: THREE-PHASE CURRENT ANALYSER" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Provide Line 1, Line 2, and Line 3 inputs for " << TOTAL_SETS << " sets." << std::endl;

    // Use a for loop to accept 6 sets of current readings
    for (int setNum = 1; setNum <= TOTAL_SETS; ++setNum) {
        std::cout << "\n--------------------------------------------------" << std::endl;
        std::cout << " READINGS FOR PHASE SET #" << setNum << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
        
        std::cout << "Enter Line 1 Current (A): ";
        std::cin >> line1;
        std::cout << "Enter Line 2 Current (A): ";
        std::cin >> line2;
        std::cout << "Enter Line 3 Current (A): ";
        std::cin >> line3;

        // Calculate the average current for the current set
        averageCurrent = (line1 + line2 + line3) / 3.0;

        // Display the answer with correct units
        std::cout << ">> Average Current for Set #" << setNum << ": " << averageCurrent << " A" << std::endl;
    }

    std::cout << "\n==================================================" << std::endl;
    std::cout << "             DATA LOGGING COMPLETED" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
