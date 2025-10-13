#include "PaymentSystem.hpp"
#include <iostream>

bool PaymentSystem::processPayment(const std::string& username, double amount) {
    std::cout << "[Payment] Charged $" << amount << " to " << username << "\n";
    return true;
}
