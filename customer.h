#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "movie.h"

class Customer {
protected:
    std::string name;
    std::vector<Movie> bookings;
    static int customerCounts;

public:
    Customer(const std::string& name);
    virtual ~Customer();

    std::string getName() const { return name; }
    

    virtual void bookTicket(const Movie& movie);
    
    void displayBookings() const;
    static int getCustomerCounts();
};

class PremiumCustomer : public Customer {
private:
    double discountRate;

public:
    PremiumCustomer(const std::string& name);
    

    void bookTicket(const Movie& movie) override;
    
    double getDiscountRate() const;
};

#endif
