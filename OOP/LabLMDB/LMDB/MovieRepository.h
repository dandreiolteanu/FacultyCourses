//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#pragma once
//#include "DynamicArray.h"
#include <vector>
#include "Movie.h"
#include <algorithm>
#include <fstream>
using namespace std;
class Repository
{
private:
//	DynamicVector<Movie> movies;
    std::vector<Movie> movies;


public:
	//Returns the size of the repo.
	int getSizeRepo();

	Repository() {}

	/*
	This function adds a new item to the repository.
	INPUT:  e - The movie.
	OUTPUT: 0 - If the movie does already exists in the repository.
			1 - If the movie has been added.
	*/
    int find(const Movie& m);
    void addMovie(const Movie& m);

//	int addMovie(const Movie& m);
	

	/*
	This function deletes an item to the repository.
	INPUT:  e - The movie.
	OUTPUT: 0 - If the movie does not exists in the repository, and nothing was deleted.
			1 - If the movie has been deleted.
	*/
    void deleteMovie(const Movie& m);

//	int deleteMovie(const Movie& m);


	/*
	This function updates an item from the repository.
	INPUT:  e - The movie.
	OUTPUT: 0 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
    void updateMovie(const Movie& m);
//	int updateMovie(const Movie& m);

	/*
	This function checks if an item exists in the repository.
	INPUT:  e - The movie.
	OUTPUT: -1 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
	int testExistInRepo(const Movie& m);

	/*
	This function checks if an item exists in the repository.
	INPUT:  e - The movie.
	OUTPUT: -1 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
	int testExistInRepoByPresenter(const Movie& m);

	//Returns the MovieRepo.
//	DynamicVector<Movie> getMovies() const { return movies; }

//	Returns the movie with a given genre and title.
	Movie findByGenreAndTitle(const std::string& genre, const std::string& title);
    std::vector<Movie> getAll();

    int testExist(const Movie& m);
    
    void writeToFile();
    void readFromFile();
};
