#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "movie.h"

class Customer {
private:
    std::string name;  // Private data member
    std::vector<Movie> bookings;  // Private data member (abstraction)
    static int customerCounts;  // Private static member (hidden implementation detail)

public:
    Customer(std::string n);  // Public constructor (visible to users)

    // Public interface (providing necessary methods)
    void bookTicket(const Movie& movie);
    void displayBookings() const;

    // Public static method to get customer counts (essential information exposed)
    static int getCustomerCounts(); 

    // Accessor and mutator (for name, controlled access to private data)
    std::string getName() const;  
    void setName(const std::string& n);  
};

#endif
