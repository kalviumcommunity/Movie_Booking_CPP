#include "movie.h"
#include "customer.h"
#include <iostream>

int main() {
    Movie* inception = new Movie("Inception", "Sci-Fi", 148);

    Customer* defaultCustomer = new Customer();
    defaultCustomer->bookTicket(*inception);
    defaultCustomer->displayBookings();

    Customer* namedCustomer = new Customer("John Doe");
    namedCustomer->bookTicket(*inception);
    namedCustomer->displayBookings();

    Customer* agedCustomer = new Customer("Jane Doe", 30);
    agedCustomer->bookTicket(*inception);
    agedCustomer->displayBookings();

    PremiumCustomer* premiumCustomer = new PremiumCustomer("Premium John");
    premiumCustomer->bookTicket(*inception);
    premiumCustomer->displayBookings();

    std::cout << "Total customers: " << Customer::getCustomerCounts() << "\n";
    std::cout << "Total movies: " << Movie::getMovieCounts() << "\n";

    delete inception;
    delete defaultCustomer;
    delete namedCustomer;
    delete agedCustomer;
    delete premiumCustomer;

    return 0;
}
