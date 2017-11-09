//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#pragma once
#include "DynamicArray.h"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class PlayList
{
protected:
//	DynamicVector<Movie> movies;
    std::vector<Movie> movies;
	int current;

public:
	PlayList();
    int find(const Movie& m);

	//Adds a new movie to the playlist.
	void addPlayList(const Movie& m);

	//Deletes a movie from the playlist
	void deletePlayList(const Movie& m);

	//Updates a movie from the playlist
	void updateMoviePlayList(const Movie& m);

	//Returns the position of the current movie we are
	Movie getCurrentMovie();
	
	//Plays the first movie.
	void play();

	//Plays the next movie.
	void next();

	//Returns the playlist of the movie
//	DynamicVector<Movie> getPlayList() const { return movies; }
    std::vector<Movie> getPlayList() const { return movies; }

	//Returns the movie with a given genre and name.
	Movie findByGenreAndTitle(const std::string& genre, const std::string& title);

	//Tests if the movie does exist in the playlist.
	int testExistInPlayList(const Movie& m);

	//Checks if the playlist is empty or not.
	bool isEmpty();

	//Returns the size of the playlist.
	int getSizePlayList();
    std::vector<Movie> getAll();
    
    virtual void writeToFilePL() = 0;
    virtual void executeThingsPL() = 0;
};
