//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#pragma once
#include <iostream>
#include <iostream>
#include <sstream>
#include <vector>

class Duration
{
private:
	double minutes;
	double seconds;
public:
	Duration() : minutes(0), seconds(0) {}
	Duration(double min, double sec) : minutes(min), seconds(sec) {}

	double getMinutes() const { return minutes; }
	double getSeconds() const { return seconds; }
	void setMinutes(double min) { minutes = min; }
	void setSeconds(double sec) { seconds = sec; }
};

class Movie
{
public:
	std::string title;
	std::string genre;
    std::string year;
	int likes;
	Duration duration;
	std::string source;
	static int allInstances;
	static int currentInstances;

public:
	Movie();

	Movie(const std::string& genre, const std::string& title,const std::string& year, int likes, const Duration& duration, const std::string& source);

	std::string getTitle() const { return title; }
	std::string getGenre() const { return genre; }
    std::string getYear() const { return year; }
	int getLikes() const { return likes; }
	Duration getDuration() const { return duration; }
	std::string getSource() const { return source; }

	//Opens a movie in browser.
	void play();

	//Destructor
	~Movie();

	//Copy of the movie m.
	Movie(const Movie& m);
    
    friend std::istream & operator >> (std::istream & is, Movie& m);
    friend std::ostream & operator << (std::ostream & os, Movie& m);


};

