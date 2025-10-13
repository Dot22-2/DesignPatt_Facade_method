#pragma once
#include <string>
#include "AuthSystem.hpp"
#include "PaymentSystem.hpp"
#include "NotificationSystem.hpp"

class Facade {
private:
    AuthSystem auth;
    PaymentSystem payment;
    NotificationSystem notify;

public:
    void completePurchase(const std::string& username, double amount);
};
