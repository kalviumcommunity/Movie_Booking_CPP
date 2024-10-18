#include "movie.h"
#include "customer.h"
#include <iostream>

using namespace std;

int main() {
    Movie* inception = new Movie("Inception", "Sci-Fi", 148);
    PremiumCustomer* premiumCustomer = new PremiumCustomer("Premium John");
    premiumCustomer->bookTicket(*inception);
    premiumCustomer->displayBookings();

    cout << "Total customers: " << Customer::getCustomerCounts() << "\n";
    cout << "Total movies: " << Movie::getMovieCounts() << "\n";

    delete inception;
    delete premiumCustomer;

    return 0;
}
