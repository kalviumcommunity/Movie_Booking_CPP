#include "customer.h"
#include <iostream>

int Customer::customerCounts = 0;

Customer::Customer() : name("Unknown") {
    customerCounts++;
}


Customer::Customer(std::string n) : name(n) {
    customerCounts++;
}

Customer::~Customer() {
    std::cout << "Customer " << name << " is being deleted\n";
}

void Customer::bookTicket(const Movie& movie) {
    bookings.push_back(movie);
    std::cout << name << " booked a ticket for " << movie.getTitle() << "\n";
}

void Customer::displayBookings() const {
    std::cout << "Bookings for " << name << ":\n";
    for (const auto& booking : bookings) {
        booking.display();
    }
}

int Customer::getCustomerCounts() {
    return customerCounts;
}
