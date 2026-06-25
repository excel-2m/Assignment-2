#include <iostream>

int main() {
    // Define the fixed number of components to test
    const int TOTAL_COMPONENTS = 15;
    
    // Counters initialized to 0
    int passCount = 0;
    int failCount = 0;
    int testResult = 0;

    std::cout << "==================================================" << std::endl;
    std::cout << "      ELECTRONIC COMPONENT QA TEST LOGGER" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Please log results for all " << TOTAL_COMPONENTS << " batch components." << std::endl;
    std::cout << "Rules: Enter 1 for PASS | Enter 0 for FAIL" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // 1. Use a for loop to accept 15 temperature/status readings
    for (int i = 1; i <= TOTAL_COMPONENTS; ++i) {
        std::cout << "Component #" << i << " status: ";
        std::cin >> testResult;

        // 2. Use if...else to check each reading and count them
        if (testResult == 1) {
            passCount++; // Increment pass tracker
        } 
        else {
            failCount++; // Increment fail tracker
        }
    }

    std::cout << "--------------------------------------------------" << std::endl;
    
    // Display the final summary evaluation metrics
    std::cout << ">> BATCH QUALITY CONTROL SUMMARY:" << std::endl;
    std::cout << "   Total Passed Components [1]: " << passCount << std::endl;
    std::cout << "   Total Failed Components [0]: " << failCount << std::endl;
    std::cout << "==================================================" << std::endl;

    return 0;
}
