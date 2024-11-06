#ifndef BOOKING_H
#define BOOKING_H

#include "movie.h"
#include "customer.h"
#include <iostream>

class Booking {
private:
    Customer& customer;  
    Movie movie;

public:
    Booking(Customer& customer, const Movie& movie) 
        : customer(customer), movie(movie) {}

    void confirmBooking() const {
        std::cout << customer.getName() << " has booked a ticket for " 
                  << movie.getTitle() << ".\n";
    }
};

#endif
