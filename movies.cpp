#include "movie.h"

int Movie::movieCounts = 0;

Movie::Movie(std::string t, std::string g, int d) : title(t), genre(g), duration(d) {
    movieCounts++;
}


std::string Movie::getTitle() const {
    return title;
}

std::string Movie::getGenre() const {
    return genre;
}

int Movie::getDuration() const {
    return duration;
}

void Movie::setTitle(const std::string& t) {
    title = t;
}

void Movie::setGenre(const std::string& g) {
    genre = g;
}

void Movie::setDuration(int d) {
    duration = d;
}

void Movie::display() const {
    std::cout << "Movie: " << title << " (" << genre << ") - " << duration << " minutes\n";
}

int Movie::getMovieCounts() {
    return movieCounts;
}
