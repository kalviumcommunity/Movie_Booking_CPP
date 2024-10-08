#include "movie.h"
#include "customer.h"

int main() {

    Movie* inception = new Movie("Inception", "Sci-Fi", 148);


    Customer* defaultCustomer = new Customer();
    defaultCustomer->bookTicket(*inception);
    defaultCustomer->displayBookings();


    Customer* customer = new Customer("John Doe");
    customer->bookTicket(*inception);
    customer->displayBookings();

    std::cout << "Total customers: " << Customer::getCustomerCounts() << "\n";
    std::cout << "Total movies: " << Movie::getMovieCounts() << "\n";


    return 0;
}
