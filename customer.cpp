#include "customer.h"
#include <iostream>

using namespace std;

int Customer::customerCounts = 0;

Customer::Customer(string n) : name(n) {
    customerCounts++;
}

Customer::~Customer() {
    cout << "Customer " << name << " is being deleted\n";
}

void Customer::bookTicket(const Movie& movie) {
    bookings.push_back(movie);
    cout << name << " booked a ticket for " << movie.getTitle() << "\n";
}

void Customer::displayBookings() const {
    cout << "Bookings for " << name << ":\n";
    for (const auto& booking : bookings) {
        booking.display();
    }
}


int Customer::getCustomerCounts() {
    return customerCounts;
}


PremiumCustomer::PremiumCustomer(string n) : Customer(n), discountRate(0.1) {}


void PremiumCustomer::bookTicket(const Movie& movie) {
    bookings.push_back(movie);
    cout << name << " booked a ticket for " << movie.getTitle() 
         << " with a discount of " << (discountRate * 100) << "%\n";
}

double PremiumCustomer::getDiscountRate() const {
    return discountRate;
}
