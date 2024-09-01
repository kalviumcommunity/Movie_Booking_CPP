#include "movie.h"

int Movie::movieCount = 0;

Movie::Movie(string t, string g, int d) : title(t), genre(g), duration(d) {
    movieCount++;
}

void Movie::display() const {
    cout << "Movie: " << title << " (" << genre << ") - " << duration << " minutes\n";
}

string Movie::getTitle() const {
    return title;
}

int Movie::getMovieCount() {
    return movieCount;
}
