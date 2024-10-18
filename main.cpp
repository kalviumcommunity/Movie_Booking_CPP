#include "movie.h"
#include "customer.h"
#include <iostream>

int main() {
    Movie* inception = new Movie("Inception", "Sci-Fi", 148);

    Customer* defaultCustomer = new Customer();
    defaultCustomer->bookTicket(*inception);
    defaultCustomer->displayBookings();

    PremiumCustomer* premiumCustomer = new PremiumCustomer("John Doe");
    premiumCustomer->bookTicket(*inception);
    premiumCustomer->displayBookings();

    std::cout << "Total customers: " << Customer::getCustomerCounts() << "\n";
    std::cout << "Total movies: " << Movie::getMovieCounts() << "\n";

    delete inception;
    delete defaultCustomer;
    delete premiumCustomer;

    return 0;
}
