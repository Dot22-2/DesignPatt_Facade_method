#include "Facade.hpp"

void Facade::completePurchase(const std::string& username, double amount) {
    if (auth.login(username) && payment.processPayment(username, amount)) {
        notify.sendConfirmation(username);
    }
}
