#include "customer.h"
#include <iostream>

int Customer::customerCounts = 0;

Customer::Customer(string n) : name(n) {
    customerCounts++;
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
