#include <iostream>

int main() {
    // Define structural bounds
    const int MAX_READINGS = 10;
    double resistance;

    std::cout << "==================================================" << std::endl;
    std::cout << "       INSULATION RESISTANCE DIAGNOSTIC TEST" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "Analyzing up to 10 points. Critical limit: 1.0 M\u2126." << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // 1. Use a for loop to accept up to 10 insulation resistance readings
    for (int i = 1; i <= MAX_READINGS; ++i) {
        std::cout << "Enter reading for Test Point #" << i << " (M\u2126): ";
        std::cin >> resistance;

        // 2. Use an if statement to check whether resistance is below 1 megaohm
        if (resistance < 1.0) {
            // Display appropriate message for low insulation reading fault
            std::cout << ">> ALERT: Insulation failure detected (" << resistance << " M\u2126). Test stopped." << std::endl;
            
            // 3. Use break to stop the loop immediately when a failure is detected
            break; 
        } 
        else {
            // Display appropriate message for normal reading
            std::cout << ">> Status: Insulation reading acceptable." << std::endl;
            std::cout << "--------------------------------------------------" << std::endl;
        }
    }

    std::cout << "\nDiagnostic sequence finalized." << std::endl;
    std::cout << "==================================================" << std::endl;
    return 0;
}
