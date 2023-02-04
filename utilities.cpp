#include <iostream>
#include "utilities.h"

using namespace std;

void Utilities::clearScreen() {
    // code to clear the screen
    cout << "\033c";
}

void Utilities::pause() {
    // code to pause the program
    cout << "Press enter to continue...";
    cin.ignore();
    cin.get();
}
