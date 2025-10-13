#include "AuthSystem.hpp"
#include <iostream>

bool AuthSystem::login(const std::string& username) {
    std::cout << "[Auth] Logged in: " << username << "\n";
    return true;
}
