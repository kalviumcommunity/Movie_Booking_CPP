#include "movie.h"
#include "customer.h"

int main() {

    Movie* movies[] = {
        new Movie("Inception", "Sci-Fi", 148),
        new Movie("The Godfather", "Crime", 175),
        new Movie("The Dark Knight", "Action", 152)
    };

    for (int i = 0; i < 3; i++) {
        movies[i]->display();
    }

    Customer* customer = new Customer("John Doe");

    customer->bookTicket(*movies[0]);
    customer->bookTicket(*movies[1]);

    customer->displayBookings();

    cout << "Total customers: " << Customer::getCustomerCount() << "\n";
    cout << "Total movies: " << Movie::getMovieCount() << "\n";

    for (int i = 0; i < 3; i++) {
        delete movies[i];
    }
    delete customer;

    return 0;
}
