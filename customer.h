#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "movie.h"
#include <string>
#include <vector>
#include <iostream>

class Customer {
protected:
    std::string name;
    std::vector<Movie> bookings;
    static int customerCounts;

public:
    Customer(const std::string& name) : name(name) {
        customerCounts++;
    }

    virtual ~Customer() {
        customerCounts--;
        std::cout << "Customer " << name << " is being deleted\n";
    }

    virtual void bookTicket(const Movie& movie) {
        bookings.push_back(movie);
        std::cout << name << " booked a ticket for " << movie.getTitle() << "\n";
    }

    virtual void displayBookings() const {
        std::cout << "Bookings for " << name << ":\n";
        for (const auto& booking : bookings) {
            booking.display();
        }
    }

    static int getCustomerCounts() { return customerCounts; }
    std::string getName() const { return name; }
};

int Customer::customerCounts = 0;

class PremiumCustomer : public Customer {
private:
    double discountRate;

public:
    PremiumCustomer(const std::string& name)
        : Customer(name), discountRate(0.1) {}

    void bookTicket(const Movie& movie) override {
        bookings.push_back(movie);
        std::cout << name << " booked a ticket for " << movie.getTitle()
                  << " with a discount of " << (discountRate * 100) << "%\n";
    }

    double getDiscountRate() const { return discountRate; }
};

#endif
