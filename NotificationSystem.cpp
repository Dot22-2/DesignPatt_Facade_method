#include "NotificationSystem.hpp"
#include <iostream>

void NotificationSystem::sendConfirmation(const std::string& username) {
    std::cout << "[Notify] Confirmation sent to " << username << "\n";
}
