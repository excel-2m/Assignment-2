#include <iostream>

int main() {
    // 1. Declare a suitable variable for GPA (double handles decimal places)
    double gpa;

    // 2. Accept GPA input from the user
    std::cout << "Enter student's GPA: ";
    std::cin >> gpa;

    std::cout << "-----------------------------------------™" << std::endl;

    // 3. Use an if...else statement to determine eligibility
    // 4. Display the correct scholarship message
    if (gpa >= 3.5) {
        std::cout << "Eligible for engineering scholarship." << std::endl;
    } 
    else {
        std::cout << "Not eligible for engineering scholarship." << std::endl;
    }

    return 0;
}
