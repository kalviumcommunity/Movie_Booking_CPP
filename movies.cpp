#include "movie.h"

Movie::Movie(string t, string g, int d) : title(t), genre(g), duration(d) {}

void Movie::display() const {
    cout << "Movie: " << this->title << " (" << this->genre << ") - " << this->duration << " minutes\n";
}

string Movie::getTitle() const {
    return this->title;
}
