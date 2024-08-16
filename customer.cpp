#include "customer.h"

Customer::Customer(string n) : name(n) {}

void Customer::bookTicket(const Movie& movie) {
    this->bookings.push_back(movie);
    cout << this->name << " booked a ticket for " << movie.getTitle() << "\n";
}

void Customer::displayBookings() const {
    cout << "Bookings for " << this->name << ":\n";
    for (const auto& booking : this->bookings) {
        booking.display();
    }
}
