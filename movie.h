#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>

using namespace std;

class Movie {
private:
    string title;
    string genre;
    int duration;
    static int movieCounts; 

public:
    Movie(string t, string g, int d);

    void display() const;

    string getTitle() const;

    static int getMovieCounts();  
};

#endif
