#include "movie.h"
#include <iostream>

using namespace std;

int Movie::movieCounts = 0;

Movie::Movie(const std::string& t, const std::string& g, int d) : title(t), genre(g), duration(d) {
    movieCounts++;
}

Movie::~Movie() {
    cout << "Movie " << title << " is being deleted\n";
}

void Movie::display() const {
    cout << "Movie: " << title << " (" << genre << ") - " << duration << " minutes\n";
}

std::string Movie::getTitle() const {
    return title;
}

int Movie::getMovieCounts() {
    return movieCounts;
}
