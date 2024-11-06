#include "movie.h"
#include "customer.h"
#include "booking.h"
#include <iostream>

int main() {
    Movie inception("Inception", "Sci-Fi", 148);

    Customer regularCustomer("Regular Alice");
    regularCustomer.bookTicket(inception);
    regularCustomer.displayBookings();

    PremiumCustomer premiumCustomer("Premium John");
    premiumCustomer.bookTicket(inception);
    premiumCustomer.displayBookings();


    Booking regularBooking(regularCustomer, inception);
    regularBooking.confirmBooking();

    Booking premiumBooking(premiumCustomer, inception);
    premiumBooking.confirmBooking();

    std::cout << "Total customers: " << Customer::getCustomerCounts() << "\n";
    std::cout << "Total movies: " << Movie::getMovieCounts() << "\n";

    return 0;
}
