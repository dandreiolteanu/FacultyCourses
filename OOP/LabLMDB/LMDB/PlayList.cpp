//
//  Created by Olteanu Andrei on 01/04/2017.
//  Copyright © 2017 Olteanu Andrei. All rights reserved.
//
#include "PlayList.h"
int PlayList::find(const Movie& m)
{
    int pos = -1;
    for (int i = 0; i < this->movies.size(); i++)
        if (movies[i].getGenre() == m.getGenre() && movies[i].getTitle() == m.getTitle())
            if (pos == -1)
                pos = i;
    return pos;
}

PlayList::PlayList()
{
	this->current = 0;
}

void PlayList::addPlayList(const Movie& m)
{
//	this->movies.add(m);
    this->movies.push_back(m);
}

void PlayList::deletePlayList(const Movie& m)
{
//	if (this->movies.testExist(m) != -1)
//	{
//		this->movies.deleteM(m);
//	}
    
    if (this->find(m) != -1)
    {
        this->movies.erase(movies.begin() + this->find(m));
    }
}

void PlayList::updateMoviePlayList(const Movie& m)
{
//	if (this->movies.testExist(m) != -1)
//	{
//		this->movies.update(m);
//	}
    
    if (this->find(m) != -1)
    {
        this->deletePlayList(m);
        this->addPlayList(m);
    }
}

Movie PlayList::getCurrentMovie()
{
//	if (this->current == this->movies.getSize())
//		this->current = 0;
//	Movie* elems = this->movies.getAllElems();
//	if (elems != NULL)
//		return elems[this->current];
//	return Movie{};
    
    if (this->current == this->movies.size())
        this->current = 0;
    std::vector<Movie> elems = this->getAll();
    if (elems.size() != 0)
        return elems[this->current];
    return Movie{};
}


Movie PlayList::findByGenreAndTitle(const std::string& genre, const std::string& title)
{
//	Movie* moviesInDynamicArray = this->movies.getAllElems();
//	if (moviesInDynamicArray == NULL)
//		return Movie{};
//
//	for (int i = 0; i < this->movies.getSize(); i++)
//	{
//		Movie m = moviesInDynamicArray[i];
//		if (m.getGenre() == genre && m.getTitle() == title)
//			return m;
//	}
//
//	return Movie{};
    
    std::vector<Movie> v = this->getAll();
    if (v.size() == 0)
        return Movie{};
    
    for (int i = 0; i < this->movies.size(); i++)
    {
        Movie m = v[i];
        if (m.getGenre() == genre && m.getTitle() == title)
            return m;
    }
    
    return Movie{};
}

void PlayList::play()
{
	if (this->movies.size() == 0)
		return;
	this->current = 0;
	Movie currentMovie = this->getCurrentMovie();
	currentMovie.play();
}

void PlayList::next()
{
	if (this->movies.size() == 0)
		return;
	this->current++;
	Movie currentMovie = this->getCurrentMovie();
	currentMovie.play();
}

bool PlayList::isEmpty()
{
	return this->movies.size() == 0;
}

int PlayList::testExistInPlayList(const Movie& m)
{
    int res = this->find(m);
	return res;
}

//int PlayList::getSizePlayList()
//{
//	return this->movies.size();
//}
std::vector<Movie> PlayList::getAll()
{
    return this->movies;
}
