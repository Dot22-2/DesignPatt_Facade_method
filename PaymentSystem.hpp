#pragma once
#include <string>

class PaymentSystem {
public:
    bool processPayment(const std::string& username, double amount);
};
