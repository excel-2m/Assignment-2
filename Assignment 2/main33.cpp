#include <iostream>

int main() {
    // Define structural bounds and tracking variables
    const int MAX_APPLIANCES = 20;
    double rating = 0.0;
    double totalLoad = 0.0;

    std::cout << "==================================================" << std::endl;
    std::cout << "     BEE 208: ELECTRICAL DEMAND LOAD MANAGER" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Monitoring up to 20 appliances. Safety Limit: 5000 W." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // 1. Use a for loop to accept up to 20 appliance power ratings
    for (int i = 1; i <= MAX_APPLIANCES; ++i) {
        std::cout << "Enter power rating for Appliance #" << i << " (W): ";
        std::cin >> rating;

        // Accumulate individual element profile metric
        totalLoad += rating;

        // 2. Use an if statement to check whether total load exceeds 5000 W
        if (totalLoad > 5000.0) {
            std::cout << "\n>> CRITICAL: ALERT..." << std::endl;
            std::cout << "Maximum load exceeded. Stop adding appliances." << std::endl;
            
            // 3. Use break to stop accepting more appliances immediately
            break;
        }
        
        std::cout << "Current Total Load: " << totalLoad << " W" << std::endl;
        std::cout << "--------------------------------------------------" << std::endl;
    }

    std::cout << "--------------------------------------------------" << std::endl;
    // Display the final total load regardless of loop termination context
    std::cout << ">> FINAL EVALUATED TOTAL LOAD: " << totalLoad << " W" << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
