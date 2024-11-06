#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    std::string title;
    std::string genre;
    int duration;
    static int movieCounts;

public:
    Movie(const std::string& title, const std::string& genre, int duration);
    ~Movie();

    std::string getTitle() const;
    std::string getGenre() const;
    int getDuration() const;
    void display() const;
    static int getMovieCounts();
};

#endif
