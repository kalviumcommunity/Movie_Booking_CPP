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

    void display() const;  
    std::string getTitle() const;  

    static int getMovieCounts();  

    std::string getGenre() const;
    void setGenre(const std::string& g);

    int getDuration() const;
    void setDuration(int d);


    void setTitle(const std::string& t); 
};

#endif
