#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "movie.h"

class Customer {
private:
    std::string name;  
    std::vector<Movie> bookings;
    static int customerCounts;

public:
    Customer(std::string n);


    std::string getName() const; 
    void setName(const std::string& n); 

    void bookTicket(const Movie& movie);
    void displayBookings() const;

    static int getCustomerCounts(); 
};

#endif
