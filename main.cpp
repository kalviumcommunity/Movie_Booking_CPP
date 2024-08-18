#include "movie.h"
#include "customer.h"

int main() {
    Movie movies[] = {
        Movie("Inception", "Sci-Fi", 148),
        Movie("The Godfather", "Crime", 175),
        Movie("The Dark Knight", "Action", 152)
    };

    for (const auto& movie : movies) {
        movie.display();
    }

    Customer customer("John Doe");

    customer.bookTicket(movies[0]);
    customer.bookTicket(movies[1]);

    customer.displayBookings();

    return 0;
}

