#include <iostream>
#include <string>

int main() {
    // Variable definition and threshold constraints
    const std::string CORRECT_CODE = "BEE208";
    const int MAX_ATTEMPTS = 3;
    
    int attempts = 0;
    std::string inputCode = "";
    bool isGranted = false;

    std::cout << "==================================================" << std::endl;
    std::cout << "        ENGINEERING LAB SECURE ACCESS GATE" << std::endl;
    std::cout << "==================================================" << std::endl;

    // Use a while loop with a counter to track structural attempt boundaries
    while (attempts < MAX_ATTEMPTS && !isGranted) {
        std::cout << "Attempt (" << (attempts + 1) << "/" << MAX_ATTEMPTS << ") - Enter Access Code: ";
        std::cin >> inputCode;

        attempts++; // Increment attempts counter

        // Validate the code string contents
        if (inputCode == CORRECT_CODE) {
            isGranted = true; // Flips loop control state condition flag
        } else {
            // Provide context for user interaction unless final failure is reached
            if (attempts < MAX_ATTEMPTS) {
                std::cout << ">> Warning: Invalid credentials. Try again.\n" << std::endl;
            }
        }
    }

    std::cout << "--------------------------------------------------" << std::endl;

    // Display appropriate outcome message outside loop scope
    if (isGranted) {
        std::cout << ">> STATUS: Authentication successful." << std::endl;
        std::cout << "Access granted." << std::endl;
    } else {
        std::cout << ">> STATUS: Critical lockout active." << std::endl;
        std::cout << "Access denied. Maximum attempts reached." << std::endl;
    }

    std::cout << "==================================================" << std::endl;
    return 0;
}
