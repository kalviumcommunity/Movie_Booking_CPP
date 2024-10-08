#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>

class Movie {
private:
    std::string title;
    std::string genre;
    int duration;
    static int movieCounts;

public:

    Movie(std::string t, std::string g, int d);


    ~ Movie();

    void display() const;
    std::string getTitle() const;

    static int getMovieCounts(); 
};

#endif
