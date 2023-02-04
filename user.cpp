#include <iostream>
#include "user.h"

using namespace std;

void User::login() {
    string enteredUsername, enteredPassword;
    cout << "Enter your username: ";
    cin >> enteredUsername;
    cout << "Enter your password: ";
    cin >> enteredPassword;
    // code to check entered username and password against a database or file
    if (enteredUsername == username && enteredPassword == password) {
        isLoggedIn = true;
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password. Please try again." << endl;
    }
}

void User::logout() {
    if (isLoggedIn) {
        isLoggedIn = false;
        cout << "Logout successful!" << endl;
    } else {
        cout << "You are not currently logged in." << endl;
    }
}
