#include <iostream>

int main() {
    // Variable to hold user choice
    int choice;

    // Display the fuse rating menu
    std::cout << "==================================================" << std::endl;
    std::cout << "   BEE 208: FUSE RATING APPLICATION SELECTOR" << std::endl;
    std::cout << "==================================================" << std::endl;
    std::cout << "1. 5 A Fuse" << std::endl;
    std::cout << "2. 10 A Fuse" << std::endl;
    std::cout << "3. 13 A Fuse" << std::endl;
    std::cout << "4. 20 A Fuse" << std::endl;
    std::cout << "5. 32 A Fuse" << std::endl;
    std::cout << "--------------------------------------------------" << std::endl;

    // Accept user choice
    std::cout << "Select an option (1-5): ";
    std::cin >> choice;
    std::cout << "--------------------------------------------------" << std::endl;

    // Use a switch statement to display the selected component application
    switch (choice) {
        case 1:
            std::cout << "Selected: 5 A Fuse\n"
                      << "Application: Primarily used for domestic lighting circuits, "
                      << "clock radios, and small fans." << std::endl;
            break;
        case 2:
            std::cout << "Selected: 10 A Fuse\n"
                      << "Application: Commonly applied in high-load lighting schemes, "
                      << "small immersion heaters, and dedicated processing equipment." << std::endl;
            break;
        case 3:
            std::cout << "Selected: 13 A Fuse\n"
                      << "Application: Standard rating for wall-plug appliances like "
                      << "electric kettles, irons, and microwaves." << std::endl;
            break;
        case 4:
            std::cout << "Selected: 20 A Fuse\n"
                      << "Application: Used for radial power circuits, heavy machinery, "
                      << "and large commercial air conditioning units." << std::endl;
            break;
        case 5:
            std::cout << "Selected: 32 A Fuse\n"
                      << "Application: Ideal for ring main circuits, consumer high-draw units "
                      << "such as central electric showers and heavy-duty electric cookers." << std::endl;
            break;
        default:
            std::cout << "Invalid selection! Please select a valid option from the menu (1-5)." << std::endl;
            break;
    }

    std::cout << "==================================================" << std::endl;
    return 0;
}
