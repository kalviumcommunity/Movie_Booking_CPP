#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "movie.h"

using namespace std;

class Customer {
private:
    string name;
    vector<Movie> bookings;
    static int customerCount;

public:
    Customer(string n);

    void bookTicket(const Movie& movie);

    void displayBookings() const;

    static int getCustomerCount(); 
};

#endif
