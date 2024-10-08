#include "movie.h"

int Movie::movieCounts = 0;

Movie::Movie(std::string t, std::string g, int d) : title(t), genre(g), duration(d) {
    movieCounts++;
}

Movie::~Movie() {
    std::cout << "Movie " << title << " is being deleted\n";
}

void Movie::display() const {
    std::cout << "Movie: " << title << " (" << genre << ") - " << duration << " minutes\n";
}

std::string Movie::getTitle() const {
    return title;
}

int Movie::getMovieCounts() {
    return movieCounts;
}
