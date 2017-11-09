//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#pragma once
#include "MovieRepository.h"
#include "PlayList.h"
#include "MovieValidator.h"

//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
class Controller
{
private:
	Repository repo;
	PlayList *playList;
    MovieValidator validator;
public:
	//Creates the repository.
	Controller(const Repository& r, PlayList *p) : repo(r), playList(p) {}

	//Returns the repository of the movies.
	Repository getRepo() const { return repo; }

	//Returns the repository of the playlists.
	PlayList *getPlayList() const { return playList; }

	/*
	This function adds a new item to the repository.
	INPUT:  genre - The genre type;
			title - The movie title;
            year - Year of Release
			like - The number of likes of the video;
			minutes - The number of minutes of the video;
			seconds - The number of the seconds of the video;
			source - The link of the video.
	OUTPUT: 0 - If the movie does already exists in the repository.
			1 - If the movie has been added.
	*/
	void addMovieToRepository(const std::string& genre, const std::string& title,const std::string& year,const int likes, double minutes, double seconds, const std::string& source);

	/*
	This function deletes an item to the repository.
	INPUT:  genre - The genre Type;
			title - The movie title;
            year - Year of Release;
			like - The number of likes of the video;
			minutes - The number of minutes of the video;
			seconds - The number of the seconds of the video;
			source - The link of the video.
	OUTPUT: 0 - If the movie does not exists in the repository, and nothing was deleted.
			1 - If the movie has been deleted.
	*/
	void deleteMovieFromRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source);

	/*
	This function updates an item from the repository.
	INPUT:  e - The movie.
	OUTPUT: 0 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
	void updateMovieToRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source);
	
	
	/*
	This function tests if a movie already exists in the repository.
	INPUT:  genre - The genre type;
			title - The movie title;
            year - Year of Release
			like - The number of likes of the video;
			minutes - The number of minutes of the video;
			seconds - The number of the seconds of the video;
			source - The link of the video.
	OUTPUT: 0 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
	int testExistFromRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source);

	/*
	This function tests if a movie already exists in the repository.
	INPUT:  genre - The genre type;
			title - The movie title;
            year - Year of Release
			like - The number of likes of the video;
			minutes - The number of minutes of the video;
			seconds - The number of the seconds of the video;
			source - The link of the video.
	OUTPUT: 0 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
	int testExistFromRepositoryByGenre(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source);

	//Adds a movie to the playlist.
	void addMovieToPlayList(const Movie& m);

	//Updates a movie from the playlist.
	void updateMovieToPlayList(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source);
	
	//Deletes a movie from the playlist.
	void deleteMovieToPlayList(const std::string& genre, const std::string& title);

	//Starts to play the first movie.
	void startPlayList();

	//Plays the next movie.
	void nextMoviePlayList();


	/*
	This function tests if a movie already exists in the playlist.
	INPUT:  genre - The genre type;
			title - The movie title;
            year - Year of Release
			like - The number of likes of the video;
			minutes - The number of minutes of the video;
			seconds - The number of the seconds of the video;
			source - The link of the video.
	OUTPUT: 0 - If the movie does not exist in the repository.
			pos - If the movie exists, his position will be returnes.
	*/
	int testExistFromPlayListC(const Movie& m);
    void writeToFileC() { this->repo.writeToFile(); }
    void readFromFileC() { this->repo.readFromFile(); }
    
    void displayPlayListC() { return this->playList->executeThingsPL(); }
    std::vector<Movie> filterByGenre(const std::string& genre)
    {
        vector<Movie> movies = this->repo.getAll();
        int nMovies = count_if(movies.begin(), movies.end(),
                               [genre](const Movie& m)
                               {
                                   return m.getGenre() == genre;
                               });
        
        vector<Movie> moviesByGenre(nMovies);
        copy_if(movies.begin(), movies.end(), moviesByGenre.begin(),
                [genre](const Movie& m)
                {
                    return m.getGenre() == genre;
                });
        
        return moviesByGenre;
    }


};

