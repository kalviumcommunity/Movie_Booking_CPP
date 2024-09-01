#include "movie.h"

int Movie::movieCounts = 0;

Movie::Movie(string t, string g, int d) : title(t), genre(g), duration(d) {
    movieCounts++;
}

void Movie::display() const {
    cout << "Movie: " << title << " (" << genre << ") - " << duration << " minutes\n";
}

string Movie::getTitle() const {
    return title;
}

int Movie::getMovieCounts() {
    return movieCounts;
}
