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
    Movie(std::string t, std::string g, int d);
    void display() const;
    std::string getTitle() const;
    static int getMovieCounts();
    virtual ~Movie();
};

#endif
