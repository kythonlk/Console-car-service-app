#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    // data members for managing user login
    std::string username;
    std::string password;
    bool isLoggedIn;

public:
    User() {
        username = "admin";
        password = "password";
        isLoggedIn = false;
    }
    // member functions for managing user login
    void login();
    void logout();
};


#endif
