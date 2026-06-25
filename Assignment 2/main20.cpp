#include <iostream>

int main() {
    int choice;
    double inputValue = 0.0;
    double convertedValue = 0.0;

    // Display the conversion menu
    std::cout << "==================================================" << std::endl;
    std::cout << "      ELECTRICAL MEASUREMENT UNIT CONVERTER" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "1. Convert volts to millivolts (V to mV)" << std::endl;
    std::cout << "2. Convert amperes to milliamperes (A to mA)" << std::endl;
    std::cout << "3. Convert kilowatts to watts (kW to W)" << std::endl;
    std::cout << "4. Convert ohms to kilo-ohms (\u2126 to k\u2126)" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Accept user choice
    std::cout << "Enter your choice (1-4): ";
    std::cin >> choice;
    std::cout << "--------------------------------------------------" << std::endl;

    // Use a switch statement to select and execute the conversion
    switch (choice) {
        case 1:
            std::cout << "Enter value in Volts (V): ";
            std::cin >> inputValue;
            convertedValue = inputValue * 1000.0;
            std::cout << ">> Result: " << inputValue << " V = " << convertedValue << " mV" << std::endl;
            break;

        case 2:
            std::cout << "Enter value in Amperes (A): ";
            std::cin >> inputValue;
            convertedValue = inputValue * 1000.0;
            std::cout << ">> Result: " << inputValue << " A = " << convertedValue << " mA" << std::endl;
            break;

        case 3:
            std::cout << "Enter value in Kilowatts (kW): ";
            std::cin >> inputValue;
            convertedValue = inputValue * 1000.0;
            std::cout << ">> Result: " << inputValue << " kW = " << convertedValue << " W" << std::endl;
            break;

        case 4:
            std::cout << "Enter value in Ohms (\u2126): ";
            std::cin >> inputValue;
            convertedValue = inputValue / 1000.0;
            std::cout << ">> Result: " << inputValue << " \u2126 = " << convertedValue << " k\u2126" << std::endl;
            break;

        default:
            std::cout << "Invalid selection! Please choose a valid option (1-4)." << std::endl;
            break;
    }

    std::cout << "==================================================" << std::endl;
    return 0;
}
