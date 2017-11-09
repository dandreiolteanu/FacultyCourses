//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//


#include "Controller.h"
#include "Exceptions.h"
void Controller::addMovieToRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source)
{
	Movie m{ genre, title,year, likes, Duration{ minutes, seconds }, source };
//	int res = this->repo.addMovie(m);
//	return res;
    this->validator.validate(m);
    this->repo.addMovie(m);

}

void Controller::deleteMovieFromRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source)
{
	Movie m{ genre, title,year, likes, Duration{ minutes, seconds }, source };
//	int res = this->repo.deleteMovie(m);
//	return res;
    this->repo.deleteMovie(m);

}

int Controller::testExistFromRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source)
{
	Movie m{ genre, title,year, likes, Duration{ minutes, seconds }, source };
	int res = this->repo.find(m);
	return res;
}

int Controller::testExistFromPlayListC(const Movie& m)
{
	int res = this->playList->testExistInPlayList(m);
	return res;
}

int Controller::testExistFromRepositoryByGenre(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source)
{
	Movie m{ genre, title,year, likes, Duration{ minutes, seconds }, source };
	int res = this->repo.testExist(m);
	return res;
}

void Controller::updateMovieToRepository(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source)
{
	Movie m{ genre, title,year, likes, Duration{ minutes, seconds }, source };
//	int res = this->repo.updateMovie(m);
//	return res;
    this->repo.updateMovie(m);
}

void Controller::updateMovieToPlayList(const std::string& genre, const std::string& title,const std::string& year, const int likes, double minutes, double seconds, const std::string& source)
{
	Movie m{ genre, title,year, likes, Duration{ minutes, seconds }, source };
	this->playList->updateMoviePlayList(m);
}

void Controller::addMovieToPlayList(const Movie& m)
{
	this->playList->addPlayList(m);
}

void Controller::deleteMovieToPlayList(const std::string& genre, const std::string& title)
{
	Movie m = { genre, title,"", 0, Duration{ 0, 0 }, "" };
	this->playList->deletePlayList(m);
}

void Controller::startPlayList()
{
	this->playList->play();
}

void Controller::nextMoviePlayList()
{
	this->playList->next();
}
