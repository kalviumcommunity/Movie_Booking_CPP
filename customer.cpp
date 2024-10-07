#include "customer.h"
#include <iostream>

int Customer::customerCounts = 0;

Customer::Customer(std::string n) : name(n) {
    customerCounts++;
}


std::string Customer::getName() const {
    return name;
}


void Customer::setName(const std::string& n) {
    name = n;
}

void Customer::bookTicket(const Movie& movie) {
    bookings.push_back(movie);
    std::cout << name << " booked a ticket for " << movie.getTitle() << "\n";
}

void Customer::displayBookings() const {
    std::cout << "Bookings for " << name << ":\n";
    for (std::vector<Movie>::const_iterator it = bookings.begin(); it != bookings.end(); ++it) {
        it->display();
    }
}

int Customer::getCustomerCounts() {
    return customerCounts;
}
