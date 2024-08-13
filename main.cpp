#include "movie.h"
#include "customer.h"

int main() {

    Movie movie1("Inception", "Sci-Fi", 148);
    Movie movie2("The Godfather", "Crime", 175);

    movie1.display();
    movie2.display();

    Customer customer("John Doe");
    customer.bookTicket(movie1);
    customer.bookTicket(movie2);

    customer.displayBookings();

    return 0;
}
