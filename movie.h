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

    std::string getTitle() const;
    std::string getGenre() const;
    int getDuration() const;

    void setTitle(const std::string& t);
    void setGenre(const std::string& g);
    void setDuration(int d);

    void display() const;

    static int getMovieCounts();  
};

#endif
