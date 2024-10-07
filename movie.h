#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>

class Movie {
private:
    std::string title;   // Private data member
    std::string genre;   // Private data member
    int duration;        // Private data member
    static int movieCounts;  // Private static member

public:
    Movie(std::string t, std::string g, int d);  // Public constructor

    // Public interface (necessary methods)
    void display() const;  
    std::string getTitle() const;  

    // Static method for movie counts
    static int getMovieCounts();  

    // Accessors and mutators for private members
    std::string getGenre() const;
    void setGenre(const std::string& g);

    int getDuration() const;
    void setDuration(int d);

    // Add the setTitle method declaration
    void setTitle(const std::string& t);  // Mutator for title
};

#endif
