#include <iostream>
#include <fstream>
#include "product.h"
#include "user.h"
#include "utilities.h"


using namespace std;

int main() {
    Product product;
    User user;
    int choice;
    while (true) {
        cout << "Welcome to Best Auto Part" << endl;
        cout << "1. List available services and products" << endl;
        cout << "2. Search specific product or service" << endl;
        cout << "3. Add new service or product" << endl;
        cout << "4. Update existing service or product" << endl;
        cout << "5. Login" << endl;
        cout << "6. Logout" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                product.list();
                break;
            case 2:
                product.search();
                break;
            case 3:
                product.add();
                break;
            case 4:
                product.update();
                break;
            case 5:
                user.login();
                break;
            case 6:
                user.logout();
                break;
            case 7:
                cout << "Thank you for using Best Auto Part" << endl;
                return 0;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
    return 0;
}
