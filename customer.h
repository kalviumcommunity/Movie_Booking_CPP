#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "movie.h"

using namespace std;

class Customer {
protected:
    string name;
    vector<Movie> bookings;
    static int customerCounts;

public:
    Customer(string n);      
    virtual ~Customer();     

    virtual void bookTicket(const Movie& movie); 
    void displayBookings() const;                

    static int getCustomerCounts();          
};

class PremiumCustomer : public Customer {
private:
    double discountRate;

public:
    PremiumCustomer(string n);                    
    void bookTicket(const Movie& movie) override; 
    double getDiscountRate() const;               
};

#endif
