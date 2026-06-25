#include <iostream>

using namespace std;

int main() {
    int password;

    // First input
    cout << "Enter password: ";
    cin >> password;

    // Loop until correct password is entered
    while (password != 2080) {
        cout << "Incorrect password. Try again." << endl;
        cout << "Enter password: ";
        cin >> password;
    }

    // When correct password is entered
    cout << "Access granted to control panel." << endl;

    return 0;
}
